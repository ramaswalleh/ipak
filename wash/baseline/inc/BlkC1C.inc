BLOCK BlkC1C
{STUDY CHILD'S DATE OF BIRTH BLOCK DEFINATION}
BLOCK BlkC1C03
FIELDS
    C1C03_day "@B^C1C_Cfname@B's @BDAY@B of birth:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE ^LOCHEAD CHILD'S DAY OF BIRTH@R"
              : 1..31, DK
    C1C03_month "@B^C1C_Cfname@B's @BMONTH@B of birth:
                @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE ^LOCHEAD CHILD'S MONTH OF BIRTH@R"
                : 1..12, DK
    C1C03_year "@B^C1C_Cfname@B's @BYEAR@B of birth:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE ^LOCHEAD CHILD'S YEAR OF BIRTH@R"
               : 2008..2015, DK
    C1C03_dob : STRING [10]

RULES
    C1C03_day
    C1C03_month
    C1C03_year
    C1C03_dob.KEEP
    CHECK
        (C1C03_year = DK) OR (C1C03_year > (sdatestamp.YEAR - 4)) "@R@BERROR!@B
                                                                  @/@/The @Byear of birth@B entered as @R@B^C1C03_year@B@R would make @R@B^C1C_Cfname@B@R @Uolder@U than @Bthree years old@B!
                                                                  @/@/Please check your entry and try again.@R"
    IF (C1C03_year > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/@R@B^C1C_Cfname@B@R's @Byear of birth@B entered as @R@B^C1C03_year@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (C1C03_year = sdatestamp.YEAR) AND (C1C03_month > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/@R@B^C1C_Cfname@B@R's @Bmonth of birth@B entered as @R@B^C1C03_month@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF (C1C03_year = sdatestamp.YEAR) AND (C1C03_month = sdatestamp.MONTH) AND (C1C03_day > sdatestamp.DAY) THEN
                ERROR "@R@BERROR!@B
                      @/@/@R@B^C1C_Cfname@B@R's @Bday of birth@B entered as @R@B^C1C03_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSE
                IF (C1C03_day <> DK) THEN
                    IF (C1C03_day < 10) THEN
                        C1C03_dob:= '0' + STR (C1C03_day) + '/'
                    ELSE
                        C1C03_dob:= STR (C1C03_day) + '/'
                    ENDIF
                ELSE
                    C1C03_dob:= '99/'
                ENDIF
                IF (C1C03_month <> DK) THEN
                    IF (C1C03_month < 10) THEN
                        C1C03_dob:= C1C03_dob + '0' + STR (C1C03_month) + '/'
                    ELSE
                        C1C03_dob:= C1C03_dob + STR (C1C03_month) + '/'
                    ENDIF
                ELSE
                    C1C03_dob:= C1C03_dob + '99/'
                ENDIF
                IF (C1C03_year <> DK) THEN
                    C1C03_dob:= C1C03_dob + STR (C1C03_year)
                ELSE
                    C1C03_dob:= C1C03_dob + '9999'
                ENDIF
            ENDIF
        ENDIF
    ENDIF
ENDBLOCK

{PARASITE / OTHER CHILD'S REPORTED AGE}
BLOCK BlkC1C05
FIELDS
    C1C05_A "Reported age in @BYEARS@B:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE PARASITE / OTHER CHILD'S AGE IN YEARS
            @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE THIS CATEGORY@R"
            : 0..2, DK
    C1C05_B "Reported age in @BMONTHS@B:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE PARASITE / OTHER CHILD'S AGE IN MONTHS
            @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE THIS CATEGORY@R"
            : 0..27, DK
    C1C05_C "Reported age in @BWEEKS@B:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE PARASITE / OTHER CHILD'S AGE IN WEEKS
            @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE THIS CATEGORY@R"
            : 0..87, DK
    C1C05_D "Reported age in @BDAYS@B:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE PARASITE / OTHER CHILD'S AGE IN DAYS
            @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE THIS CATEGORY@R"
            : 0..87, DK
    C1C05_dob : DATETYPE

LOCALS
    locC1C05_A : INTEGER
    locC1C05_B : INTEGER
    locC1C05_D : INTEGER

RULES
    C1C05_A
    C1C05_B
    C1C05_C
    C1C05_D
    IF NOT ((C1C05_D = DK) AND (C1C05_C = DK) AND (C1C05_B = DK) AND (C1C05_A = DK)) THEN
        IF (C1C05_C >= 4) THEN
            locC1C05_B:= (C1C05_B + (C1C05_C / 4))
        ELSE
            locC1C05_D:= (C1C05_D + (C1C05_C * 7))
        ENDIF
        IF (C1C05_D >= 30) THEN
            locC1C05_B:= (C1C05_B + (C1C05_D / 30))
        ENDIF
        IF (C1C05_B >= 12) THEN
            locC1C05_A:= (C1C05_A + (C1C05_B / 12))
        ENDIF
        C1C05_dob:= (sdatestamp - (C1C05_A, C1C05_B, C1C05_D))
    ENDIF
ENDBLOCK

{STUDY CHILD'S DATE OF BIRTH TABLE}
TABLE TblC1C03
FIELDS
    BC1C03 : BlkC1C03
RULES
    BC1C03
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    C1C_Cfname "@B^loclabel Child@B's first name:" : STRING [15]
    C1213 "Child ID" : TIndividualID
    TC1C03 : TblC1C03
    C1C03a_pre "Was @B^C1C_Cfname@B born premature?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE ^LOCHEAD CHILD WAS BORN PREMATURE@R"
               "Je, @B^C1C_Cfname@B alizaliwa kabla ya wakati?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE ^LOCHEAD CHILD WAS BORN PREMATURE@R"
               : TYesNo, DK
    C1C03b_pre "How many weeks premature?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY WEEKS PREMATURE THE ^LOCHEAD CHILD WAS BORN@R"
               "Je, @B^C1C_Cfname@B alizaliwa wiki ngapi kabla ya wakati?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY WEEKS PREMATURE THE ^LOCHEAD CHILD WAS BORN@R"
               : (ONE_WEEK "One week or less",
                  TWO_WEEKS "Two weeks",
                  THREE_WEEKS "Three weeks",
                  FOUR_WEEKS "Four weeks",
                  OTHER "Other"), DK
    C1C03b_oth "Specify other number of weeks:" : 5..20
    DOB "Do you have a valid clinic card or baptism certificate for your child?
        @/@/Can I see it?"
        "Je una kadi halali ya kliniki au ya ubatizo ya @B^C1C_Cfname@B?
        @/@/Je ninaweza kuiona?"
        : TYesNo
    C1C04_DOB "Source of Date of Birth:"
              : (CARD "CONFIRMED DATE OF BIRTH BY VALID CLINIC CARD",
                 REMEMBER "MOTHER / PRIMARY CARETAKER / RELATIVE REMEMBERS DATE OF BIRTH",
                 BOTH "BOTH OPTIONS @B1@B and @B2@B ABOVE",
                 ESTIMATE "ESTIMATED USING BAPTISM CARD",
                 CANNOT (77) "CANNOT PRODUCE CLINIC OR BAPTISM CARD AND UNABLE TO REMEMBER DATE OF BIRTH")
    BC1C05 : BlkC1C05
    C1C06_age "WHICH SOURCE OF AGE IS MORE RELIABLE AND WILL BE USED IN THE SURVEY?"
              : (BIRTH "BIRTH DATE",
                 REPORT "REPORTED AGE")
    C1C07_sex "@B^C1C_Cfname@B's gender?"
              : (MALE "Male",
                 FEMALE "Female")

AUXFIELDS
    aux_c1c "@G@BC.1C@|@UBIRTH DATE, AGE AND SEX OF @G^LOCHEAD CHILD@G 0 - 36 MONTHS IN COMPOUND@U@B@G" : (ENTER), EMPTY
    aux_oth "@RPlease remember to enter the @Byoungest other child 0 - 36 months@B in the study household.@R" : (ENTER)
    aux_cert "@RHAVE RESPONDENT SEARCH FOR THIS DOCUMENT IF NOT IMMEDIATELY VIEWABLE.
             @/@/USE DOCUMENT TO CONFIRM DOB, IF POSSIBLE.@R"
             : (ENTER)
    aux_C1C05 "@GRequest for the @B^C1C_Cfname@B's reported age from the respondent.@G
              @/@/@RRECORD EXACTLY WHAT THE RESPONDENT SAYS.
              @/@/IF RESPONDENT REPORTS “@R@B15@B@R” MONTHS, @BWRITE 15 MONTHS@B.
              @/@/BE AS DETAILED AS POSSIBLE.
              @/@/ENTER “@R@B0@B@R” IF THE RESPONDENT DOES NOT MENTION THE AGE IN ONE OF THESE CATEGORIES@R"
              : (ENTER), EMPTY

LAYOUT
    BEFORE aux_c1c NEWPAGE
    AFTER aux_c1c NEWPAGE

    AFTER aux_oth NEWPAGE

    BEFORE aux_C1C05 NEWPAGE

RULES
    aux_c1c

    IF (LOCHEAD = 'OTHER') THEN
        aux_oth
    ENDIF

    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    IF stimestamp = EMPTY THEN
        stimestamp:= SYSTIME
    ENDIF
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    C1C_Cfname
    C1213
    DOB
    aux_cert
    TC1C03
    C1C03a_pre
    IF (C1C03a_pre = YES) THEN
        C1C03b_pre
        IF (C1C03b_pre = OTHER) THEN
            C1C03b_oth
            SIGNAL
                (C1C03b_oth < 13) "@G@BALERT!@B
                                  @/@/Number of weeks entered as @G@B^C1C03b_oth@B@G is greater than @B12@B.
                                  @/@/Suppress if correct.@G"
        ENDIF
    ENDIF
    C1C04_DOB
    aux_C1C05
    BC1C05
    IF NOT ((TC1C03.BC1C03.C1C03_day = DK) OR (TC1C03.BC1C03.C1C03_month = DK) OR (TC1C03.BC1C03.C1C03_year = DK)
    OR (BC1C05.C1C05_A = DK) OR (BC1C05.C1C05_B = DK) OR (BC1C05.C1C05_C = DK) OR (BC1C05.C1C05_D = DK)) THEN
        IF ((STRTODATE (TC1C03.BC1C03.C1C03_dob)) < (BC1C05.C1C05_dob)) THEN
            C1C06_age:= BIRTH
            C1C06_age.SHOW
        ELSE
            C1C06_age:= REPORT
            C1C06_age.SHOW
        ENDIF
    ELSE
        C1C06_age
    ENDIF
    C1C07_sex
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF (etimestamp = EMPTY) AND (C1C07_sex = RESPONSE) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
