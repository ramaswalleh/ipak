BLOCK modhw

{TYPES}
TYPE
    TArea = (LATRINE "Latrine area",
             COOK "Cooking area",
             DISH "Dish washing area",
             OTHER_COMPOUND "Other place within the compound",
             HOUSEHOLD "Within own household",
             OTHER_HOUSEHOLD "Other household in the compound",
             OTHER "Other",
             NA (88) "No soap / soapy water")

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    {C704A "OBSERVE AND RECORD LOCATION OF HANDWASHING"
          : (HOUSE "IN / NEAR MAIN HOUSE (< 2 M TO ENTRANCE)",
             LATRINE "IN / NEAR LATRINE (< 2 M TO ENTRANCE)",
             COOK "IN / NEAR COOKING AREA (<2 M TO ENTRANCE)",
             HOUSE_LATRINE_COOK "> 2 M FROM MAIN HOUSE, LATRINE AND COOKING AREA",
             MULTIPLE "NO SPECIFIC PLACE, MULTIPLE PLACES USED (KENYA: Stand by household entrance)")
    C705 "Now, can you demonstrate how you normally clean your hands after defecation?
         @/@/Try in the same manner as you would if I wasn't here.
         @/@/@RTIME HOW LONG IT TAKES THE RESPONDENT TO BRING MATERIALS TO THAT PLACE (START AT THE MOMENT YOU FINISH ASKING THE QUESTION).
         @/@/WHEN RESPONDENT STARTS CLEANING HER HANDS, TIME DURATION OF RUBBING HANDS TOGETHER.@R"
         "Sasa unaweza nionyesha jinsi wewe huosha mikono yako baada ya haja kubwa?
         @/@/Ningependa uioshe jinsi ungefanya ikiwa singekuwa hapa.
         @/@/@RTIME HOW LONG IT TAKES THE RESPONDENT TO BRING MATERIALS TO THAT PLACE (START AT THE MOMENT YOU FINISH ASKING THE QUESTION).
         @/@/WHEN RESPONDENT STARTS CLEANING HER HANDS, TIME DURATION OF RUBBING HANDS TOGETHER.@R"
         : (DEMO "DEMONSTRATED",
            NO_DEMO "COULD NOT DEMONSTRATE")
    C705_no "Enter reasons why respondent would not demonstrate:" : STRING [244]
    C705b "OBSERVE AND RECORD TIME TO PRODUCE @UALL MATERIALS@U FOR CLEANING HANDS
          @/@/@RMARK “@R@B00:00@B@R” IF MATERIALS ARE ALREADY PRESENT AT HANDWASHING PLACE
          @/@/MARK “@R@B99:99@B@R” IF OBSERVATION NOT POSSIBLE@R"
          : TStopWatch
    C705c "OBSERVE AND RECORD LENGTH OF TIME RESPONDENT SPENDS @URUBBING HER HANDS@U TOGETHER:
          @/@/@RMARK “@R@B99:99@B@R” IF OBSERVATION NOT POSSIBLE@R"
          : TStopWatch
    C705d "OBSERVE AND RECORD ALL MATERIALS USED FOR HAND CLEANSING"
          : SET [11] OF (WATER "WATER",
                         BODY "BAR SOAP (BODY / HAND BAR)",
                         BAR_OTHER "BAR SOAP (OTHER)",
                         DRY "POWDERED SOAP (DRY)",
                         SOAPY "SOAPY WATER",
                         CLOTH "CLOTH OR LEAVES",
                         BASIN "BASIN / PITCHER",
                         LATRINE (11) "TIPPY TAP (BY LATRINE)",
                         COOK (12) "TIPPY TAP (BY COOKING AREA)",
                         OTHER (10) "OTHER",
                         NOT_POSSIBLE (99) "OBSERVATION NOT POSSIBLE")
    C705d_oth "Specify other materials used in handwashing:" : STRING [30]
    C705h "@BOBSERVATION:@B
          @/@/WHERE DID THE RESPONDENT GET THE SOAP / SOAPY WATER USED FOR HANDWASHING"
          : TArea
    C705h_oth "Specify other area where respondent got soap / soapy water used for handwashing:" : STRING [30]
    C705i "@BOBSERVATION:@B
          @/@/WHERE DID THE RESPONDENT GET THE WATER USED FOR HANDWASHING?"
          : (LATRINE "Latrine area",
             COOK "Cooking area",
             DISH "Dish washing area",
             OTHER_COMPOUND "Other place within the compound",
             HOUSEHOLD "Within own household",
             OTHER_HOUSEHOLD "Other household in the compound",
             OTHER "Other")
    C705i_oth "Specify other area where respondent got water used for handwashing:" : STRING [30]
    C705e "OBSERVE AND RECORD WHETHER BOTH HANDS WERE CLEANED"
          : (YES "YES, BOTH HANDS CLEANED",
             NO "NO, ONLY ONE HAND CLEANED")
    C705f "OBSERVE AND RECORD HOW RESPONDENT DRIES HANDS"
          : SET [6] OF (CLOTHES "DRIES BY WIPING HER HANDS ON HER CLOTHES",
                        CLOTH "DRIES BY WIPING HER HANDS ON ANOTHER CLOTH",
                        MATERIAL "DRIES BY WIPING HER HANDS ON MATERIAL (NOT CLOTH)",
                        SHAKE "DRIES BY SHAKING HER HANDS IN THE AIR",
                        NOT_DRIED "NOT DRIED",
                        OTHER "OTHER")
    C705f_oth "Specify other way respondent dried her hands:" : STRING [30]
    C705g "Do you have soap in your house that you use for handwashing?
          @/@/Can you bring it to me?"
          "Je, una sabuni ya kunawa mikono ndani ya nyumba yako?
          @/@/Waweza kuniletea?"
          : (YES "Yes, respondent has soap and she can retrieve it",
             NO "No, respondent does not have soap")
    C705g_rec "OBSERVE AND RECORD TIME TO PRODUCE SOAP FOR WASHING HANDS
              @/@/@RMARK “@R@B99:99@B@R” IF OBSERVATION NOT POSSIBLE@R"
              : TStopWatch
    C705j "@BOBSERVATION:@B
          @/@/WHERE DID THE RESPONDENT GET THE SOAP / SOAPY WATER USED FOR HANDWASHING"
          : TArea
    C705j_oth "Specify other area where respondent got soap / soapy water used for handwashing:" : STRING [30]
    C706a "@BOBSERVE:@B
          @/@/WAS THERE ANY OBVIOUS REACTIVITY DURING THE COURSE OF THIS DEMONSTRATION?"
          : TYesNo
    C706aa "Please select your observation:"
           : SET [3] OF (LONG "LONGER TIME SPENT CLEANING / RUBBING HANDS",
                         SOAP "USING SOAP WHERE THEY OTHERWISE WOULD NOT",
                         OTHER "OTHER")
    C706aa_oth "Briefly specify other observation you made:" : STRING [100]}
    TT7700 "Is there a tippy tap?"
           "Je, kuna tippy tap?"
           : TYesNo
    TT7701 "@BOBSERVATION:@B
           WHAT TYPE OF TIPPY TAP(S), AND WHERE LOCATED?"
           : SET [3] OF (LATRINE "NON IPA-PROVIDED SIMPLE TIPPY TAP, BY LATRINE",
                         COOK "NON IPA-PROVIDED SIMPLE TIPPY TAP, BY COOKING AREA",
                         IPA "NON IPA-PROVIDED SIMPLE TIPPY TAP, OTHER LOCATION",
                         IPA1 "NON IPA-PROVIDED SIMPLE TIPPY TAP, OTHER LOCATION",
                         IPA2 "IPA-PROVIDED TIPPY TAP, OTHER LOCATION",
                         IPA3 "IPA-PROVIDED TIPPY TAP, OTHER LOCATION")
    TT7701_oth "Specify other other tippy tap location:" : STRING [30]
    TT7701_oth1 "Specify other other tippy tap location:" : STRING [30]
    TT7701_oth2 "Specify other other IPA provided tippy tap location:" : STRING [30]
    TT7701_oth3 "Specify other other IPA provided tippy tap location:" : STRING [30]

