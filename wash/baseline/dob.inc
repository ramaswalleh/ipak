BLOCK moddob

BLOCK BlkDOB
{STUDY CHILD'S DATE OF BIRTH BLOCK DEFINATION}
BLOCK Blkdob2
FIELDS
    dob2_day "@B^c1.C1_SCfname@B's @BDAY@B of birth:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE STUDY CHILD'S DAY OF BIRTH@R"
             : 1..31, DK
    dob2_month "@B^c1.C1_SCfname@B's @BMONTH@B of birth:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE STUDY CHILD'S MONTH OF BIRTH@R"
               : 1..12, DK
    dob2_year "@B^c1.C1_SCfname@B's @BYEAR@B of birth:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE STUDY CHILD'S YEAR OF BIRTH@R"
              : 2011..2015, DK
    dob2_dob : STRING [10]
RULES
    dob2_day
    dob2_month
    dob2_year
    dob2_dob.KEEP

    CHECK
        (dob2_year = sdatestamp.YEAR) AND ((dob2_year <> sdatestamp.YEAR) OR (dob2_month > (sdatestamp.MONTH) - 2))
        "@R@BERROR!@B
        @/@/@R@B^c1.C1_SCfname@B@R's @Bdate of birth@B surpasses one month!
        @/@/Please ensure that your entry does not place the child at greater than two weeks old.@R"

    IF (dob2_year > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/@R@B^c1.C1_SCfname@B@R's @Byear of birth@B entered as @R@B^dob2_year@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (dob2_year = sdatestamp.YEAR) AND (dob2_month > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/@R@B^c1.C1_SCfname@B@R's @Bmonth of birth@B entered as @R@B^dob2_month@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF (dob2_year = sdatestamp.YEAR) AND (dob2_month = sdatestamp.MONTH) AND (dob2_day > sdatestamp.DAY) THEN
                ERROR "@R@BERROR!@B
                      @/@/@R@B^c1.C1_SCfname@B@R's @Bday of birth@B entered as @R@B^dob2_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSEIF (dob2_year = sdatestamp.YEAR) AND (dob2_month = sdatestamp.MONTH) AND (dob2_day < (sdatestamp.DAY) - 14) THEN
                ERROR "@R@BERROR!@B
                      @/@/@R@B^c1.C1_SCfname@B@R's @Bday of birth@B entered as @R@B^dob2_day@B@R is @I@Ubeyond@U@I two weeks!
                      @/@/Please check your entry and try again.@R"
            ELSE
                IF (dob2_day <> DK) THEN
                    IF (dob2_day < 10) THEN
                        dob2_dob:= '0' + STR (dob2_day) + '/'
                    ELSE
                        dob2_dob:= STR (dob2_day) + '/'
                    ENDIF
                ELSE
                    dob2_dob:= '99/'
                ENDIF
                IF (dob2_month <> DK) THEN
                    IF (dob2_month < 10) THEN
                        dob2_dob:= dob2_dob + '0' + STR (dob2_month) + '/'
                    ELSE
                        dob2_dob:= dob2_dob + STR (dob2_month) + '/'
                    ENDIF
                ELSE
                    dob2_dob:= dob2_dob + '99/'
                ENDIF
                IF (dob2_year <> DK) THEN
                    dob2_dob:= dob2_dob + STR (dob2_year)
                ELSE
                    dob2_dob:= dob2_dob + '9999'
                ENDIF
            ENDIF
        ENDIF
    ENDIF
ENDBLOCK

{STUDY CHILD'S DATE OF BIRTH TABLE}
TABLE Tbldob2
FIELDS
    Bdob2 : Blkdob2
RULES
    Bdob2
ENDTABLE

FIELDS
    dob1 "Relationship to primary caretaker of study child:"
         : (SPOUSE "Spouse / partner",
            MOTHER "Mother",
            FATHER "Father",
            SISTER "Sister",
            BROTHER "Brother",
            MOTHER_IN_LAW "Mother-in-law",
            FATHER_IN_LAW "Father-in-law",
            OTHER_RELATIVE "Other relative",
            FRIEND "Friend",
            OTHER (77) "Other")
    dob1_othrel "Specify other relative:" : STRING [30]
    dob1_oth "Specify other relationship:" : STRING [30]
    dob2 "Do you know what date @B^c1.C1_SCfname@B was born?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHAT DATE THE STUDY CHILD WAS BORN
         @/@/YOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO DISCLOSE WHAT DATE THE STUDY CHILD WAS BORN@R"
         "Je, unajua tarehe ambayo @B^c1.C1_SCfname@B alizaliwa?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHAT DATE THE STUDY CHILD WAS BORN
         @/@/YOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO DISCLOSE WHAT DATE THE STUDY CHILD WAS BORN@R"
         : (YES), DK, RF
    Tdob2 : Tbldob2
    dob3 "Any other information you remember about when the birth occurred?"
         "Habari yoyote unayokumbuka kuhusu wakati wa kuzaliwa kwa mtoto?"
         : SET [2] OF (DAYS "Day of the week?",
                       HOLYDAY "Holyday, current event reported in news, etc?")
    dob3_day "Which day of the week do you remember the child was born?"
             : (MON "Monday",
                TUE "Tuesday",
                WED "Wednesday",
                THUR "Thursday",
                FRI "Friday",
                SAT "Saturday",
                SUN "Sunday")
    dob3_holy "Which holyday, or current event reported in the news do you remember was on the same day the child was born?
              @/@/Please describe:"
              : STRING [100]
    dob4 "Were you present at the birth?"
         "Ulikuwepo wakati wa kuzaliwa?"
         : TYesNo
RULES
    dob1
    IF (dob1 = OTHER_RELATIVE) THEN
        dob1_othrel
    ELSEIF (dob1 = OTHER) THEN
        dob1_oth
    ENDIF
    dob2
    IF (dob2 = YES) THEN
        Tdob2
    ENDIF
    dob3
    IF (DAYS IN dob3) THEN
        dob3_day
    ENDIF
    IF (HOLYDAY IN dob3) THEN
        dob3_holy
    ENDIF
    dob4
    IF ((etimestamp <> aux_etimestamp) AND (dob4 = RESPONSE)) THEN
        etimestamp:= aux_etimestamp
    ENDIF
ENDBLOCK

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    dob1A "Is @B^c1.C106Aa@B currently available to be interviewed?" : TYesNo
    BDOB : ARRAY [1..2] OF BlkDOB
    dob1A1 "Is @B^c1.C106Ab_nme@B currently available to be interviewed?" : TYesNo
AUXFIELDS
    aux_dob1A "@G@BSECOND OPINION ON STUDY CHILD BIRTH DATE@B@G
              @/@/@RASK THE PERSON MENTIONED IN @BC106A@B (the one who was present in the compound just after @R@B^c1.C1_SCfname@B@R's birth)@R"
              : (ENTER), EMPTY
    aux_dob1A1 "@G@BSECOND OPINION ON STUDY CHILD BIRTH DATE@B@G
               @/@/@RASK THE PERSON MENTIONED IN @BC106Ab@B (the @R@Bsecond person@B@R who was present in the compound just after @R@B^c1.C1_SCfname@B@R's birth)@R"
               : (ENTER), EMPTY
              
    aux_etimestamp : TIMETYPE
LAYOUT
    BEFORE aux_dob1A NEWPAGE
    AFTER aux_dob1A NEWPAGE
    BEFORE aux_dob1A1 NEWPAGE
    AFTER aux_dob1A1 NEWPAGE
RULES
    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    aux_dob1A
    dob1A
    IF ((stimestamp = EMPTY) AND (dob1A = RESPONSE)) THEN
       stimestamp:= SYSTIME
    ENDIF
    IF (dob1A = YES) THEN
        BDOB [1]
    ENDIF
    IF (c1.C106Ab = YES) THEN
        aux_dob1A1
        BDOB [2]
    ENDIF
    {FINISH}

    {END TIME AND DATE STAMPS}
    aux_etimestamp.KEEP
    aux_etimestamp:= SYSTIME
    etimestamp.KEEP
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
