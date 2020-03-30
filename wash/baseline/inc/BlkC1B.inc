BLOCK BlkC1B

INCLUDE "inc\BlkC2B.inc"

{PARASITE CHILD'S DATE OF BIRTH BLOCK DEFINATION}
BLOCK BlkC4103
FIELDS
    C4103_day "Child's @BDAY@B of birth:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PARASITE / OTHER CHILD'S DAY OF BIRTH@R"
              : 1..31, DK
    C4103_month "Child's @BMONTH@B of birth:
                @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PARASITE / OTHER CHILD'S MONTH OF BIRTH@R"
                : 1..12, DK
    C4103_year "Child's @BYEAR@B of birth:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PARASITE / OTHER CHILD'S YEAR OF BIRTH@R"
               : 2008..2015, DK
    C4103_dob : STRING [10]
RULES
    C4103_day
    C4103_month
    C4103_year
    C4103_dob.KEEP
    CHECK
        (C4103_year = DK) OR (C4103_year > (sdatestamp.YEAR - 4)) "@R@BERROR!@B
                                                                  @/@/The @Bchild's year of birth@B entered as @R@B^C4103_year@B@R would make the child @Uolder@U than @Bthree years old@B!
                                                                  @/@/Please check your entry and try again.@R"

    IF (C4103_year > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/The @Bchild's year of birth@B entered as @R@B^C4103_year@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (C4103_year = sdatestamp.YEAR) AND (C4103_month > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bchild's month of birth@B entered as @R@B^C4103_month@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF (C4103_year = sdatestamp.YEAR) AND (C4103_month = sdatestamp.MONTH) AND (C4103_day > sdatestamp.DAY) THEN
                ERROR "@R@BERROR!@B
                      @/@/The @Bother child's day of birth@B entered as @R@B^C4103_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSE
                IF (C4103_day <> DK) THEN
                    IF (C4103_day < 10) THEN
                        C4103_dob:= '0' + STR (C4103_day) + '/'
                    ELSE
                        C4103_dob:= STR (C4103_day) + '/'
                    ENDIF
                ELSE
                    C4103_dob:= '99/'
                ENDIF
                IF (C4103_month <> DK) THEN
                    IF (C4103_month < 10) THEN
                        C4103_dob:= C4103_dob + '0' + STR (C4103_month) + '/'
                    ELSE
                        C4103_dob:= C4103_dob + STR (C4103_month) + '/'
                    ENDIF
                ELSE
                    C4103_dob:= C4103_dob + '99/'
                ENDIF
                IF (C4103_year <> DK) THEN
                    C4103_dob:= C4103_dob + STR (C4103_year)
                ELSE
                    C4103_dob:= C4103_dob + '9999'
                ENDIF
            ENDIF
        ENDIF
    ENDIF
ENDBLOCK

{PARASITE / OTHER CHILD'S REPORTED AGE}
BLOCK BlkC4105
FIELDS
    C4105_A "Reported age in @BYEARS@B:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE PARASITE / OTHER CHILD'S AGE IN YEARS
            @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE THIS CATEGORY@R"
            : 0..2, DK
    C4105_B "Reported age in @BMONTHS@B:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE PARASITE / OTHER CHILD'S AGE IN MONTHS
            @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE THIS CATEGORY@R"
            : 0..27, DK
    C4105_C "Reported age in @BWEEKS@B:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE PARASITE / OTHER CHILD'S AGE IN WEEKS
            @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE THIS CATEGORY@R"
            : 0..87, DK
    C4105_D "Reported age in @BDAYS@B:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE PARASITE / OTHER CHILD'S AGE IN DAYS
            @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE THIS CATEGORY@R"
            : 0..87, DK
    C4105_dob : DATETYPE
LOCALS
    locC4105_A : INTEGER
    locC4105_B : INTEGER
    locC4105_D : INTEGER
RULES
    C4105_A
    C4105_B
    C4105_C
    C4105_D
    IF NOT ((C4105_D = DK) AND (C4105_C = DK) AND (C4105_B = DK) AND (C4105_A = DK)) THEN
        IF (C4105_C >= 4) THEN
            locC4105_B:= (C4105_B + (C4105_C / 4))
        ELSE
            locC4105_D:= (C4105_D + (C4105_C * 7))
        ENDIF
        IF (C4105_D >= 30) THEN
            locC4105_B:= (C4105_B + (C4105_D / 30))
        ENDIF
        IF (C4105_B >= 12) THEN
            locC4105_A:= (C4105_A + (C4105_B / 12))
        ENDIF
        C4105_dob:= (sdatestamp - (C4105_A, C4105_B, C4105_D))
    ENDIF
ENDBLOCK

{PARASITE CHILD'S DATE OF BIRTH TABLE}
TABLE TblC4103
FIELDS
    BC4103 : BlkC4103
RULES
    BC4103
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    C1B_Cfname "Child's first name:" : STRING [15]
    C14 "Child ID" : TIndividualID
    DOB "Do you have a valid clinic card or baptism certificate for your child?
        @/@/Can I see it?"
        "Je una kadi halali ya kliniki au ya ubatizo ya mtoto wako?
        @/@/Je, naweza kuiona?"
        : TYesNo
    TC4103 : TblC4103
    C4103a_pre "Was @B^C1B_Cfname@B born premature?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE PARASITE / OTHER CHILD WAS BORN PREMATURE@R"
               "Je, mtoto @B^C1B_Cfname@B alizaliwa kabla ya wakati?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE PARASITE / OTHER CHILD WAS BORN PREMATURE@R"
               : TYesNo, DK
    C4103b_pre "How many weeks premature?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY WEEKS PREMATURE THE PARASITE / OTHER CHILD WAS BORN@R"
               "Je, alizaliwa wiki ngapi kabla ya wakati?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY WEEKS PREMATURE THE PARASITE / OTHER CHILD WAS BORN@R"
               : (ONE_WEEK "One week or less",
                  TWO_WEEKS "Two weeks",
                  THREE_WEEKS "Three weeks",
                  FOUR_WEEKS "Four weeks",
                  OTHER "Other"), DK
    C4103b_oth "Specify other number of weeks:" : 5..20
    C4104_DOB "Source of Date of Birth:"
              : (CARD "CONFIRMED DATE OF BIRTH BY VALID CLINIC CARD",
                 REMEMBER "MOTHER / PRIMARY CARETAKER / RELATIVE REMEMBERS DATE OF BIRTH",
                 BOTH "BOTH OPTIONS @B1@B and @B2@B ABOVE",
                 ESTIMATE "ESTIMATED USING BAPTISM CARD",
                 CANNOT (77) "CANNOT PRODUCE CLINIC OR BAPTISM CARD AND UNABLE TO REMEMBER DATE OF BIRTH")
    BC4105 : BlkC4105
    C4106_age "WHICH SOURCE OF AGE IS MORE RELIABLE AND WILL BE USED IN THE SURVEY?"
              : (BIRTH "BIRTH DATE",
                 REPORT "REPORTED AGE")
    C4107_sex "Child's gender?"
              : (MALE "Male",
                 FEMALE "Female")
    BC2B : BlkC2B

AUXFIELDS
    aux_c1b "@G@BC.1B@|@UBIRTH DATE, AGE AND SEX@U@B@G" : (ENTER), EMPTY
    aux_cert "@RHAVE RESPONDENT SEARCH FOR THIS DOCUMENT IF NOT IMMEDIATELY VIEWABLE.
             @/@/USE DOCUMENT TO CONFIRM DOB, IF POSSIBLE.@R"
             : (ENTER), EMPTY
    aux_C4105 "@GRequest for the Child's reported age from the secondary respondent.@G
              @/@/@RRECORD EXACTLY WHAT THE RESPONDENT SAYS.
              @/@/IF RESPONDENT REPORTS “@R@B15@B@R” MONTHS, @BWRITE 15 MONTHS@B.
              @/@/BE AS DETAILED AS POSSIBLE.
              @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE IN ONE OF THESE CATEGORIES@R"
              : (ENTER), EMPTY

LAYOUT
    BEFORE aux_c1b NEWPAGE
    AFTER aux_c1b NEWPAGE

    BEFORE aux_C4105 NEWPAGE

RULES
    aux_c1b

    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    C1B_Cfname
    IF ((stimestamp = EMPTY) AND (C1B_Cfname = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    IF (sr_intro = YES) THEN
        C14:= hhid + '54'
        C14.SHOW
    ELSE
        C14
    ENDIF
    DOB
    IF (DOB = NO) THEN
        aux_cert
    ENDIF
    TC4103
    C4103a_pre
    IF (C4103a_pre = YES) THEN
        C4103b_pre
        IF (C4103b_pre = OTHER) THEN
            C4103b_oth
            SIGNAL
                (C4103b_oth < 13) "@G@BALERT!@B
                                  @/@/Number of weeks entered as @G@B^C4103b_oth@B@G is greater than @B12@B.
                                  @/@/Suppress if correct.@G"
        ENDIF
    ENDIF
    C4104_DOB
    aux_C4105
    BC4105
    IF NOT ((TC4103.BC4103.C4103_day = DK) OR (TC4103.BC4103.C4103_month = DK) OR (TC4103.BC4103.C4103_year = DK)
    OR (BC4105.C4105_A = DK) OR (BC4105.C4105_B = DK) OR (BC4105.C4105_C = DK) OR (BC4105.C4105_D = DK)) THEN
        IF ((STRTODATE (TC4103.BC4103.C4103_dob)) < (BC4105.C4105_dob)) THEN
            C4106_age:= BIRTH
            C4106_age.SHOW
        ELSE
            C4106_age:= REPORT
            C4106_age.SHOW
        ENDIF
    ELSE
        C4106_age
    ENDIF
    C4107_sex
    BC2B.C23A1:= C1B_Cfname
    BC2B
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (C4107_sex = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
