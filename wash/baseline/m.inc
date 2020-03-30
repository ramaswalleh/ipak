BLOCK modm
{MARRIAGE STABLILITY MODULE}

TYPE
    TMarriage = (CHURCH "IN CHURCH / MOSQUE / TEMPLE" "KANISANI / MSKITINI / HEKALU",
                 COURT "IN COURT" "KORTINI",
                 CUSTOM "CUSTOMARY MARRIAGE" "NDOA YA KITAMADUNI")

{DATE OF MARRIAGE BLOCK}
BLOCK BlkM5
FIELDS
    M5_Day "Day of marriage:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE DAY OF MARRIAGE@R"
           : 1..31, DK
    M5_Mon "Month of marriage:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE MOMTH OF MARRIAGE@R"
           : 1..12, DK
    M5_Yea "Year of marriage:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE YEAR OF MARRIAGE@R"
           : 2012..2020, DK
    M5_Dat : STRING [10]
RULES
    M5_Day
    M5_Mon
    M5_Yea
    CHECK ((M5_Day = DK) OR (M5_Mon <> DK) OR (M5_Yea = DK))
          "@R@BERROR!@B
          @/@/@R@BMonth@B@R can only be @BDon't Know@B if @R@BDay@B@R is @BDon't Know@B@R"
    CHECK ((M5_Day = DK) OR (M5_Mon = DK) OR (M5_Yea <> DK))
          "@R@BERROR!@B
          @/@/@R@BYear@B@R can only be @BDon't Know@B if both @R@BDay@B@R and @R@BMonth@B@R are @BDon't Know@B@R"
    CHECK ((M5_Day = DK) OR (M5_Mon <> DK) OR (M5_Yea <> DK))
          "@R@BERROR!@B
          @/@/@R@BYear@B@R can only be @BDon't Know@B if both @R@BDay@B@R and @R@BMonth@B@R are @BDon't Know@B@R"
    CHECK ((M5_Day <> DK) OR (M5_Mon = DK) OR (M5_Yea <> DK))
          "@R@BERROR!@B
          @/@/@R@BYear@B@R can only be @BDon't Know@B if both @R@BDay@B@R and @R@BMonth@B@R are @BDon't Know@B@R"

    M5_Dat:= STR (M5_Day) + '/' + STR (M5_Mon) + '/' + STR (M5_Yea)
    IF (M5_Day = DK) AND (M5_Mon <> DK) AND (M5_Yea <> DK) THEN
        M5_Dat:= '99/' + STR (M5_Mon) + '/' + STR (M5_Yea)
    ELSEIF (M5_Day <> DK) AND (M5_Mon = DK) AND (M5_Yea <> DK) THEN
        M5_Dat:= STR (M5_Day) + '/99/' + STR (M5_Yea)
    ELSEIF (M5_Day <> DK) AND (M5_Mon <> DK) AND (M5_Yea = DK) THEN
        M5_Dat:= STR (M5_Day) + '/' + STR (M5_Mon) + '/9999'
    ELSEIF (M5_Day = DK) AND (M5_Mon = DK) AND (M5_Yea <> DK) THEN
        M5_Dat:= '99/99/' + STR (M5_Yea)
    ELSEIF (M5_Day = DK) AND (M5_Mon <> DK) AND (M5_Yea = DK) THEN
        M5_Dat:= '99/' + STR (M5_Mon) + '/9999'
    ELSEIF (M5_Day <> DK) AND (M5_Mon = DK) AND (M5_Yea = DK) THEN
        M5_Dat:= STR (M5_Day) + '/99/9999'
    ELSEIF (M5_Day = DK) AND (M5_Mon = DK) AND (M5_Yea = DK) THEN
        M5_Dat:= '99/99/9999'
    ENDIF
ENDBLOCK

