BLOCK modc19

{TYPE}
TYPE
    TFrequency = (RARELY (1) "RARELY (once or twice in the past four weeks)" "MARA CHACHE (mara moja au mbili kwa wiki nne zilizopita)",
                  SOMETIMES (2) "SOMETIMES (three to ten times in the past four weeks)" "WAKATI MWINGINE (mara tatu kuelekea kumi kwa wiki nne zilizopita)",
                  OFTEN (3) "OFTEN (more than ten times in the past four weeks)" "MARA NYINGI (kuzidi mara kumi kwa wiki nne zilizopita)")

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    {C1901 "In the past four weeks, did you worry that your household would not have enough food?"
          "Je, kwa wiki nne zilizopita, ulikuwa na wasiwasi ya kwamba watu wa nyumba yako hawatakuwa na chakula cha kutosha?"
          : TYesNo
    C1901_fr "How frequently did you worry?
             @/@/@RREAD RESPONSES@R"
             "Ulikuwa na wasiwasi mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency
    C1902 "In the past four weeks, were you or any household member not able to eat the kinds of foods you preferred because of a lack of resources?
          @/@/@G@BFor example:@B
          @/@/If you prefer beans and maize (githeri) but had to buy and eat plain maize @BOR@B
          @/@/If had to buy and eat Omena or @IMgongo wazi@I but prefer whole fish@G"
          "Je, kwa wiki nne zilizopita, wewe au mtu yeyote katika nyumba yako hamkuweza kula aina ya vyakula mnavyopendelea kwa sababu ya ukosefu wa rasilmali?
          @/@/@G@BKwa mfano:@B
          @/@/Ikiwa unapendelea mchele ulio mzima lakini ikabidi ununue na kula mchele uliovunjika vunjika
          @/@/Ikiwa ulilazimika kununua na kula Omena au @IMgongo wazi@I lakini ulipendelea samaki mzima@G"
          : TYesNo
    C1902_fr "How frequently did this happen?
             @/@/@RREAD RESPONSES@R"
             "Ilifanyika mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency
    C1903 "In the past four weeks, did you or any household member have to eat a limited variety of foods due to a lack of resources?
          @/@/@G@BFor example:@B
          @/@/Stuck to monotonous diet. E.g ugali and leafy vegetables in most days of the week as opposed to a variety of diets in a week:
          @/@/E.g @UDay 1@U: Ugali, leafy vegetables @UDay 2@U: Sweet potato and tea.
          @/@/@UDay 3@U: Beans and Maize (githeri), and porridge. @UDay 4@U: Ugali and Omena etc@G"
          "Je, kwa wiki nne zilizopita,ilikulazimu wewe au mtu yeyote katika nyumba yako kula aina chache za chakula, kwa sababu ya ukosefu wa rasilmali?
          @/@/@G@BKwa mfano:@B
          @/@/Kuendelea kula aina moja ya chakula. Kwa mfano, ugali na mboga ya matawi siku nyingi katika wiki. Hii in badala ya kula aina ngingi ya chakula katika wiki:
          @/@/Kwa mfano: Siku ya kwanza: Ugali, mboga ya matawi. Siku ya pili: Viazi vitamu na chai. Siku ya tatu: Githeri na uji. Siku ya nne: Ugali na omena na kadhalika.@G"
          : TYesNo
    C1903_fr "How frequently did this happen?
             @/@/@RREAD RESPONSES@R"
             "Ilifanyika mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency
    C1904 "In the past four weeks, did you or any household member have to eat some foods that you really did not want to eat because of a lack of resources to obtain other types of food?
          @/@/@G@BFor example:@B
          @/@/Had to eat beans leaves (did not really want to eat) instead of  sukuma wiki (kales) or kunde.
          @/@/Had to do drink tea made out of scotched sugar to get the colour and taste instead of using tea
          @/@/Ate vegetables or meat that was spoiled because didn't have anything else to eat.@G"
          "Je, kwa wiki nne zilizopita, wewe au mtu yeyote katika nyumba yako mlilazimika kula chakula msichotaka, kwa sababu ya ukosefu wa rasilmali ya kupata aina ya vyakula vingine?
          @/@/@G@BKwa mfano:@B
          @/@/Kulazimika kula matawi ya maharagwe, ambayo haukutaka kula, badala ya sukuma wiki au kunde.
          @/@/Kulazimika kunywa chai iliyotengenezwa kwa sukari uliokarangwa ili kupata rangi na ladha badala ya kutumia majani chai.
          @/@/Kulazimika kula vyakula ambavyo vimekaa kwa muda, kwasabu umekosa vyakula vingine.@G"
          : TYesNo
    C1904_fr "How frequently did this happen?
             @/@/@RREAD RESPONSES@R"
             "Ilifanyika mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency
    C1905 "In the past four weeks, did you or any household member have to eat a smaller meal than you felt you needed because there was not enough food?"
          "Je, kwa wiki nne zilizopita, wewe au mtu yeyote katika nyumba yako alikula mlo kidogo kuliko alivyohisi anahitaji kwa sababu ya ukosefu wa chakula cha kutosha?"
          : TYesNo
    C1905_fr "How frequently did this happen?
             @/@/@RREAD RESPONSES@R"
             "Ilifanyika mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency
    C1906 "In the past four weeks, did you or any household member have to eat fewer meals in a day because there was not enough food?"
          "Je, kwa wiki nne zilizopita, wewe au mtu yeyote kutoka kwa nyumba yako alikula chakula mara chache kwa siku kwa sababu ya ukosefu wa chakula?"
          : TYesNo
    C1906_fr "How frequently did this happen?
             @/@/@RREAD RESPONSES@R"
             "Ilifanyika mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency}
    C1907 "In the past four weeks, was there ever no food to eat of any kind in your household because of lack of resources to get food?"
          "Je, kwa wiki nne zilizopita, kuna siku ambayo kulikosekana kabisa aina yoyote ya chakula katika nyumba yako kwa sababu ya ukosefu wa mapato ya kupata chakula?"
          : TYesNo
    C1907_fr "How frequently did this happen?
             @/@/@RREAD RESPONSES@R"
             "Ilifanyika mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency
    C1908 "In the past four weeks, did you or any household member go to sleep at night hungry because there was not enough food?"
          "Je, kwa wiki nne zilizopita, wewe au mtu yeyote kutoka kwa nyumba yako, alilala njaa kwa sababu  ya ukosefu wa chakula cha kutosha?"
          : TYesNo
    C1908_fr "How frequently did this happen?
             @/@/@RREAD RESPONSES@R"
             "Ilifanyika mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency
    C1909 "In the past four weeks, did you or any household member go a whole day and night without eating anything because there was not enough food?"
          "Je, kwa wiki nne zilizopita, wewe au mtu yeyote kutoka kwa nyumba yako, alishinda mchana wote na kulala njaa kwa sababu ya ukosefu wa chakula cha kutosha?"
          : TYesNo
    C1909_fr "How frequently did this happen?
             @/@/@RREAD RESPONSES@R"
             "Ilifanyika mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency
    C1910 "In the past four weeks, did you or any household member have to borrow flour because you did not have enough flour?"
          "Je, kwa wiki nne zilizopita, ilikulazimu wewe au mtu yeyote kutoka kwa nyumba yako, kuomba unga wa ugali kwa sababu hamkukuwa na unga wa kutosha?"
          : TYesNo
    C1910_fr "How frequently did this happen?
             @/@/@RREAD RESPONSES@R"
             "Ilifanyika mara ngapi?
             @/@/@RREAD RESPONSES@R"
             : TFrequency
    C1911 "Compared to other times, does your household face food deficiency during drought?
          @/@/@RREAD RESPONSES@R"
          "Ukilinganisha na nyakati zingine, je, nyumba yako hukumbwa na upungufu wa chakula wakati wa ukame / kiangazi?
          @/@/@RREAD RESPONSES@R"
          : SET [3] OF (DIFFERENCE "NO DIFFERENCE" "HAKUNA TOFAUTI",
                        QUALITY "REDUCED QUALITY" "UZURI ILIYOPUNGUKA",
                        QUANTITY "REDUCED QUANTITY" "KIASI KILICHOPUNGUKA")
    {C1912 "What would you think is the status of your household in terms of food availability?
          @/@/@RREAD RESPONSES@R"
          "Unafikiri hali ya nyumba yako upande wa upatikanaji wa vyakula ni ipi?
          @/@/@RREAD RESPONSES@R"
          : (ALWAYS "ALWAYS DEFICIT" "UPUNGUFU WA WAKATI WOTE",
             SOMETIMES "DEFICIT SOMETIMES" "UPUNGUFU WA WAKATI MWINGINE",
             ADEQUATE "ADEQUATE (NEITHER DEFICIT NOR SURPLUS)" "KIWANGO CHA KUTOSHA (SIO KINGI WALA KIDOGO)",
             SURPLUS "FOOD SURPLUS" "CHAKULA CHA ZIADA")}
LOCALS
    c19 : INTEGER [1]
AUXFIELDS
    aux_c19 "@G@B19@|HOUSEHOLD FOOD INSECURITY AND ACCESS SCALE@B@G" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_c19 NEWPAGE
    AFTER aux_c19 NEWPAGE
RULES
    aux_c19

    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}

    {C1901}
    IF ((stimestamp = EMPTY) AND (C1907 = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    {IF (C1901 = YES) THEN
        C1901_fr
    ENDIF
    C1902
    IF (C1902 = YES) THEN
        C1902_fr
    ENDIF
    C1903
    IF (C1903 = YES) THEN
        C1903_fr
    ENDIF
    C1904
    IF (C1904 = YES) THEN
        C1904_fr
    ENDIF
    C1905
    IF (C1905 = YES) THEN
        C1905_fr
    ENDIF
    C1906
    IF (C1906 = YES) THEN
        C1906_fr
    ENDIF}
    C1907
    IF (C1907 = YES) THEN
        C1907_fr
    ENDIF
    C1908
    IF (C1908 = YES) THEN
        C1908_fr
    ENDIF
    C1909
    IF (C1909 = YES) THEN
        C1909_fr
    ENDIF
    C1910
    IF (C1910 = YES) THEN
        C1910_fr
    ENDIF
    C1911
    IF (DIFFERENCE IN C1911) THEN
        FOR c19:= 1 TO 3 DO
            IF (C1911 [c19] = QUALITY) OR (C1911 [c19] = QUANTITY) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BNO DIFFERENCE@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ENDIF
    {C1912}
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (C1911 = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF ((etimestamp <> EMPTY) AND (edatestamp = EMPTY)) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
