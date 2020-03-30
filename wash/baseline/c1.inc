BLOCK modc1
    INCLUDE "inc\BlkC1C.inc"

TYPE
    TFirstTime = (ZERO_TWO "Between 0 and 2 months" "Kati ya miezi 0 na 2",
                  TWO_FOUR "Between 2 and 4 months" "Kati ya miezi 2 na 4",
                  FOUR_SIX "Between 4 and 6 months" "Kati ya miezi 4 na 6",
                  SIX_EIGHT "Between 6 and 8 months" "Kati ya miezi 6 na 8",
                  OVER_EIGHT "Older than 8 months" "Zaidi ya miezi 8")

    TStatus = (BORN "@BPRESENT@B @I(BORN AND RESIDING IN HOUSEHOLD)@I",
               UNBORN "@BNOT YET BORN@B @I(IN UTERO)@I")


{STUDY CHILD'S DATE OF BIRTH BLOCK DEFINATION}
BLOCK BlkC103
FIELDS
    C103_day "@B^C1_SCfname@B's @BDAY@B of birth:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE STUDY CHILD'S DAY OF BIRTH@R"
             : 1..31, DK
    C103_month "@B^C1_SCfname@B's @BMONTH@B of birth:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE STUDY CHILD'S MONTH OF BIRTH@R"
               : 1..12, DK
    C103_year "@B^C1_SCfname@B's @BYEAR@B of birth:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE STUDY CHILD'S YEAR OF BIRTH@R"
              : 2012..2015, DK
    C103_dob : STRING [10]
AUXFIELDS
    aux_C103 : DATETYPE
RULES
    C103_day
    C103_month
    C103_year
    C103_dob.KEEP

    IF (C103_day <> DK) AND (C103_month <> DK) AND (C103_year <> DK) THEN
        aux_C103:= TODATE (C103_year, C103_month, C103_day)
    ENDIF

    IF (C103_year > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/@R@B^C1_SCfname@B@R's @Byear of birth@B entered as @R@B^C103_year@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (C103_year = sdatestamp.YEAR) AND (C103_month > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/@R@B^C1_SCfname@B@R's @Bmonth of birth@B entered as @R@B^C103_month@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF (C103_year = sdatestamp.YEAR) AND (C103_month = sdatestamp.MONTH) AND (C103_day > sdatestamp.DAY) THEN
                ERROR "@R@BERROR!@B
                      @/@/@R@B^C1_SCfname@B@R's @Bday of birth@B entered as @R@B^C103_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSEIF (C103_year = sdatestamp.YEAR) AND (C103_month = sdatestamp.MONTH) AND (C103_day < (sdatestamp.DAY) - 42) THEN
                ERROR "@R@BERROR!@B
                      @/@/@R@B^C1_SCfname@B@R's @Bday of birth@B entered as @R@B^C103_day@B@R is @I@Ubeyond@U@I two weeks!
                      @/@/Please check your entry and try again.@R"
            ELSE
                IF (C103_day <> DK) THEN
                    IF (C103_day < 10) THEN
                        C103_dob:= '0' + STR (C103_day) + '/'
                    ELSE
                        C103_dob:= STR (C103_day) + '/'
                    ENDIF
                ELSE
                    C103_dob:= '99/'
                ENDIF
                IF (C103_month <> DK) THEN
                    IF (C103_month < 10) THEN
                        C103_dob:= C103_dob + '0' + STR (C103_month) + '/'
                    ELSE
                        C103_dob:= C103_dob + STR (C103_month) + '/'
                    ENDIF
                ELSE
                    C103_dob:= C103_dob + '99/'
                ENDIF
                IF (C103_year <> DK) THEN
                    C103_dob:= C103_dob + STR (C103_year)
                ELSE
                    C103_dob:= C103_dob + '9999'
                ENDIF
            ENDIF
        ENDIF
    ENDIF
    IF NOT ((C103_day = DK) OR (C103_month = DK) OR (C103_year = DK)) THEN
        {IF ((TODATE (C103_year, C103_month, C103_day) < (sdatestamp - (0, 0, 42)))) THEN
            ERROR "@R@BERROR!@B
                  @/@/@R@B^C1_SCfname@B@R cannot be @Uolder@U than @Bsix weeks@B old!
                  @/@/Please check your entry and try again.@R"
        ENDIF}
        SIGNAL ((TODATE (C103_year, C103_month, C103_day) > (sdatestamp - (0, 0, 21))))
            "@G@BWARNING!@B
            @/@/The @Bchild@B's / @Bchildren@B's age is @Uolder@U than @B3 weeks@B old.
            @/@/Suppress if you're sure this is correct.@G"
    ENDIF
ENDBLOCK

{STUDY CHILD'S REPORTED AGE}
BLOCK BlkC105
FIELDS
    C105_A "@B^C1_SCfname@B's reported age in @BYEARS@B:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE STUDY CHILD'S AGE IN YEARS
           @/@/ENTER @R@B“88”@B@R IF THE RESPONDENT DOES NOT MENTION THE AGE IN YEARS.@R"
           : 0..3, DK
    C105_B "@B^C1_SCfname@B's reported age in @BMONTHS@B:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE STUDY CHILD'S AGE IN MONTHS
           @/@/ENTER @R@B“88”@B@R IF THE RESPONDENT DOES NOT MENTION THE AGE IN MONTHS.@R"
           : 0..97, DK
    C105_C "@B^C1_SCfname@B's reported age in @BWEEKS@B:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE STUDY CHILD'S AGE IN WEEKS
           @/@/ENTER @R@B“88”@B@R IF THE RESPONDENT DOES NOT MENTION THE AGE IN WEEKS.@R"
           : 0..97, DK
    C105_D "@B^C1_SCfname@B's reported age in @BDAYS@B:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REPORT THE STUDY CHILD'S AGE IN DAYS
           @/@/ENTER @R@B“88”@B@R IF THE RESPONDENT DOES NOT MENTION THE AGE IN DAYS.@R"
           : 0..97, DK
    C105_dob : DATETYPE
LOCALS
    locC105_A : INTEGER
    locC105_B : INTEGER
    locC105_D : INTEGER
RULES
    C105_A:= 0
    C105_B:= 0
    C105_C
    C105_D
    IF NOT ((C105_D = DK) AND (C105_C = DK) AND (C105_B = DK) AND (C105_A = DK)) THEN
        IF (C105_C >= 4) THEN
            locC105_B:= (C105_B + (C105_C / 4))
        ELSE
            locC105_D:= (C105_D + (C105_C * 7))
        ENDIF
        IF (C105_D >= 30) THEN
            locC105_B:= (C105_B + (C105_D / 30))
        ENDIF
        IF (C105_B >= 12) THEN
            locC105_A:= (C105_A + (C105_B / 12))
        ENDIF
        C105_dob:= (sdatestamp - (locC105_A, locC105_B, locC105_D))
    ENDIF
ENDBLOCK

{STUDY CHILD'S DATE OF BIRTH TABLE}
TABLE TblC103
FIELDS
    BC103 : BlkC103
RULES
    BC103
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    C1_SCfname "@BStudy Child@B's first name:" : STRING [15]
    C102_status "Child status:" : TStatus
    C1_SCid "Study Child ID:" : TIndividualID
    TC103 : TblC103
    C103a1 "What day of the week was @B^C1_SCfname@B born?"
           "Ni siku gani ya wiki @B^C1_SCfname@B alizaliwa?"
           : (MON "Monday",
              TUE "Tuesday",
              WED "Wednesday",
              THUR "Thursday",
              FRI "Friday",
              SAT "Saturday",
              SUN "Sunday")
    C103a_pre "Was @B^C1_SCfname@B born premature?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE STUDY CHILD WAS BORN PREMATURE@R"
              "Je, @B^C1_SCfname@B alizaliwa kabla ya wakati?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE STUDY CHILD WAS BORN PREMATURE@R"
              : TYesNo, DK
    C103b_pre "How many weeks premature?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY WEEKS PREMATURE THE STUDY CHILD WAS BORN@R"
              "Je, @B^C1_SCfname@B alizaliwa wiki ngapi kabla ya wakati?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY WEEKS PREMATURE THE STUDY CHILD WAS BORN@R"
              : (ONE_WEEK "One week or less",
                 TWO_WEEKS "Two weeks",
                 THREE_WEEKS "Three weeks",
                 FOUR_WEEKS "Four weeks",
                 OTHER "Other"), DK
    C103b_oth "Specify other number of weeks:" : 5..12
    DOB "Do you have a valid clinic card or baptism certificate for @B^C1_SCfname@B?
        @/@/Can I see it?"
        "Je una kadi halali ya kliniki au ya ubatizo ya @B^C1_SCfname@B?
        @/@/Je, naweza kuiona?"
        : TYesNo
    C104_DOB "Source of Date of Birth:"
             : (CARD "CONFIRMED DATE OF BIRTH BY VALID CLINIC CARD",
                REMEMBER "MOTHER / PRIMARY CARETAKER / RELATIVE REMEMBERS DATE OF BIRTH",
                BOTH "BOTH OPTIONS @B1@B and @B2@B ABOVE",
                ESTIMATE "ESTIMATED USING BAPTISM CARD",
                CANNOT (77) "CANNOT PRODUCE CLINIC OR BAPTISM CARD AND UNABLE TO REMEMBER DATE OF BIRTH")
    BC105 : BlkC105
    C106_age "WHICH SOURCE OF AGE IS MORE RELIABLE AND WILL BE USED IN THE SURVEY?"
             : (BIRTH "BIRTH DATE",
                REPORT "REPORTED AGE")
    C107_sex "@B^C1_SCfname@B's gender?"
             : (MALE "Male",
                FEMALE "Female")
    C107A "Where was the child born?"
          : (PERMANENT "Permanent home",
             RELATIVE "Home of a relative",
             COMMUNITY "Home of another community member",
             HOSPITAL "Hospital / Clinic",
             OTHER (77) "Other")
    C107A_oth "Specify other place:" : STRING [100]
    C106A "Is there someone else in the compound who was present just after birth?"
          "Kulikuwa na mtu mwingine yeyote kwenye boma mara tu ulipojifungua?"
          : TYesNo
    C106Aa "What is the name of the person who was present just after birth?"
           "Ni nani aliyekuwa wakati ulipojifungua?"
           : STRING [50]
    C106Ab "Is there another person who was present just after birth?"
           "Kuna mtu mwingine aliye kuwa wakati ulipojifungua?"
           : TYesNo
    C106Ab_nme "What is the name of this other person?"
               "Jina la huyu mtu mwingine ni?"
               : STRING [50]
    BC1C : ARRAY [1..3] OF BlkC1C
    BF "Have you ever had a child before?"
       "Umewahi kuwa na mtoto hapo awali?"
       : TYesNo
    BF1a_chal "Did you experience any challenges breastfeeding your @Ulast@U child?
              @/@/@RREAD RESPONSES@R"
              "Je, ulikua na changamoto au shida zozote kunyonyesha @Umtoto wako wa mwisho@U?
              @/@/@RREAD RESPONSES@R"
              : (NO "NO CHALLENGES" "HAMNA CHANGAMOTO",
                 SOME "SOME CHALLENGES" "CHANGAMOTO KIASI",
                 MANY "MANY CHALLENGES" "CHANGAMOTO NYINGI"), EMPTY
    BF2a_when "When did you give @Bwater or other liquids@B to your @Ulast@U child for the first time?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHEN SHE GAVE WATER OR OTHER LIQUIDS TO HER LAST CHILD FOR THE FIRST TIME@R"
              "Ni lini mara ya kwanza ulimpa @Umtoto wako wa mwisho@U @Bmaji au vinywaji vingine@B?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHEN SHE GAVE WATER OR OTHER LIQUIDS TO HER LAST CHILD FOR THE FIRST TIME@R"
              : TFirstTime, DK
    BF2b_when "When do you plan to give @Bwater or other liquids@B to @Uthis@U child [STUDY CHILD] for the first time?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHEN SHE SHE IS PLANNING TO GIVE WATER OR OTHER LIQUIDS TO THE STUDY CHILD FOR THE FIRST TIME@R"
              "Umepanga kumpa @Umtoto huyu@U [STUDY CHILD] @Bmaji au vinywaji vingine@B mara ya kwanza lini?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHEN SHE SHE IS PLANNING TO GIVE WATER OR OTHER LIQUIDS TO THE STUDY CHILD FOR THE FIRST TIME@R"
              : TFirstTime, DK
    BF3a_when "When did you give @Bporridge or other solid foods@B to your @Ulast@U child for the first time?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHEN SHE GAVE WATER OR OTHER LIQUIDS TO HER LAST CHILD FOR THE FIRST TIME@R"
              "Ni lini mara ya kwanza ulimpa @Umtoto wako wa mwisho@U @Buji au vyakula vingine vigumu@B?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHEN SHE GAVE WATER OR OTHER LIQUIDS TO HER LAST CHILD FOR THE FIRST TIME@R"
              : TFirstTime, DK
    BF3b_when "When do you plan to give @Bporridge or other solid foods@B to @Uthis@U [STUDY CHILD] child for the first time?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHEN SHE SHE IS PLANNING TO GIVE WATER OR OTHER LIQUIDS TO THE STUDY CHILD FOR THE FIRST TIME@R"
              "Unapanga kumpa @Umtoto huyu@U [STUDY CHILD] @Buji au vyakula vingine vigumu@B lini kwa mara ya kwanza?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHEN SHE SHE IS PLANNING TO GIVE WATER OR OTHER LIQUIDS TO THE STUDY CHILD FOR THE FIRST TIME@R"
              : TFirstTime, DK
    {BF4a_qual "How satisfied are you with the @Bquality of the foods@B that you are able to feed your children?
              @/@/@RREAD RESPONSES@R"
              "Umetosheka vipi na @Bubora wa vyakula@B ambavyo wewe hulisha wanao kwa kawaida?
              @/@/@RREAD RESPONSES@R"
              : (VERY "VERY SATISFIED" "UMETOSHEKA KABISA",
                 SOMEWHAT "SOMEWHAT SATISFIED" "UMETOSHEKA KIASI",
                 NOT_VERY "NOT VERY SATISFIED" "HUJATOSHEKA",
                 NOT_AT_ALL "NOT AT ALL SATISFIED" "HUJATOSHEKA HATA KIDOGO")}
    BF4b_hour "How important it is to put the baby to the breast in the first hour after birth?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW IMPORTANT IT IS TO PUT THE BABY TO THE BREAST IN THE FIRST HOUR AFTER BIRTH
              @/@/READ RESPONSES@R"
              "Kuna umuhimu wa kiasi gani kumnyonyesha mtoto ndani ya saa moja baada ya kujifungua?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW IMPORTANT IT IS TO PUT THE BABY TO THE BREAST IN THE FIRST HOUR AFTER BIRTH
              @/@/READ RESPONSES@R"
              : (VERY "VERY IMPORTANT" "MUHIMU SANA",
                 SOMEWHAT "SOMEWHAT IMPORTANT" "MUHIMU KIASI",
                 NOT_VERY "NOT VERY IMPORTANT" "SI MUHIMU SANA",
                 NOT_AT_ALL "NOT AT ALL IMPORTANT" "SIO MUHIMU"), DK
    BF5b_water "Do young babies need to be given water?
               @/@/@R@IYoung baby@I refers to < 6 months old.
               @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF YOUNG BABIES NEED TO BE GIVEN WATER@R"
               "Je, watoto wachanga wanahitaji kupewa maji?
               @/@/@R@IWatoto wachanga@I yamaanisha wale wa chini ya miezi sita.
               @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF YOUNG BABIES NEED TO BE GIVEN WATER@R"
               : TYesNo, DK
    BF7b_preg "If a woman becomes pregnant while breastfeeding, should she continue to breastfeed?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF BREASTFEEDING SHOULD CONTINUE IF A MOTHER BECOMES PREGNANT@R"
              "Kama mama anakuwa mjamzito akinyonyesha, anafaa kuendelea kunyonyesha?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF BREASTFEEDING SHOULD CONTINUE IF A MOTHER BECOMES PREGNANT@R"
              : TYesNo, DK
LOCALS
    loclabel : STRING [8]
    LOCHEAD : STRING [8]
    c1, par : INTEGER [1]

AUXFIELDS
    aux_c1 "@G@BC.1@|@UBIRTH DATE, AGE AND SEX@U@B@G" : (ENTER), EMPTY
    aux_cert "@RHAVE RESPONDENT SEARCH FOR THIS DOCUMENT IF NOT IMMEDIATELY VIEWABLE.
             @/@/USE DOCUMENT TO CONFIRM DOB, IF POSSIBLE.@R"
             : (ENTER), EMPTY
    aux_C105 "@GRequest for @B^C1_SCfname@B's reported age from the respondent.@G
             @/@/@RTHIS SHOULD BE IN @UWEEKS@U AND @UDAYS@U.
             @/@/RECORD EXACTLY WHAT THE RESPONDENT SAYS - IF RESPONDENT REPORTS “@R@B15@B@R” MONTHS, @BWRITE 15 MONTHS@B.@R"
             : (ENTER), EMPTY
    aux_C106A "@R@BVISIT IN PRIVATE AFTER THE SURVEY@B@R" : (OK)

LAYOUT
    BEFORE aux_c1 NEWPAGE
    AFTER aux_c1 NEWPAGE

    BEFORE aux_C105 NEWPAGE

    AFTER C107_sex NEWPAGE

    BEFORE BF NEWPAGE

RULES
    aux_c1

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
    C102_status
    C1_SCid:= hhid + '01'
    C1_SCid.SHOW
    IF (C102_status = BORN) THEN
        C1_SCfname:= c.TRI008.BRI008.RI008_fname
        C1_SCfname.SHOW
        DOB
        aux_cert
        TC103
        C103a1
        C103a_pre
        IF (C103a_pre = YES) THEN
            C103b_pre
            IF (C103b_pre = OTHER) THEN
                C103b_oth
                SIGNAL
                    (C103b_oth < 13) "@G@BALERT!@B
                                     @/@/Number of weeks entered as @G@B^C103b_oth@B@G is greater than @B12@B.
                                     @/@/Suppress if correct.@G"
            ENDIF
        ENDIF
        C104_DOB
        IF NOT (C104_DOB = CANNOT) THEN
            aux_C105
            BC105
        ENDIF
        IF NOT ((TC103.BC103.C103_day = DK) OR (TC103.BC103.C103_month = DK) OR (TC103.BC103.C103_year = DK)
        OR (BC105.C105_A = DK) OR (BC105.C105_B = DK) OR (BC105.C105_C = DK) OR (BC105.C105_D = DK)) THEN
            IF ((STRTODATE (TC103.BC103.C103_dob)) < (BC105.C105_dob)) THEN
                C106_age:= BIRTH
                C106_age.SHOW
            ELSE
                C106_age:= REPORT
                C106_age.SHOW
            ENDIF
        ELSE
            C106_age
        ENDIF
        C107_sex
        C107A
        IF (C107A = OTHER) THEN
            C107A_oth
        ENDIF
        {C106A
        IF (C106A = YES) THEN}
            aux_C106A
            C106Aa
            C106Ab
            IF (C106Ab = YES) THEN
                C106Ab_nme
            ENDIF
        {ENDIF}
    ENDIF
    {BLOCK C1C EXECUTION DETERMINANT}
    IF (sc.visit = YES) OR (a.Thh [1].BA01.A5_0t3 >= 1) THEN
        FOR c1:= 1 TO 3 DO
            IF ((intParChil - c1) >= 0) THEN
                loclabel:= 'Parasite'
                LOCHEAD:= 'PARASITE'
                FOR par:= 1 TO sc.many DO
                    IF (sc.BPC [par].SC01 = YES) THEN
                        IF (sc.BPC [par].TSC2.BSC2.SC2_fname <> BC1C [c1 - 1].C1C_Cfname) THEN
                            BC1C [c1].C1C_Cfname:= sc.BPC [index [par]].TSC2.BSC2.SC2_fname
                            BC1C [c1].C1213:= sc.BPC [index [par]].SC1
                            IF (sc.BPC [index [par]].SC1A = MALE) THEN
                                BC1C [c1].C1C07_sex:= MALE
                            ELSE
                                BC1C [c1].C1C07_sex:= FEMALE
                            ENDIF
                        ENDIF
                    ENDIF
                ENDDO
                BC1C [c1]
            ELSEIF ((C102_status = BORN) AND (a.Thh [1].BA01.A5_0t3 > 1) AND (intParChil = 0) AND (c1 = 1))
            OR ((C102_status = UNBORN) AND (a.Thh [1].BA01.A5_0t3 > 0) AND (intParChil = 0) AND (c1 = 1)) THEN
                loclabel:= 'Other'
                LOCHEAD:= 'OTHER'
                BC1C [c1].C1C_Cfname:= b.TB10.BB10 [young].B10_fname
                BC1C [c1].C1213:= b.TB10.BB10 [young].Childid
                BC1C [c1]
            ENDIF
        ENDDO
    ENDIF
    BF
    IF (BF = YES) THEN
        BF1a_chal
        BF2a_when
    ENDIF
    BF2b_when
    IF (BF = YES) THEN
        BF3a_when
    ENDIF
    BF3b_when
    {IF (BF = YES) THEN
        BF4a_qual
    ENDIF}
    BF4b_hour
    BF5b_water
    BF7b_preg
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF (etimestamp = EMPTY) AND ((BF7b_preg = RESPONSE) OR (BF7b_preg = DK)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
