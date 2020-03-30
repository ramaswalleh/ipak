BLOCK modc

{TYPES}
TYPE
    TRelationship = (SPOUSE (1) "Spouse",
                     MOTHER (2) "Mother",
                     FATHER (3) "Father",
                     SISTER (4) "Sister",
                     BROTHER (5) "Brother",
                     MOTHER_IN_LAW (6) "Mother-in-law",
                     FATHER_IN_LAW (7) "Father-in-law",
                     SISTER_IN_LAW (8) "Sister-in-law",
                     BROTHER_IN_LAW (9) "Brother-in-law",
                     CO_WIFE (10) "Co-wife",
                     OTHER_RELATIVE (11) "Other relative",
                     FRIEND (12) "Friend",
                     LIGURU (13) "Liguru",
                     OTHER (77) "Other")

{GPS COORDINATES BLOCK}
BLOCK BlkRI002
FIELDS
    RI002_GPSN "Northerly Coordinates:" : TNCoordinate
    RI002_GPSE "Easterly Coordinates:" : TECoordinate
RULES
    RI002_GPSN
    IF NOT (LEN (RI002_GPSN) = 7) THEN
        ERROR "@R@BERROR!@B
              @/@/The @BNortherly Coordinate@B entered as @R@B^RI002_GPSN@B@R is @Ulower@U than the minimum number of digits required!
              @/@/Please check your digits and try again.@R"
    ENDIF
    CHECK
        (SUBSTRING (RI002_GPSN, 1, 2) = '00') "@R@BERROR!@B
                                              @/@/The @BNortherly Coordinate@B entered as @R@B^RI002_GPSN@B@R does not @Ubegin@U with the values @B00@B!
                                              @/@/Please check your entry and try again.@R"
    RI002_GPSE
    IF NOT (LEN (RI002_GPSE) = 8) THEN
        ERROR "@R@BERROR!@B
              @/@/The @BEasterly Coordinate@B entered as @R@B^RI002_GPSE@B@R is @Ulower@U than the minimum number of digits required!
              @/@/Please check your digits and try again.@R"
    ENDIF
    CHECK
        (SUBSTRING (RI002_GPSE, 1, 3) = '034') OR (SUBSTRING (RI002_GPSE, 1, 3) = '035') "@R@BERROR!@B
                                                                                         @/@/The @BEasterly Coordinate@B entered as @R@B^RI002_GPSE@B@R does not @Ubegin@U with the values @B034@B or @B035@B!
                                                                                         @/@/Please check your entry and try again.@R"
ENDBLOCK

{RESPONDENT NAMES BLOCK}
BLOCK BlkRI004
FIELDS
    RI004_fname "Respondent's @Bfirst@B name:" : STRING [15]
    RI004_sname "Respondent's @Bsecond@B name:
                @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                : STRING [15]
    RI004_lname "Respondent's @Blast@B name:" : STRING [15]

RULES
    RI004_fname
    RI004_sname
    RI004_lname
ENDBLOCK

{RESPONDENT OTHER NAMES BLOCK}
BLOCK BlkRI005
FIELDS
    RI005_fname "Other @Bfirst@B name:
                @/@/@RYOU MUST ENTER AT LEAST ONE NAME IN THIS FIELD@R" : STRING [15]
    RI005_sname "Other @Bsecond@B name:
                @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                : STRING [15]
    RI005_lname "Other @Blast@B name:
                @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                : STRING [15]
RULES
    RI005_fname
    RI005_sname
    RI005_lname
ENDBLOCK

{COMPOUND HEAD NAMES BLOCK}
BLOCK BlkRI005A
EXTERNALS
    GetSRNms : GetSRNames ('..\ext\SecResp')

FIELDS
    RI005A_fname "Compound head @Bfirst@B name:" : STRING [15]
    RI005A_sname "Compound head @Bsecond@B name:
                 @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                 : STRING [15]
    RI005A_lname "Compound head @Blast@B name:" : STRING [15]
RULES
    IF (RI005a = SELF) THEN
        RI005A_fname:= TRI004.BRI004.RI004_fname
        RI005A_sname:= TRI004.BRI004.RI004_sname
        RI005A_lname:= TRI004.BRI004.RI004_lname
    ELSE
        RI005A_fname
        RI005A_sname
        RI005A_lname
    ENDIF
ENDBLOCK


{STUDY CHILD NAMES BLOCK}
BLOCK BlkRI008
FIELDS
    RI008_fname "Study child's @Bfirst@B name:" : STRING [15]
    RI008_sname "Study child's @Bsecond@B name:
                @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                : STRING [15]
    RI008_lname "Study child's @Blast@B name:" : STRING [15]
RULES
    RI008_fname
    RI008_sname
    RI008_lname
ENDBLOCK