{DATE OF MARRIAGE TABLE}
TABLE TblM5
FIELDS
    BM5 : BlkM5
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE

    M1 "Are you married?"
       "Je, umeolewa?"
       : TYesNo
    {M2 "How were you married?
       @/@/@RREAD RESPONSES@R"
       "Uliolewa kwa njia gani?
       @/@/@RREAD RESPONSES@R"
       : TMarriage}
    M3 "For how long have you been married (cohabitation)?
       @/@/@RRECORD EXACTLY WHAT THE RESPONDENT SAYS@R"
       "Umeolewa kwa muda gani (umeishi pamoja kwa muda gani)?
       @/@/@RRECORD EXACTLY WHAT THE RESPONDENT SAYS@R"
       : SET [4] OF (YEARS "Years",
                     MONTHS "Months",
                     WEEKS "Weeks",
                     DAYS "Days")
    M3_Yea "Enter the number of Years:" : 1..100
    M3_Mon "Enter the number of Months:" : 1..24
    M3_Wee "Enter the number of Weeks:" : 1..20
    M3_Day "Enter the number of Days:" : 1..90
    {M4 "Do you plan to marry your current partner?
       @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF SHE PLANS TO MARRY HER CURRENT PARTNER@R"
       "Je, unania ya kuolewa na mpenzi wako hivi sasa?
       @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF SHE PLANS TO MARRY HER CURRENT PARTNER@R"
       : TYesNo, DK
    TM5 : TblM5
    M6 "How do you plan to marry?
       @/@/@RREAD RESPONSES@R"
       "Je, unapanga  kuolewa kwa njia gani?
       @/@/@RREAD RESPONSES@R"
       : TMarriage}
    M7 "Does your spouse have other wives?"
       "Je, mume wako ana wake wengine?"
       : TYesNo
    M8 "How many other wives does your spouse have?"
       "Je, mume wako ana wake wangapi wengine?"
       : 1..20
    M9 "How many wives did your spouse marry before you?"
       "Je, mume wako alikuwa na wake wangapi kabla ya kukuoa?"
       : 0..20
    M10 "Is your husband officially known to your family?"
        "Je, mume wako anajulikana kwenu kirasmi?"
        : TYesNo
    M11 "Has the husband's family visited your family for dowry negotiations or payment?"
        "Je, familia ya mume wako imetembelea familia yako kwa shughuli za mahari?"
        : TYesNo
    M12 "Do you or your spouse / partner own land in this village?"
        "Je, wewe au mume wako mnamiliki shamba kwa kijiji hiki?"
        : TYesNo
    M13 "How did you acquire this land?"
        "Je, ulipata hii shamba kwa njia gani?"
        : (PURCHASED "Purchased" "Kununua",
           FATHER "Inherited from father-in-law" "Kuridhi kutoka kwa baba mkwe",
           RELATIVE "Inherited from other relative" "Kuridhi kutoka kwa jamaa wengine")
    M14 "What is the purpose of this land?"
        "Je, shamba hili ni la shughuli / kazi gani"
        : (FARM "Farming" "Kulima",
           BUILD "Build houses / to live in" "Kujenga au kuishi",
           BOTH "Both farming and for houses / to live in" "Kuishi na kulima",
           OTHER "Other" "Matumizi zingine")
    M14_oth "Specify other purpose of this land:"
            "Elezea:"
            : STRING [100]
    {M15 "When was the last time you visited your home relatives?
        @/@/@RRECORD EXACTLY WHAT THE RESPONDENT SAYS@R"
        "Ni lini mwisho ulitembelea jamaa yako (familia ya kwenu)?
        @/@/@RRECORD EXACTLY WHAT THE RESPONDENT SAYS@R"
        : SET [6] OF (YEARS "Years",
                      MONTHS "Months",
                      WEEKS "Weeks",
                      DAYS "Days",
                      NEVER "Never visited",
                      NA (88) "Not Applicable / Live with home relatives currently")
    M15_Yea "Last time in years:" : 1..100
    M15_Mon "Last time in months:" : 1..24
    M15_Wee "Last time in weeks:" : 1..20
    M15_Day "Last time in days:" : 1..90
    M16 "How long did you stay?
        @/@/@RRECORD EXACTLY WHAT THE RESPONDENT SAYS
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REMEMBER HOW LONG SHE STAYED@R"
        "Ulikaa huko muda gani?
        @/@/@RRECORD EXACTLY WHAT THE RESPONDENT SAYS
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / CANNOT REMEMBER HOW LONG SHE STAYED@R"
        : SET [5] OF (YEARS "Years",
                      MONTHS "Months",
                      WEEKS "Weeks",
                      DAYS "Days",
                      HOURS "Hours"), DK
    M16_Yea "How long in years:" : 1..100
    M16_Mon "How long in months:" : 1..24
    M16_Wee "How long in weeks:" : 1..20
    M16_Day "How long in days:" : 1..90
    M16_Hou "How long in hours:" : 1..100
    M17 "How often do you visit your home relatives?"
        "Ni mara ngapi wewe hutembelea jamaa wako wa nyumbani?"
        : (DAY "Every day" "Kila siku",
           WEEK "Once or twice a week" "Mara moja au mbili kwa wiki",
           MONTH "Once or twice a month" "Mara moja au mbili kwa mwezi",
           THREE "Once or twice every three months" "Mara moja au mbili kwa mwezi tatu",
           LESS "Less than once every three months" "Chini ya mara moja kila miezi tatu")}
    M18A "Have you ever visited your home relatives for longer than 2 weeks?"
         "Je, umewahi tembelea jamaa wako nyumbani kwa muda wa zaidi ya wiki mbili?"
         : (YES "Yes",
            NO "No",
            NA (88) "Not Applicable")
    M18 "What were your reasons for visiting?
        @/@/@R(Refers to all visits not just the last time)
        @/@/SELECT ALL THAT APPLY@R"
        "Sababu zako za matembezi ziliku wa zipi?
        @/@/@R(Zingatia matembezi yote siyo tu matembezi ya mwisho)
        @/@/SELECT ALL THAT APPLY@R"
        : SET [7] OF (DISPUTE "Domestic dispute" "Ugomvi wa nyumbani",
                      CEREMONY "Ceremony (funerals, weddings)" "Sherehe (matanga, harusi)",
                      MEET "Family meeting" "Mikiutano ya familia",
                      BIRTH "Giving birth" "Kujifungua",
                      VISIT "Home visiting" "Kutembelea jamaa",
                      SICK "Sickness" "Ugonjwa",
                      OTHER "Other")
    M18_Cer "Specify the type of ceremony:" : STRING [100]
    M18_Oth "Specify other:" : STRING [100]

