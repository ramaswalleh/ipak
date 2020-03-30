BLOCK modg

TYPE
    TYesNA = (YES "Yes",
              NA (88) "Not Applicable")

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    G1 "@BTIME END INTERVIEW:@B" : TIMETYPE
    G1i_1 "CHILD 0 - 36 MONTHS HAND INSPECTION (@BC.701@B)
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
          : TYesNA, DK
    G1i_2 "PARASITE CHILD SHOE OBSERVATION (@BSC.11@B)
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
          : TYesNA, DK
    G7_1 "HANDWASHING LOCATION / DISTANCE (@BC.702@B)" : TYesNA
    G7_3 "CHILD'S POTTY LOCATION (@BC.818@B)" : TYesNA
    G7_4 "FLY RETRIEVAL - KITCHEN (@BFR.11@B)" : TYesNA
    G7_5 "LATRINE OBSERVATIONS (@BS.805@B)" : TYesNA
    G7_6 "FLY RETRIEVAL - LATRINE (@BFR.12@B)" : TYesNA
    G7_7 "FECES IN COMPOUND (@BC.826@B)" : TYesNA
    G3 "WHICH LANGUAGE WAS @UPRIMARILY USED@U TO CONDUCT THE SURVEY?"
       : (KISWAHILI,
          KILUHYA,
          ENGLISH,
          OTHER)
    G3_oth "Specify other language used:" : STRING [30]
    G4 "WHICH ADDITIONAL LANGUAGE (IF ANY) WAS USED TO CONDUCT THE SURVEY?"
       : (KISWAHILI,
          KILUHYA,
          ENGLISH,
          OTHER,
          NO (88) "NO OTHER LANGUAGE")
    G4_oth "Specify other additional language used:" : STRING [30]
    G5 "DID YOU REQUIRE A TRANSLATOR DURING ANY PART OF THE SURVEY?" : TYesNo
    G6 "PRIMARY LOCATION OF SURVEY"
       : (INSIDE "INSIDE MAIN HOUSE",
          OUTSIDE,
          OTHER (77))
    G6_oth "Specify other location:" : STRING [30]
    G7 "WERE ANY OTHER INDIVIDUALS PRESENT FOR @UMORE THAN 5 MINUTES@U DURING THE INTERVIEW?" : TYesNo
    G7_yes "Specify who and why:" : STRING [30]
    G8 "WAS THE SURVEY TERMINATED EARLY?" : TYesNo
    G8_yes "WHAT WAS THE LAST QUESTION ANSWERED?" : STRING [30]
    G9 "WHY WAS THE SURVEY TERMINATED EARLY?" : STRING [244], EMPTY
    G10 "Are you taking a field blank today?
        @/@/@R(There is a water bottle in your cooler)@R"
        : TYesNo
    G01 "@BOBTAIN DIRECTIONS TO WATER SOURCE WHERE WATER BROUGHT IN CUP (C.1003) CAME FROM.
        @/@/HAVE GUIDE DISCUSS WATER SOURCE NAME AND DIRECTIONS WITH THE RESPONDENT TO CONFIRM CORRECT LOCATION.@B
        @/@/INCLUDE 1 - 2 KEY LANDMARKS"
        : SET [2] OF (ONE "One landmark available",
                      TWO "Two landmarks available")
    G01_1 "Key landmark one description:" : STRING [244]
    G01_2 "Key landmark two description:" : STRING [244]

AUXFIELDS
    aux_g "@G@BG.@|CONCLUSION@B@G" : (ENTER), EMPTY
    aux_read "@GThank you so much for your time today.
             @/@/The answers you have given to my questions will be very important as we design programs to improve child health in your area and other parts of Kenya.
             @/@/Remember that you can always contact the IPA office if you wish to speak to someone about our research.@G"
             "@GAsante sana kwa muda wako hivi leo.
             @/@/Majibu ambayo umepeana kwa maswali yangu yatakuwa muhimu kwa kupanga na kuratibu miradi ya kuimarisha afya ya watoto katika hili eneo lenu na sehemu zingine hapa Kenya.
             @/@/Kumbuka kuwa waweza kuwasiliana na ofisi ya IPA wakati wowote ikiwa ungependa kuongea na mtu yeyote kuhusiana na utafiti wetu.@G"
             : (ENTER), EMPTY
    aux_gift "@B@RGIVE RESPONDENT A LESSO AS AN APPRECIATION@R@B" : (ENTER)
    aux_G1 : TIMETYPE
    aux_G1i "@GIF CHILD WAS ASLEEP OR ABSENT DURING SURVEY, DID YOU MAKE RELEVANT CHILD OBSERVATIONS (HAND INSPECTION) IF POSSIBLE?@G" : (ENTER), EMPTY
    aux_G7 "@GCONFIRM YOU CONDUCTED ALL OUTDOOR OBSERVATIONS WHICH MAY HAVE BEEN POSTPONED DUE TO WEATHER (e.g, HANDWASHING LOCATION DISTANCE, LATRINE OBSERVATIONS, WATER SOURCE IN COMPOUND, ETC.)@G"
           : (ENTER), EMPTY
    aux_G10 "@R@BDON’T FORGET TO TAKE A FIELD BLANK ONCE YOU HAVE LEFT THE HOUSEHOLD@B@R"
            : (ENTER), EMPTY

LAYOUT
    BEFORE aux_g NEWPAGE
    AFTER aux_g NEWPAGE

    AFTER aux_read NEWPAGE

    AFTER aux_gift NEWPAGE

    BEFORE aux_G1i NEWPAGE

    BEFORE aux_G7 NEWPAGE

    BEFORE G3 NEWPAGE

RULES
    aux_g
    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    aux_read
    aux_gift
    {CATCH TIME}
    G1.KEEP
    IF (aux_gift = RESPONSE) THEN
        G1:= SYSTIME
    ENDIF
    aux_G1i
    G1i_1
    IF ((stimestamp = EMPTY) AND (G1i_1 = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    G1i_2
    aux_G7
    G7_1
    G7_3
    G7_4
    G7_5
    G7_6
    G7_7
    G3
    IF (G3 = OTHER) THEN
        G3_oth
    ENDIF
    G4
    IF (G4 = OTHER) THEN
        G4_oth
    ENDIF
    G5
    G6
    IF (G6 = OTHER) THEN
        G6_oth
    ENDIF
    G7
    IF (G7 = YES) THEN
        G7_yes
    ENDIF
    G8
    IF (G8 = YES) THEN
        G8_yes
        G9
    ENDIF
    G10
    IF (G10 = YES) THEN
        aux_G10
    ENDIF
    G01
    IF (ONE IN G01) THEN
        G01_1
    ENDIF
    IF (TWO IN G01) THEN
        G01_2
    ENDIF

    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (G8 = NO)) OR ((etimestamp = EMPTY) AND (G9 = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