LOCALS
    hw : INTEGER [1]

AUXFIELDS
    aux_hw "@G@BINDICATOR 4:@|HANDWASHING DEMONSTRATION@B@G" : (ENTER), EMPTY
    aux_disc "@R@BPREPARE WATCH FOR TIMING!!
             @/@/**BE DISCRETE!!**@B@R" : (ENTER), EMPTY
    {aux_C704 "@GThank you.
             @/@/Please show me where you most often wash your hands after defecation.@G
             @/@/@R(Note: this may be the same place you already observed. Go to the place identified by the respondent and record location).@R"
             "@GAsante.
             @/@/Tafadhali nionyeshe mahali ambapo wewe huosha mikono mara kwa mara baada ya kwenda haja kubwa.@G
             @/@/@R(Note: this may be the same place you already observed. Go to the place identified by the respondent and record location).@R"
             : (ENTER), EMPTY}
    aux_prep "@R@BPREPARE YOUR WATCH FOR TIMING.@B@R" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_hw NEWPAGE
    AFTER aux_hw NEWPAGE

    AFTER aux_disc NEWPAGE

    BEFORE aux_prep NEWPAGE
    AFTER aux_prep NEWPAGE

    BEFORE TT7700 NEWPAGE
    AFTER TT7701 NEWPAGE
RULES
    aux_hw

    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    IF ((stimestamp = EMPTY) AND (TT7700 = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    aux_disc
    {aux_C704
    C704A
    aux_prep
    C705
    IF (C705 = DEMO) THEN
        C705b
        CHECK
            (LEN (C705b) = 4) "@R@BERROR!@B
                              @/@/Incomplete time entry!
                              @/@/Restrict your input to the format @B(mm:ss) [00-59]:[00-59]@B.
                              @/@/Prefix your input with @B0@B if your recording is only one digit, or @B00@B if no entry.
                              @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (C705b, 1, 2)) < 60) OR (VAL (SUBSTRING (C705b, 1, 2)) = 99)
            "@R@BERROR!@B
            @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
            @/@/It is also neither the acceptable special codes @B00@B or @B99@B!
            @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
            @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (C705b, 3, 4)) < 60) OR (VAL (SUBSTRING (C705b, 3, 4)) = 99)
            "@R@BERROR!@B
            @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
            @/@/It is also neither the acceptable special codes @B00@B or @B99@B!
            @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
            @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (C705b, 1, 2)) < 60) OR (VAL (SUBSTRING (C705b, 3, 4)) > 59)
            "@R@BERROR!@B
            @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
            @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
            @/@/or the @Bcomplete@B special codes @B00:00@B or @B99:99@B.
            @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (C705b, 1, 2)) > 59) OR (VAL (SUBSTRING (C705b, 3, 4)) < 60)
            "@R@BERROR!@B
            @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
            @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
            @/@/or the @Bcomplete@B special codes @B00:00@B or @B99:99@B.
            @/@/Please check your entry and try again.@R"
        IF NOT (C705b = '9999') THEN
            SIGNAL
                (VAL (SUBSTRING (C705b, 1, 2)) < 6) AND (VAL (SUBSTRING (C705b, 1, 2)) <> 5) OR (VAL (SUBSTRING (C705b, 3, 4)) < 01)
                "@G@BALERT!@B
                @/@/Respondent took over @B5 minutes@B to retrieve the handwashing materials!
                @/@/Suppress if entry is correct.@G"
        ENDIF
        C705c
        CHECK
            (LEN (C705c) = 4) "@R@BERROR!@B
                              @/@/Incomplete time entry!
                              @/@/Restrict your input to the format @B(mm:ss) [00-59]:[00-59]@B.
                              @/@/Prefix your input with @B0@B if your recording is only one digit, or @B00@B if no entry.
                              @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (C705c, 1, 2)) < 60) OR (VAL (SUBSTRING (C705c, 1, 2)) = 99)
            "@R@BERROR!@B
            @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
            @/@/It is also neither the acceptable special codes @B00@B or @B99@B!
            @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
            @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (C705c, 3, 4)) < 60) OR (VAL (SUBSTRING (C705c, 3, 4)) = 99)
            "@R@BERROR!@B
            @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
            @/@/It is also neither the acceptable special codes @B00@B or @B99@B!
            @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
            @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (C705c, 1, 2)) < 60) OR (VAL (SUBSTRING (C705c, 3, 4)) > 59)
            "@R@BERROR!@B
            @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
            @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
            @/@/or the @Bcomplete@B special codes @B00:00@B or @B99:99@B.
            @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (C705c, 1, 2)) > 59) OR (VAL (SUBSTRING (C705c, 3, 4)) < 60)
            "@R@BERROR!@B
            @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
            @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
            @/@/or the @Bcomplete@B special codes @B00:00@B or @B99:99@B.
            @/@/Please check your entry and try again.@R"
        IF NOT (C705c = '9999') THEN
            SIGNAL
                (VAL (SUBSTRING (C705c, 1, 2)) < 6) AND (VAL (SUBSTRING (C705c, 1, 2)) <> 5) OR (VAL (SUBSTRING (C705c, 3, 4)) < 01)
                "@G@BALERT!@B
                @/@/Respondent took over @B5 minutes@B washing her hands!
                @/@/Suppress if entry is correct.@G"
        ENDIF
        C705d
        IF (NOT_POSSIBLE IN C705d) THEN
            FOR hw:= 1 TO 11 DO
                IF (C705d [hw] = WATER) OR (C705d [hw] = BODY) OR (C705d [hw] = BAR_OTHER) OR (C705d [hw] = DRY) OR (C705d [hw] = SOAPY)
                OR (C705d [hw] = CLOTH) OR (C705d [hw] = BASIN) OR (C705d [hw] = LATRINE) OR (C705d [hw] = COOK) OR (C705d [hw] = OTHER) THEN
                    ERROR "@R@BERROR!@B
                          @/@/You cannot select @R@BOBSERVATION NOT POSSIBLE@B@R and at the same time select other options!
                          @/@/Please check your entry and try again.@R"
                ENDIF
            ENDDO
        ENDIF
        IF (OTHER IN C705d) THEN
            C705d_oth
        ENDIF
        C705h
        IF (C705h = OTHER) THEN
            C705h_oth
        ENDIF
        C705i
        IF (C705i = OTHER) THEN
            C705i_oth
        ENDIF
        C705e
        C705f
        IF (NOT_DRIED IN C705f) THEN
            FOR hw:= 1 TO 6 DO
                IF (C705f [hw] = CLOTHES) OR (C705f [hw] = CLOTH) OR (C705f [hw] = MATERIAL)
                OR (C705f [hw] = SHAKE) OR (C705f [hw] = OTHER) THEN
                    ERROR "@R@BERROR!@B
                          @/@/You cannot select @R@BNOT DIRED@B@R and at the same time select other options!
                          @/@/Please check your entry and try again.@R"
                ENDIF
            ENDDO
        ENDIF
        IF (OTHER IN C705f) THEN
            C705f_oth
        ENDIF
    ELSE
        C705_no
    ENDIF
    IF (C705 = NO_DEMO) OR NOT ((BODY IN C705d) OR (BAR_OTHER IN C705d) OR (DRY IN C705d)
    OR (SOAPY IN C705d) OR (LATRINE IN C705d) OR (COOK IN C705d)) THEN
        IF (C705 = NO_DEMO) THEN
            C705g
            IF (C705g = YES) THEN
                C705g_rec
                CHECK
                    (LEN (C705g_rec) = 4) "@R@BERROR!@B
                                          @/@/Incomplete time entry!
                                          @/@/Restrict your input to the format @B(mm:ss) [00-59]:[00-59]@B.
                                          @/@/Prefix your input with @B0@B if your recording is only one digit, or @B00@B if no entry.
                                          @/@/Please check your entry and try again.@R"
                CHECK
                    (VAL (SUBSTRING (C705g_rec, 1, 2)) < 60) OR (VAL (SUBSTRING (C705g_rec, 1, 2)) = 99)
                    "@R@BERROR!@B
                    @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
                    @/@/It is also neither the acceptable special code @B99@B!
                    @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
                    @/@/Please check your entry and try again.@R"
                CHECK
                    (VAL (SUBSTRING (C705g_rec, 3, 4)) < 60) OR (VAL (SUBSTRING (C705g_rec, 3, 4)) = 99)
                    "@R@BERROR!@B
                    @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
                    @/@/It is also neither the acceptable special code @B99@B!
                    @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
                    @/@/Please check your entry and try again.@R"
                CHECK
                    (VAL (SUBSTRING (C705g_rec, 1, 2)) < 60) OR (VAL (SUBSTRING (C705g_rec, 3, 4)) > 59)
                    "@R@BERROR!@B
                    @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
                    @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
                    @/@/or the @Bcomplete@B special code @B99:99@B.
                    @/@/Please check your entry and try again.@R"
                CHECK
                    (VAL (SUBSTRING (C705g_rec, 1, 2)) > 59) OR (VAL (SUBSTRING (C705g_rec, 3, 4)) < 60)
                    "@R@BERROR!@B
                    @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
                    @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
                    @/@/or the @Bcomplete@B special code @B99:99@B.
                    @/@/Please check your entry and try again.@R"
                IF NOT (C705g_rec = '9999') THEN
                    SIGNAL
                        (VAL (SUBSTRING (C705g_rec, 1, 2)) < 6) AND (VAL (SUBSTRING (C705g_rec, 1, 2)) <> 5) OR (VAL (SUBSTRING (C705g_rec, 3, 4)) < 01)
                        "@G@BALERT!@B
                        @/@/Respondent took over @B5 minutes@B to retrieve soap used for handwashing!
                        @/@/Suppress if entry is correct.@G"
                ENDIF
                C705j
                IF (C705j = OTHER) THEN
                    C705j_oth
                ENDIF
            ENDIF
        ELSEIF NOT ((BODY IN C705d) OR (BAR_OTHER IN C705d) OR (DRY IN C705d) OR (OTHER IN C705d)) THEN
            C705g
            IF (C705g = YES) THEN
                C705g_rec
                C705j
                IF (C705j = OTHER) THEN
                    C705j_oth
                ENDIF
            ENDIF
        ENDIF
    ENDIF
    IF (C705 = DEMO) THEN
        C706a
    ENDIF
    IF (C706a = YES) THEN
        C706aa
        IF (OTHER IN C706aa) THEN
            C706aa_oth
        ENDIF
    ENDIF}
    TT7700
    IF (TT7700 = YES) THEN
        TT7701
        IF (IPA IN TT7701) THEN
            TT7701_oth
        ENDIF
        IF (IPA1 IN TT7701) THEN
            TT7701_oth1
        ENDIF
        IF (IPA2 IN TT7701) THEN
            TT7701_oth2
        ENDIF
        IF (IPA3 IN TT7701) THEN
            TT7701_oth3
        ENDIF
    ENDIF
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (TT7700 = NO)) OR ((etimestamp = EMPTY) AND (TT7701_oth = RESPONSE)) OR ((etimestamp = EMPTY) AND (TT7701_oth1 = RESPONSE))
    OR ((etimestamp = EMPTY) AND (TT7701_oth2 = RESPONSE)) OR ((etimestamp = EMPTY) AND (TT7701_oth3 = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
