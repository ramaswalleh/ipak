BLOCK modsc
    INCLUDE "c1_3a.inc"

EXTERNALS
    GetSRNms : GetSRNames ('..\ext\SecResp')

{PRIMARY CARETAKER NAME BLOCK DEFINATION}
BLOCK BlkSC02
EXTERNALS
    GetSRNms : GetSRNames ('..\ext\SecResp')

FIELDS
    SC02_fname "Primary caretaker's @Bfirst@B name:" : STRING [15]
    SC02_sname "Primary caretaker's @Bsecond@B name:
               @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15]
    SC02_lname "Primary caretaker's @Blast@B name:" : STRING [15]

RULES
    IF (BPC [sc].SC03 = EXIST) THEN
        SC02_fname|GetSRNms.LOOKUP (TRI).SRFIRSTNAME
        IF NOT (SC02_fname = DK) THEN
            IF (SC02_fname = RESPONSE) THEN
                IF GetSRNms.SEARCH (SC02_fname) THEN
                    GetSRNms.READ
                    SC02_sname:= GetSRNms.SRSECONDNAME
                    SC02_lname:= GetSRNms.SRLASTNAME
                ENDIF
            ENDIF
            SC02_sname.SHOW
            SC02_lname.SHOW
            c1_3a [sc].BSR.TSR004.BSR004.SR004_fname:= SC02_fname
            c1_3a [sc].BSR.TSR004.BSR004.SR004_sname:= SC02_sname
            c1_3a [sc].BSR.TSR004.BSR004.SR004_lname:= SC02_lname
            c1_3a [sc].BSR.SR_id:= GetSRNms.SRID
        ENDIF
    ELSE
        SC02_fname
        SC02_sname
        SC02_lname
        c1_3a [sc].BSR.TSR004.BSR004.SR004_fname:= SC02_fname
        c1_3a [sc].BSR.TSR004.BSR004.SR004_sname:= SC02_sname
        c1_3a [sc].BSR.TSR004.BSR004.SR004_lname:= SC02_lname
    ENDIF
ENDBLOCK

