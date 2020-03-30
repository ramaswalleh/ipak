BLOCK mode

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    {E1 "How many bednets does your household own?"
       "Nyumba yako ina neti ngapi za mbu?"
       : 0..20
    E2 "Who sleeps under the bednets?"
       "Nani hulala ndani ya neti hizo?"
       : (CHILD "Children only",
          CHILD_ADULT "Children and adults",
          ADULT "Adults only",
          NO_ONE "No one sleeps under the bednets")}
    E3 "Have you ever heard of @BO@Bral @BR@Behydration @BS@Balts (@BORS@B)?"
       "Umewahi kusikia kuhusu mchanganyiko wa kurejesha maji mwilini (@BORS@B)?"
       : TYesNo
    E4 "Have you ever @Uused@U (@BORS@B)?"
       "Umewahi @Utumia@U mchanganyiko huo wa (@BORS@B)?"
       : TYesNo
    E5 "When do you think (@BORS@B) @Ushould be used@U?
       @/@/@RDO NOT READ RESPONSES
       @/@/PROBE IF NECESSARY
       @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN ORS SHOULD BE USED@R"
       "Unafikiria mchanganyiko huo wa (@BORS@B) @Uunafaa kutumika wakati gani@U?
       @/@/@RDO NOT READ RESPONSES
       @/@/PROBE IF NECESSARY
       @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN ORS SHOULD BE USED@R"
       : (EVERY "Every time child has diarrhea",
          WHEN "When diarrhea lasts long or is serious",
          ONLY "Only in hospital",
          OTHER "Other"), DK
    E5_oth "Specify other time respondent thinks (@BORS@B) should be used:" : STRING [30]
    E6 "What is the name of the health facility that members of your household would visit for @Bregular health care@B, or for an @Billness of mild / moderate severity@B?
       @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN THE NAME OF THE HEALTH FACILITY THAT MEMBERS OF HER HOUSEHOLD VISIT@R"
       "Jina la kituo chenu cha afya ambacho watu wa nyumba yako hutembelea @Bmara kwa mara@B kwa sababu ya kiafya au matibabu ya @Bmagonjwa madogo madogo@B kinaitwaje?
       @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN THE NAME OF THE HEALTH FACILITY THAT MEMBERS OF HER HOUSEHOLD VISIT@R"
       : (CODE, OTHER), DK
    E6_cod "Enter the facility's code here:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU DO NOT KNOW THE FACILITY'S CODE@R"
           : 10000..99997, DK
    E6_nam "Name of facility:" : STRING [30]
    E6_oth "Specify other health facility the respondent mentioned:" : STRING [30]
    C1301c "Approximately how long does it take to travel there @B^E6_nam@B (in minutes, one-way, from where we are now)?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW APPROXIMATELY HOW LONG IT TAKES TO TRAVEL TO THE HEALTH FACILITY@R"
           "Ukifikiria, itachukua muda gani kufika kwenye kituo hiki @B^E6_nam@B (mwendo mmoja kutoka hapa tulipo sasa)?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW APPROXIMATELY HOW LONG IT TAKES TO TRAVEL TO THE HEALTH FACILITY@R"
           : 0..997, DK
    E9A "What is the total cost in KSH, per person, to make this trip? (@BOne way@B)"
        "Inagarimu shilingi ngapi, mtu mmoja, kusafari @Bmwendo mmoja@B?"
        : 0..9997
    E9B "When was the last time that any member of this household visited this facility (months / weeks / days)?"
        "Ni lini mwisho jamaa yeyote kutoka kwa nyumba yako alizuru hiki kituo cha afya (mwezi / wiki / masiku)?"
        : SET [4] OF (YEARS "Years",
                      MONTHS "Months",
                      WEEKS "Weeks",
                      DAYS "Days",
                      NEVER (88) "Never visited facility")
    E9B_yea "Years:" : 1..10
    E9B_mon "Months:" : 1..12
    E9B_wks "Weeks:" : 1..4
    E9B_day "Days" : 1..30
    E10 "In the past 3 months, approximately how many times did members of this household visit this health facility for any reason (including with your children)?"
        "Katika miezi tatu zilizopita, mtu katika nyumba alitembelea kituo hiki cha afya takriban mara ngapi kwa sababu yoyote? (pamoja na watoto wako)?"
        : 0..97
    E11A "How many of these visits were related to a case of diarrhea for a child under age 5?
         @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE (NO CHILDREN UNDER 5)@R"
         "Ni safari ngapi kati ya hizi zilihusisha kuhara kwa mtoto chini ya miaka mitano?
         @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE (NO CHILDREN UNDER 5)@R"
         : 0..97
    E11B "How many of these visits were related to a respiratory illness suffered by a child under age 5?
         @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE (NO CHILDREN UNDER 5)@R"
         "Ni safari ngapi kati ya hizi zilihusisha maradhi ya mapafu kwa mtoto chini ya miaka mitano?
         @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE (NO CHILDREN UNDER 5)@R"
         : 0..97
    {E12 "@UIn the past 3 months@U, approximately how much money has your household spent in total on clinic visits, medicine, and medical supplies (bed nets, @BORS@B, Sprinkles), at your primary facility and at all other pharmacies, clinics, and health facilities?
        @/@/@RPROBE: ASK ABOUT CLINIC FEES, MEDICINE, AND MEDICAL SUPPLIES (BED NETS, ORS, SPRINKLES, ETC), AND THEN TOTAL
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW APPROXIMATELY HOW MUCH MONEY HER HOUSEHOLD SPENT AT THE HEALTH FACILITY AND MEDICAL SUPPLIES@R"
        "Katika @Umiezi tatu@U zilizopita, nyumba yako imetumia takribani pesa ngapi kwa sababu ya huduma za kliniki, madawa, na vifaa vya matibabu (neti za mbu, machanganyiko wa @BORS@B, Sprinkles) katika kituo chako cha kimsingi cha afya na katika maduka yote ya dawa, kliniki, na vituo vingine vya afya?
        @/@/@RPROBE: ASK ABOUT CLINIC FEES, MEDICINE, AND MEDICAL SUPPLIES (BED NETS, ORS, SPRINKLES, ETC), AND THEN TOTAL
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW APPROXIMATELY HOW MUCH MONEY HER HOUSEHOLD SPENT AT THE HEALTH FACILITY AND MEDICAL SUPPLIES@R"
        : 0..99997, DK}
    E12A "In the past 3 months, how much money has your household spent related to a case(s) of diarrhea for a child under age 5?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF RESPONDENT DOES NOT KNOW HOW MUCH SHE HAS SPENT ON CASES RELATED TO DIARRHEA@R"
         : 0..99998, DK
    E12B "In the past 3 months, how much money has your household spent related to respiratory illness(es) suffered by a child under age 5?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF RESPONDENT DOES NOT KNOW HOW MUCH SHE HAS SPENT ON CASES RELATED TO RESPIRATORY ILLNESS@R"
         : 0..99998, DK
    {E15 "What is the name of the health facility that members of your household would visit for a @Bsevere illness@B, or a @Bserious medical emergency@B that required advanced care?"
        "Kituo cha afya ambacho watu wa nyumba yako watatumia @Bwakizidiwa na ugonjwa@B au kwa @Bmatibabu maalum@B kinaitwaje?"
        : (CODE, OTHER)
    E15_cod "Enter the facility's code here:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU DO NOT KNOW THE FACILITY'S CODE@R"
           : 10000..99997, DK
    E15_oth "Specify other health facility the respondent mentioned:" : STRING [30]}
    {E10A "During your present / recent pregnancy, how many times did you visit a health facility for health checks for you (not including the vist for the child's actual birth, if applicable)?"
         "Je, ulitembelea kituo cha afya mara ngapi wakati wa mimba yako ya mwisho au ya sasa kwa ukaguzi wa afya yako (pasipo kujumuisha wakati wa mtoto kuzaliwa, ikiwa inafaa)?"
         : 0..97
    C1302 "What is the name of the ECD center where your children go (or will go when they are old enough)?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE OF THE NAME OF THE ECD CENTER@R"
          "Shule ya chekechea ambayo watoto wako wanaenda (ama wataenda wakifikisha umri sawa) inaitwaje?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE OF THE NAME OF THE ECD CENTER@R"
          : STRING [50], DK
    C1303 "What is the name of the primary school where your children go (or will go when they are old enough)?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE OF THE NAME OF THE PRIMARY SCHOOL@R"
          "Shule ya msingi ambayo watoto wako wanaenda (ama wataenda wakifikisha umri sawa) inaitwaje?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE OF THE NAME OF THE PRIMARY SCHOOL@R"
          : (SAME "Same name as above",
             SPECIFY (77) "Specify the name of the primary school"), DK
    C1303_oth "Specify other" : STRING [30]}