{GPS COORDINATES TABLE}
TABLE TblRI002
FIELDS
    BRI002 : BlkRI002
RULES
    BRI002
ENDTABLE

{RESPONDENT NAMES TABLE}
TABLE TblRI004
FIELDS
    BRI004 : BlkRI004
RULES
    BRI004
ENDTABLE

{RESPONDENT OTHER NAMES TABLE}
TABLE TblRI005
FIELDS
    BRI005 : BlkRI005
RULES
    BRI005
ENDTABLE

{COMPOUND HEAD NAMES TABLE}
TABLE TblRI005A
FIELDS
    BRI005A : BlkRI005A
RULES
    BRI005A
ENDTABLE

{STUDY CHILD NAMES TABLE}
TABLE TblRI008
FIELDS
    BRI008 : BlkRI008
RULES
    BRI008
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    TRI002 : TblRI002
    RI002A_waypt "Waypoint ID:" : 1..999
    RI003 "For the GPS ID, USE @BWB@B@ OR @BK@B?" : (WB, K)
    RI003_GPSWB "@BWB@B GPS ID:" : TGPSIDWB
    RI003_GPSK "@BK@B GPS ID:" : TGPSIDK
    TRI004 : TblRI004
    SRid "Study respondent ID" : TIndividualID
    RI005 "Have you previously gone by another name or do you currently have other names?"
          "Hapo awali umewahi kutumia jina lingine au kwa sasa una majina ya utani?"
          : TYesNo
    TRI005 : TblRI005
    RI005a "What is the relationship of the compound head to the study respondent?"
           : (SELF (0) "Self",
              SPOUSE (1) "Spouse",
              MOTHER (2) "Mother",
              FATHER (3) "Father",
              SISTER (4) "Sister",
              BROTHER (5) "Brother",
              MOTHER_IN_LAW (6) "Mother-in-law",
              FATHER_IN_LAW (7) "Father-in-law",
              SISTER_IN_LAW (8) "Sister-in-law",
              BROTHER_IN_LAW (9) "Brother-in-law",
              CO_WIFE (10) "Co-wife",
              OTHER_RELATIVE (11) "Other relative",
              FRIEND (12) "Friend",
              OTHER (77) "Other")
    RI005a_rel "Specify other relative:" : STRING [20]
    RI005a_oth "Specify other relationship:" : STRING [20]
    RI05A2 "Is the Compound Head one of the parasite children's primary caretakers?"
           : TYesNo
    TRI005A : TblRI005A
    RICHid "Compound Head ID:" : TIndividualID
    RI005B "COMPOUND HEAD PHONE NUMBER:
           @/@/@RENTER @R@B“88”@B@R IF THE COMPOUND HEAD HAS NO PHONE
           @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE COMPOUND HEAD'S CONTACT PHONE NUMBER@R"
           : TPhone, DK
    RI006_eli "RESPONDENT MEETS WHICH ELIGIBILITY CRITERIA?"
              : (PREGNANT_IN_2ND_OR_3RD_TRIMESTER (1) "Pregnant in 2nd or 3rd trimester",
                 LESS_THAN_SIX_WEEKS_OLD (2) "Mother of study child less than 6 weeks old",
                 PRIMARY_CARETAKER_STUDY_CHILD (3) "Primary caretaker of study child less than 6 weeks old")
    RI007_rel "SPECIFY RELATIONSHIP OF PRIMARY CARETAKER TO STUDY CHILD:"
              : (FATHER (1) "Father",
                 GRANDMOTHER (2) "Grandmother",
                 AUNT (3) "Aunt",
                 SISTER (4) "Sister",
                 BROTHER (5) "Brother",
                 OTHER (77) "Other")
    RI007_other "Specify other relationship ot study child:" : STRING [50]
    TRI008 : TblRI008
    SCid "Study Child ID:" : TIndividualID
    RI009_phone "At some point over the next several months, we may need to get in touch with you by phone to give you information about our research.
                @/@/Do you have a phone?
                @/@/If not, does someone in your compound have a phone? Maybe a neighbor? What is the number?
                @/@/Primary phone number:
                @/@/@RIF NO PHONE IN COMPOUND, ENTER @R@B“88”@B@R
                @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PRIMARY PHONE NUMBER"
                "Wakati mwingine katika miezi zijazo, tunaweza hitaji kuwasiliana na wewe kwa simu kukupatia ujumbe juu ya utafiti wetu.
                @/@/Uko na simu?
                @/@/Kama la, kuna mtu katika boma hili ana simu? Labda jirani? Nambari ni ipi?
                @/@/Namba ya kimsingi:
                @/@/@RIF NO PHONE IN COMPOUND, ENTER @R@B“88”@B@R
                @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PRIMARY PHONE NUMBER"
                : TPhone, DK
    RI010_belong "Does this number belong to you?"
                 "Hii namba ni yako?"
                 : TYesNo
    RI011_name "To whom does this number belong?
               @/@/Specify names:
               @/@/@RENTER AS MANY NAMES INTO THIS FIELD AS THE USER PROVIDES, SEPARATING THEM APPROPRIATELY WITH SPACES@R"
               "Hii namba ni ya nani?
               @/@/Fafanua majina:
               @/@/@RENTER AS MANY NAMES INTO THIS FIELD AS THE USER PROVIDES, SEPARATING THEM APPROPRIATELY WITH SPACES@R"
               : STRING [30]
    RI012_spec "@RSPECIFY RELATIONSHIP TO RESPONDENT@R"
               "Fafanua uhusiano wako na mwenye namba."
               : TRelationship
    RI012_rel "Specify other relative to respondent:" : STRING [30]
    RI012_other "Specify other relationship to respondent:" : STRING [30]
    RI013_phone "Secondary phone number:
                @/@/@RENTER @R@B“88”@B@R IF NO SECONDARY PHONE AVAILABLE
                @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE SECONDARY PHONE NUMBER"
                "Nambari ya pili:
                @/@/@RENTER @R@B“88”@B@R IF NO SECONDARY PHONE AVAILABLE
                @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE SECONDARY PHONE NUMBER"
                : TPhone, DK
    RI014_belong "Does this number belong to you?"
                 "Hii namba ni yako?"
                 : TYesNo
    RI015_name "To whom does this number belong?
               @/@/Specify names:
               @/@/@RENTER AS MANY NAMES INTO THIS FIELD AS THE USER PROVIDES, SEPARATING THEM APPROPRIATELY WITH SPACES@R"
               "Hii namba ni ya nani?
               @/@/Fafanua majina:
               @/@/@RENTER AS MANY NAMES INTO THIS FIELD AS THE USER PROVIDES, SEPARATING THEM APPROPRIATELY WITH SPACES@R"
               : STRING [30]
    RI016_spec "@RSPECIFY RELATIONSHIP TO RESPONDENT@R"
               "Fafanua uhusiano wako na mwenye namba."
               : TRelationship
    RI016_rel "Specify other relative to respondent:" : STRING [30]
    RI016_other "Specify other relationship to respondent:" : STRING [30]
    RI017_dir "@R@UDIRECTIONS TO COMPOUND FROM A CENTRAL LOCATION WITHIN THE VILLAGE@U@R
              @/@/Now I would like to make certain that we have your current address information correct.
              @/@/We want to know the place that you usually sleep, not necessarily your ancestral lands or family home."
              "@R@UDIRECTIONS TO COMPOUND FROM A CENTRAL LOCATION WITHIN THE VILLAGE@U@R
              @/@/Sasa ningependa kuhakikisha kwamba habari ya mahali pako unapoishi tuliyonayo ni sawa. Tungependa kujua mahali unapolala, siyo haswa nyumbani kwako kamili."
              : STRING [244]