{PARASITE CHILD'S DATE OF BIRTH BLOCK DEFINATION}
BLOCK BlkSC3
FIELDS
    SC3_day "Parasite child's @BDAY@B of birth:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PARASITE CHILD'S DAY OF BIRTH@R"
            : 1..31, DK
    SC3_month "Parasite child's @BMONTH@B of birth:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PARASITE CHILD'S MONTH OF BIRTH@R"
              : 1..12, DK
    SC3_year "Parasite child's @BYEAR@B of birth:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PARASITE CHILD'S YEAR OF BIRTH@R"
             : 2008..2015, DK
    SC3_dob : STRING [10]

RULES
    SC3_day
    SC3_month
    SC3_year
    SC3_dob.KEEP

    IF (SC3_year > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/The @Bparasite child's year of birth@B entered as @R@B^SC3_year@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (SC3_year = sdatestamp.YEAR) AND (SC3_month > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bparasite child's month of birth@B entered as @R@B^SC3_month@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF (SC3_year = sdatestamp.YEAR) AND (SC3_month = sdatestamp.MONTH) AND (SC3_day > sdatestamp.DAY) THEN
                ERROR "@R@BERROR!@B
                      @/@/The @Bparasite child's day of birth@B entered as @R@B^SC3_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSE
                IF (SC3_day <> DK) THEN
                    IF (SC3_day < 10) THEN
                        SC3_dob:= '0' + STR (SC3_day) + '/'
                    ELSE
                        SC3_dob:= STR (SC3_day) + '/'
                    ENDIF
                ELSE
                    SC3_dob:= '99/'
                ENDIF
                IF (SC3_month <> DK) THEN
                    IF (SC3_month < 10) THEN
                        SC3_dob:= SC3_dob + '0' + STR (SC3_month) + '/'
                    ELSE
                        SC3_dob:= SC3_dob + STR (SC3_month) + '/'
                    ENDIF
                ELSE
                    SC3_dob:= SC3_dob + '99/'
                ENDIF
                IF (SC3_year <> DK) THEN
                    SC3_dob:= SC3_dob + STR (SC3_year)
                ELSE
                    SC3_dob:= SC3_dob + '9999'
                ENDIF
            ENDIF
        ENDIF
    ENDIF
    IF NOT ((SC3_year = DK) OR (SC3_month = DK) OR (SC3_day = DK)) THEN
        SIGNAL
            ((TODATE (SC3_year, SC3_month, SC3_day) < (sdatestamp - (0, 17, 0))))
                "@G@BALERT!@B
                @/@/The @Bparasite child@B is @Uyounger@U than @B18 months@B old.
                @/@/Suppress if OK.@G"
        SIGNAL
            ((TODATE (SC3_year, SC3_month, SC3_day) > (sdatestamp - (0, 28, 0))))
                 "@G@BALERT!@B
                 @/@/The @Bparasite child@B is @Uolder@U than @B27 months@B old.
                 @/@/Suppress if OK.@G"
    ENDIF
ENDBLOCK

{PARASITE CHILD'S NAMES BLOCK}
BLOCK BlkSC2
FIELDS
    SC2_fname "Parasite child's @Bfirst@B name:" : STRING [15]
    SC2_sname "Parasite child's @Bsecond@B name:
              @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              : STRING [15]
    SC2_lname "Parasite child's @Blast@B name:" : STRING [15]

RULES
    SC2_fname
    SC2_sname
    SC2_lname
    IF NOT (BPC [sc].SC03 = STUDY) THEN
        c1_3a [sc].BC1B.C1B_Cfname:= SC2_fname
    ENDIF
ENDBLOCK

{PRIMARY CARETAKER NAME TABLE}
TABLE TblSC02
FIELDS
    BSC02 : BlkSC02
RULES
    BSC02
ENDTABLE

{PARASITE CHILD'S DATE OF BIRTH TABLE}
TABLE TblSC3
FIELDS
    BSC3 : BlkSC3
RULES
    BSC3
ENDTABLE

{PARASITE CHILD'S NAMES TABLE}
TABLE TblSC2
FIELDS
    BSC2 : BlkSC2
RULES
    BSC2
ENDTABLE

BLOCK BlkPC
FIELDS
    SC01 "CHILD RESIDES AT STUDY HOUSEHOLD?" : TYesNo
    SC03 "CHILD'S PRIMARY CARETAKER"
         : (STUDY "Study Respondent (Study Child's primary caretaker)",
            EXIST "Previously mentioned Secondary Respondent (name already entered)",
            DIFF "Different Secondary Respondent")
    TSC02 : TblSC02
    SC04 "Secondary Respondent ID:" : TIndividualID
    SC1 "Parasite Child ID:" : TIndividualID
    SC12 "Confirm Child ID:" : TIndividualID
    SC1A "Confirm Child's Gender:"
         : (MALE "Male",
            FEMALE "Female")
    TSC2 : TblSC2
    TSC3 : TblSC3
    SC4 "WERE YOU ABLE TO COLLECT A STOOL SAMPLE FROM THIS CHILD?" : TYesNo
    SC5 "WHY?"
        : (REFUSE "Mother / child refused",
           HOME "Child not at home",
           AVAILABLE "Stool not available",
           OTHER "Other")
    SC5_oth "Specify other reason why:" : STRING [30]
    SC6 "WAS THE CORRECT CHILD'S NAME WRITTEN ON THE STOOL CONTAINER?" : TYesNo
    SC7 "When did the child last defecate?
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN THE CHILD DEFECATED@R"
        "Je mtoto alienda haja kubwa lini?
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN THE CHILD DEFECATED@R"
        : (YESTERDAY "Yesterday" "Jana",
           TODAY "Today" "Leo"), DK
    SC7a "At what time did the child defecate?"
         "Ni saa ngapi mtoto aliend haja kubwa?"
         : T24HRClock
    SC8 "Were you [PRIMARY CARETAKER] present during child's defecation?
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THEY WERE PRESENT DURING CHILD'S DEFECATION@R"
        "Je ulikuwepo [PRIMARY CARETAKER] wakati mtoto alienda haja?
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THEY WERE PRESENT DURING CHILD'S DEFECATION@R"
        : TYesNo, DK
    SC8A "@BOBSERVE:@B
         @/@/WERE YOU, THE FIELD OFFICER, PRESENT DURING CHILD'S DEFECATION?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU DON'T KNOW / NOT SURE YOU WERE PRESENT DURING CHILD'S DEFECATION@R"
         : TYesNo, DK
    SC9 "ENTER TIME YOU COLLECT STOOL SAMPLE AND PLACE IN COLD BOX:
        @/@/@R24 HOUR TIME FORMAT
        @/@/PLEASE BE EXACT ABOUT MINUTES@R"
        : T24HRClock
    SC10 "Stool collection LABEL ID (CHILD ID)" : TLabelID
    SC11 "ENTER STOOL CONTAINER SAMPLE ID:" : 1000..9999
    SC11B "@BOBSERVE:@B
          @/@/IS CHILD WEARING SHOES?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU DO NOT KNOW IF CHILD IS WEARING SHOES / CHILD NOT PRESENT@R"
          : TYesNo, DK

AUXFIELDS
    aux_sc "@GPARASITE CHILD @B^sc@B@G" : (ENTER), EMPTY
    aux_SC02 "@GCHILD'S PRIMARY CARETAKER NAME:@G" : (ENTER), EMPTY
    aux_SC2 "@GConfirm child's names:@G" : (ENTER), EMPTY
    aux_SC3 "@GConfirm child's Date of Birth (DOB):@G" : (ENTER), EMPTY
    aux_SC04 : TIndividualID

LAYOUT
    BEFORE aux_sc NEWPAGE
    AFTER aux_sc NEWPAGE

RULES
    aux_sc
    SC01
    IF (SC01 = YES) THEN
        sr:= (sr + 1)
        index [sr]:= sc
        intParSH:= intParSH + 1
    ENDIF
    SC03
    IF (SC03 = STUDY) THEN
        intParChil:= (intParChil + 1)
    ELSEIF (SC03 = EXIST) THEN
        aux_SC02
        TSC02
        SC04:= GetSRNms.SRID
        SC04.SHOW
    ELSE
        newSR:= (newSR + 1)
        aux_SC02
        TSC02
        IF (newSR = 1) THEN
            SC04:= hhid + '04'
            SC04.SHOW
            c1_3a [sc].BSR.SR_id:= SC04
        ELSEIF (newSR = 2) THEN
            SC04:= hhid + '05'
            SC04.SHOW
            c1_3a [sc].BSR.SR_id:= SC04
        ELSEIF (newSR = 3) THEN
            SC04:= hhid + '06'
            SC04.SHOW
            c1_3a [sc].BSR.SR_id:= SC04
        ELSEIF (newSR = 4) THEN
            SC04:= hhid + '07'
            SC04.SHOW
            c1_3a [sc].BSR.SR_id:= SC04
        ELSEIF (newSR = 5) THEN
            SC04:= hhid + '08'
            SC04.SHOW
            c1_3a [sc].BSR.SR_id:= SC04
        ELSEIF (newSR = 6) THEN
            SC04:= hhid + '09'
            SC04.SHOW
            c1_3a [sc].BSR.SR_id:= SC04
        ELSEIF (newSR = 7) THEN
            SC04:= hhid + '10'
            SC04.SHOW
            c1_3a [sc].BSR.SR_id:= SC04
        ELSEIF (newSR = 8) THEN
            SC04:= hhid + '11'
            SC04.SHOW
            c1_3a [sc].BSR.SR_id:= SC04
        ENDIF
    ENDIF
    SC1
    aux_SC04.KEEP
    IF ((SC1 = RESPONSE) AND (aux_SC04 <> SC04)) THEN
        WriteSRNames (TSC02.BSC02.SC02_fname, TSC02.BSC02.SC02_sname, TSC02.BSC02.SC02_lname, SC04)
        aux_SC04:= SC04
    ENDIF
    CHECK
        (LEN (SC1) > 8) "@R@BERROR!@B
                        @/@/Please check that your @BParasite Child ID@B entry has the @Ucorrect number of digits@U!@R"
    IF NOT ((VAL (SUBSTRING (SC1, 1, 4)) >= 2000 AND VAL (SUBSTRING (SC1, 1, 4)) <= 3999)
    OR (VAL (SUBSTRING (SC1, 1, 4)) >= 7000 AND VAL (SUBSTRING (SC1, 1, 4)) <= 8999)) THEN
        ERROR "@R@BERROR!@B
              @/@/@BVillage ID@B is not in the range of @R@B2000@B@R to @R@B3999@B@R or @R@B7000@B@R to @R@B8999@B@R!
              @/@/Plese check your entry and try again.@R"
    ENDIF
    IF NOT ((VAL (SUBSTRING (SC1, 8, 9)) >= 1 AND VAL (SUBSTRING (SC1, 8, 9)) <= 8)) THEN
        ERROR "@R@BERROR!@B
              @/@/The @B@Ilast two digits@I@B are not in the range of @R@B01@B@R to @R@B08@B@R!
              @/@/Please check your entry and try again.@R"
    ENDIF
    SC12
    IF NOT ((SC1) = (SC12)) THEN
        ERROR "@R@BERROR!@B
              @/@/The @BChild ID@Bs entered as @R@B^SC1@B@R and @R@B^SC12@B@R do not match!
              @/@/Please check your entries and try again.@R"
    ENDIF
    IF NOT (SC03 = STUDY) THEN
        c1_3a [sc].BC1B.C14:= SC1
        c1_3a [sc].BC1B.BC2B.PCid:= SC1
    ENDIF
    SC1A
    aux_SC2
    TSC2
    aux_SC3
    TSC3
    SC4
    IF (SC4 = YES) THEN
        SC6
        SC7
        IF NOT (SC7 = DK) THEN
            SC7a
            CHECK
                (LEN (SC7a) > 3) "@R@BERROR!@B
                                 @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!
                                 @/@/Prefix your input with @B0@B if your hour recording has only one digit entry.@R"
            CHECK
                (VAL (SUBSTRING (SC7a, 1, 2)) < 24) "@R@BERROR!@B
                                                    @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
            CHECK
                (VAL (SUBSTRING (SC7a, 3, 4)) < 60) "@R@BERROR!@B
                                                    @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
        ENDIF
        SC8
        SC8A
        SC9
        CHECK
            (LEN (SC9) > 3) "@R@BERROR!@B
                            @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!@R"
        CHECK
            (VAL (SUBSTRING (SC9, 1, 2)) < 24) "@R@BERROR!@B
                                               @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
        CHECK
            (VAL (SUBSTRING (SC9, 3, 4)) < 60) "@R@BERROR!@B
                                               @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
        CHECK
            (VAL (SUBSTRING (SC9, 1, 2)) > 5) "@R@BERROR!@B
                                              @/@/Please check that your @Uhour@U entry is after @B6:00 HRS@B!@R"
        CHECK
            (VAL (SUBSTRING (SC9, 1, 2)) < 19) "@R@BERROR!@B
                                               @/@/Please check that your @Uhour@U entry is before @B18:00 HRS@B!@R"
        SC10:= SC1
        SC10.SHOW
        CHECK
            (LEN (SC10) > 7) "@R@BERROR!@B
                             @/@/Please check that your @Blabel ID@B entry has the @Ucorrect number of digits@U!@R"
        SC10:= SC10 + 'S'
        SC11
        SC11B
    ELSE
        SC5
        IF (SC5 = OTHER) THEN
            SC5_oth
        ENDIF
    ENDIF
ENDBLOCK

PROCEDURE WriteSRNames
PARAMETERS
    IMPORT fname : STRING
    IMPORT sname : STRING
    IMPORT lname : STRING
    IMPORT id : STRING
    ALIEN ('baseline.msu', 'WriteSecRespNames')
ENDPROCEDURE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    notify "WAS THIS COMPOUND NOTIFIED BY THE SURVEY TEAM FOR THIS VISIT IN ADVANCE?" : TYesNo
    visit "@BWAS @UCOMPOUND@U SUCCESSFULLY VISITED BY PARASITE TEAM (Stool Collection Kits delivered)?@B" : TYesNo
    many "@BHOW MANY PARASITE CHILDREN 18 - 27 MONTHS ARE IN THIS @UCOMPOUND@U?@B" : 1..8
    BPC : ARRAY [1..8] OF BlkPC
    c1_3a : ARRAY [1..8] OF modc1_3a

LOCALS
    sc : INTEGER [1]
    newSR : INTEGER [1]

AUXFIELDS
    aux_sc "@G@B@USTOOL COLLECTION@U@B@G" : (ENTER), EMPTY
    aux_inst "@RLOCATE HOUSEHOLD AND PRIMARY CARETAKER OF PARASITE CHILD (18 - 27 MONTHS OLD) IN POTENTIAL ELIGIBLE RESPONDENT COMPOUND.@R" : (ENTER), EMPTY

LAYOUT
    AFTER aux_sc NEWPAGE
    AFTER notify NEWPAGE
    AFTER many NEWPAGE

RULES
    aux_sc

    {START TIME STAMP AND DATE STAMP}
    stimestamp.KEEP
    IF stimestamp = EMPTY THEN
        stimestamp:= SYSTIME
    ENDIF
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    notify
    visit
    IF (visit = YES) THEN
        aux_inst
        many
        FOR sc:= 1 TO many DO
            BPC [sc]
            IF NOT (BPC [sc].SC03 = STUDY) THEN
                c1_3a [sc]
            ENDIF
        ENDDO
    ENDIF
    {FINISH}

    {END TIME STAMP AND DATE STAMP: TIME STAMP CAN ONLY BE SET AFTER THIS MODULE IS MERGED}
    etimestamp.KEEP
    IF (etimestamp = EMPTY) AND ((visit = NO) OR (BPC [sc].SC5 = RESPONSE) OR (BPC [sc].SC5_oth = RESPONSE) OR (BPC [sc].SC11B = RESPONSE) OR (BPC [sc].SC11B = DK))  THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (etimestamp <> EMPTY) AND (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