LOCALS
    e : INTEGER

AUXFIELDS
    aux_e "@G@BE.@|ADDITIONAL QUESTIONS@B@G" : (ENTER), EMPTY
    aux_etimestamp : TIMETYPE

LAYOUT
    BEFORE aux_e NEWPAGE
    AFTER aux_e NEWPAGE
RULES
    aux_e
    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    {E1}
    IF ((stimestamp = EMPTY) AND (E3 = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    {IF (E1 <> 0) THEN
        E2
    ENDIF}
    E3
    IF (E3 = YES) THEN
        E4
        E5
        IF (E5 = OTHER) THEN
            E5_oth
        ENDIF
    ENDIF
    E6
    IF (E6 = CODE) THEN
        E6_cod
        E6_nam
    ELSEIF (E6 = OTHER) THEN
        E6_oth
    ENDIF
    C1301c
    E9A
    E9B
    IF (NEVER IN E9B) THEN
        FOR e:= 1 TO 4 DO
            IF (E9B [e] = YEARS) OR (E9B [e] = MONTHS) OR (E9B [e] = WEEKS) OR (E9B [e] = DAYS) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BNever visited facility@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ENDIF
    IF (YEARS IN E9B) THEN
        E9B_yea
    ENDIF
    IF (MONTHS IN E9B) THEN
        E9B_mon
    ENDIF
    IF (WEEKS IN E9B) THEN
        E9B_wks
    ENDIF
    IF (DAYS IN E9B) THEN
        E9B_day
    ENDIF
    IF NOT (NEVER IN E9B) THEN
        E10
        SIGNAL
            ((E10 < 11) OR (E10 = 88)) "@G@BALERT!@B
                                       @/@/Did members of respondent's household really visit the health facility more than @Bten@B times?@G"
        IF NOT (E10 = 0) THEN
            E11A
            SIGNAL
                ((E11A < 21) OR (E11A = 88)) "@G@BALERT!@B
                                             @/@/Did the respondent really make more than @Btwenty@B visits for her own health checks?@G"
            E11B
            SIGNAL
                ((E11B < 21) OR (E11B = 88)) "@G@BALERT!@B
                                             @/@/Did the respondent really make more than @Btwenty@B visits that were related to respiratory illness suffered by a child?@G"
        ENDIF
    ENDIF
    {E12}
    E12A
    E12B
    {E15
    IF (E15 = CODE) THEN
        E15_cod
    ELSEIF (E15 = OTHER) THEN
        E15_oth
    ENDIF
    E10A
    C1302
    C1303
    IF (C1303 = SPECIFY) THEN
        C1303_oth
    ENDIF}
    {FINISH}

    {END TIME AND DATE STAMPS}
    aux_etimestamp:= SYSTIME
    etimestamp.KEEP
    IF ((etimestamp <> aux_etimestamp) AND (E12B = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