AUXFIELDS
    aux_ri "@G@BRESPONDENT IDENTIFICATION@B@G" : (ENTER), EMPTY
    aux_RI002 "@RTAKE A NEW GPS READING BY @BMARKING A NEW WAYPOINT@B.
              @/@/WAIT UNTIL YOU HAVE LESS THAN 10M ACCURACY IF POSSIBLE.@R" : (ENTER), EMPTY
    aux_RI004 "@GWhat is your current full name?@G"
              "@GMajina yako kamili kwa sasa ni yapi?@G"
              : (ENTER), EMPTY
    aux_RI005A "@GCOMPOUND HEAD NAME:@G" : (ENTER), EMPTY
    aux_RI008 "@GWhat are the full names of the study child?@G"
              : (ENTER), EMPTY

LAYOUT
    BEFORE aux_ri NEWPAGE
    AFTER aux_ri NEWPAGE
RULES
    {INTORDUCE MODULE}
    aux_ri

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
    aux_RI002
    TRI002
    RI002A_waypt
    RI003
    IF (RI003 = WB) THEN
        RI003_GPSWB
        IF NOT (LEN (RI003_GPSWB) = 2) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @BWB GPS ID@B entered as @R@B^RI003_GPSWB@B@R is @Ulower@U than the minimum number of digits required!