LOCALS
    I : INTEGER
AUXFIELDS
    aux_m "@G@BMarriage Stability Module@B@G"
          : (ENTER), EMPTY
    aux_M5 "@GWhen do you plan to marry your current partner?@G"
           "@GJe, unapanga kuolewa na mpenzi wako wa sasa lini?@G"
           : (ENTER), EMPTY
LAYOUT
    BEFORE aux_m NEWPAGE
    AFTER aux_m NEWPAGE

RULES
    {START TIME STAMP AND DATE STAMP}
    stimestamp.KEEP
    IF (stimestamp = EMPTY) THEN
        stimestamp:= SYSTIME
    ENDIF
    sdatestamp.KEEP
    IF (sdatestamp = EMPTY) THEN
        sdatestamp:= SYSDATE
    ENDIF

    aux_m
    M1
    IF (M1 = YES) THEN
        {M2}
        M3
        IF (YEARS IN M3) THEN
            M3_Yea
            SIGNAL (M3_Yea < 51) "@G@BALERT!@B
                                 @/@/Are you certain the respondent has been married for over @B50@B years?@G"
        ENDIF
        IF (MONTHS IN M3) THEN
            M3_Mon
        ENDIF
        IF (WEEKS IN M3) THEN
            M3_Wee
        ENDIF
        IF (DAYS IN M3) THEN
            M3_Day
        ENDIF
        M7
        IF (M7 = YES) THEN
            M8
            M9
        ENDIF
        M10
        IF (M10 = YES) THEN
            M11
        ENDIF
    ENDIF
    M12
    IF (M12 = YES) THEN
        M13
        M14
        IF (M14 = OTHER) THEN
            M14_oth
        ENDIF
    ENDIF
    {M15
    IF (YEARS IN M15) THEN
        M15_Yea
        SIGNAL (M15_Yea < 41) "@G@BALERT!@B
                              @/@/Are you certain the respondent has not visited her home relatives in over @B40@B years?@G"
    ENDIF
    IF (MONTHS IN M15) THEN
        M15_Mon
    ENDIF
    IF (WEEKS IN M15) THEN
        M15_Wee
    ENDIF
    IF (DAYS IN M15) THEN
        M15_Day
    ENDIF
    IF (NEVER IN M15) THEN
        FOR I:= 1 TO 88 DO
            IF (M15 [I] = YEARS) OR (M15 [I] = MONTHS) OR (M15 [I] = WEEKS) OR (M15 [I] = DAYS) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BNever visited@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ENDIF
    IF (NA IN M15) THEN
        FOR I:= 1 TO 88 DO
            IF (M15 [I] = YEARS) OR (M15 [I] = MONTHS) OR (M15 [I] = WEEKS) OR (M15 [I] = DAYS) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BNot Applicable@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ENDIF
    IF NOT ((NEVER IN M15) OR (NA IN M15)) THEN
        M16
        IF (YEARS IN M16) THEN
            M16_Yea
            SIGNAL (M16_Yea < 41) "@G@BALERT!@B
                                  @/@/Are you certain the respondent came to visit her home relatives over @B40@B years ago?@G"
        ENDIF
        IF (MONTHS IN M16) THEN
            M16_Mon
        ENDIF
        IF (WEEKS IN M16) THEN
            M16_Wee
        ENDIF
        IF (DAYS IN M16) THEN
            M16_Day
        ENDIF
        IF (HOURS IN M16) THEN
            M16_Hou
        ENDIF
        M17}
        M18A
        IF (M18A = YES) THEN
            M18
            IF (CEREMONY IN M18) THEN
                M18_Cer
            ENDIF
            IF (OTHER IN M18) THEN
                M18_Oth
            ENDIF
        ENDIF
    {ENDIF}

    {END TIME STAMP AND DATE STAMP}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (M18_Oth <> EMPTY)) OR ((etimestamp = EMPTY) AND (M18_Cer <> EMPTY)) OR ((etimestamp = EMPTY) AND NOT (CEREMONY IN M18))
    OR ((etimestamp = EMPTY) AND NOT (OTHER IN M18)) {OR ((etimestamp = EMPTY) AND ((NEVER IN M15) OR (NA IN M15)))} THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF ((edatestamp = EMPTY) AND (M18_Oth <> EMPTY)) OR ((edatestamp = EMPTY) AND (M18_Cer <> EMPTY)) OR ((edatestamp = EMPTY) AND NOT (CEREMONY IN M18))
    OR ((edatestamp = EMPTY) AND NOT (OTHER IN M18)) {OR ((edatestamp = EMPTY) AND ((NEVER IN M15) OR (NA IN M15)))} THEN
        edatestamp:= SYSDATE
    ENDIF

ENDBLOCK