`                 @/@/Please check your digits and try again.@R"
        ENDIF
    ELSE
        RI003_GPSK
        IF NOT (LEN (RI003_GPSK) = 2) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @BK GPS ID@B entered as @R@B^RI003_GPSK@B@R is @Ulower@U than the minimum number of digits required!
                  @/@/Please check your digits and try again.@R"
        ENDIF
    ENDIF
    aux_RI004
    TRI004
    SRid:= hhid + '12'
    SRid.SHOW
    RI005
    IF (RI005 = YES) THEN
        TRI005
    ENDIF
    RI005a
    IF NOT (RI005a = SELF) THEN
        IF (RI005a = OTHER) THEN
            RI005a_oth
        ENDIF
        IF (RI005a = OTHER_RELATIVE) THEN
            RI005a_rel
        ENDIF
        RI05A2
        aux_RI005A
        TRI005A
        IF NOT (RI005a = SELF) AND (RI05A2 = NO) THEN
            RICHid:= SUBSTRING (hhid, 1, 6) + '020'
            RICHid.SHOW
        ELSEIF (RI005a = SELF) THEN
            RICHid:= SRid
            RICHid.SHOW
        ENDIF
        RI005B
    ENDIF
    IF NOT ((RI005B = DK) OR (RI005B = '88')) THEN
        IF NOT (LEN (RI005B) = 10) THEN
            ERROR "@R@BERROR!@B
                  @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
        ENDIF
        IF NOT ((SUBSTRING (RI005B, 1, 2) = '07') OR (SUBSTRING (RI005B, 1, 2) = '02')) THEN
            ERROR "@R@BERROR!@B
                  @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
        ENDIF
    ENDIF
    IF (v.V4 = YES) THEN
        RI006_eli:= PREGNANT_IN_2ND_OR_3RD_TRIMESTER
    ELSEIF (v.V10 > 0) THEN
        RI006_eli:= LESS_THAN_SIX_WEEKS_OLD
    ELSEIF (v.V15 = YES) OR (v.V17 = YES) THEN
        RI006_eli:= PRIMARY_CARETAKER_STUDY_CHILD
    ENDIF
    RI006_eli.SHOW
    IF (RI006_eli = PRIMARY_CARETAKER_STUDY_CHILD) THEN
        RI007_rel
        IF (RI007_rel = OTHER) THEN
            RI007_other
        ENDIF
    ENDIF
    IF (RI006_eli = LESS_THAN_SIX_WEEKS_OLD) OR (RI006_eli = PRIMARY_CARETAKER_STUDY_CHILD) THEN
        aux_RI008
        TRI008
        SCid:= hhid + '01'
        SCid.SHOW
    ENDIF
    RI009_phone
    IF NOT ((RI009_phone = DK) OR (RI009_phone = '88')) THEN
        IF NOT (LEN (RI009_phone) = 10) THEN
            ERROR "@R@BERROR!@B
                  @/@/Please check that your @BPrimary Phone Number@B entry has the @Ucorrect number of digits@U!@R"
        ENDIF
        IF NOT ((SUBSTRING (RI009_phone, 1, 2) = '07') OR (SUBSTRING (RI009_phone, 1, 2) = '02')) THEN
            ERROR "@R@BERROR!@B
                  @/@/Please check that your @BPrimary Phone Number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
        ENDIF
        RI010_belong
        IF (RI010_belong = NO) THEN
            RI011_name
            RI012_spec
            IF (RI012_spec = OTHER_RELATIVE) THEN
                RI012_rel
            ELSEIF (RI012_spec = OTHER) THEN
                RI012_other
            ENDIF
        ENDIF
    ENDIF
    RI013_phone
    IF NOT ((RI013_phone = DK) OR (RI013_phone = '88')) THEN
        IF NOT (LEN (RI013_phone) = 10) THEN
            ERROR "@R@BERROR!@B
                  @/@/Please check that your @BSecondary Phone Number@B entry has the @Ucorrect number of digits@U!@R"
        ENDIF
        IF NOT ((SUBSTRING (RI013_phone, 1, 2) = '07') OR (SUBSTRING (RI013_phone, 1, 2) = '02')) THEN
            ERROR "@R@BERROR!@B
                  @/@/Please check that your @BSecondary Phone Number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
        ENDIF
        CHECK (RI009_phone <> RI013_phone)
            "@R@BERROR!@B
            @/@/The @BPrimary Phone Number@B entered as @R@B^RI009_phone@B@R and the @BSecondary Phone Number@B entered as @R@B^RI013_phone@B@R @Umatch@U!
            @/@/Please check with the respondent to provide an alternative number if one is available.@R"
        RI014_belong
        IF (RI014_belong = NO) THEN
            RI015_name
            RI016_spec
            IF (RI016_spec = OTHER_RELATIVE) THEN
                RI016_rel
            ELSEIF (RI016_spec = OTHER) THEN
                RI016_other
            ENDIF
        ENDIF
    ENDIF
    RI017_dir

    {END TIME STAMP AND DATE STAMP}
    etimestamp.KEEP
    IF (etimestamp = EMPTY) AND (RI017_dir = RESPONSE) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (etimestamp <> EMPTY) AND (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
