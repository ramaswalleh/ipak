BLOCK modc7

TYPE
    TCodes = (VISIBLE (1) "VISIBLE DIRT (DIRT / MUD / SOIL / ASH OR ANY OTHER MATERIAL IS VISIBLE)",
              UNCLEAN (2) "UNCLEAN APPEARANCE (NO DIRT IS VISIBLE ON THIS PART OF THE HAND BUT, IN GENERAL, THIS PART OF THE HAND APPEARS UNCLEAN)",
              CLEAN_HAND (3) "CLEAN (OBSERVED PART OF THE HAND IS CLEAN AS WOULD APPEAR AFTER SOMEONE WASHES HANDS OR TAKES A BATH)",
              NA (88) "N/A; OBSERVATION NOT POSSIBLE / NO CHILD 0 - 36 MONTHS AVAILABLE")

    TPlace = (MAIN_HOUSE (1) "IN / NEAR MAIN HOUSE (< 2 M TO ENTRANCE)",
              LATRINE (2) "IN / NEAR LATRINE (< 2 M TO ENTRANCE)",
              COOKING_AREA (3) "IN / NEAR COOKING AREA (< 2 M TO ENTRANCE)",
              AWAY (4) "> 2 M AWAY FROM MAIN HOUSE, LATRINE AND COOKING AREA",
              NO_PLACE (5) "NO SPECIFIC PLACE, MULTIPLE PLACES USED")

    TDevice = (TIPPY_TAP (1) "TIPPY TAP",
               BASIN (2) "BASIN / PITCHER",
               OTHER (3) "OTHER",
               NO_DEVICE (4) "NO SPECIFIC DEVICE")

    TMaterial = (WATER "WATER",
                 SCENTED "SCENTED BAR SOAP",
                 UNSCENTED "UNSCENTED BAR SOAP",
                 POWDERED "POWDERED SOAP",
                 SOAPY "SOAPY WATER",
                 NONE "NONE",
                 OTHER (77) "OTHER")

    TC707B = (ALWAYS (1) "ALWAYS" "KILA MARA",
              SOMETIMES (2) "SOMETIMES" "WAKATI MWINGINE",
              RARELY (3) "RARELY" "SIO RAHISI")

    TC707C = (ALWAYS (1) "ALWAYS" "KILA MARA",
              SOMETIMES (2) "SOMETIMES" "WAKATI MWINGINE",
              RARELY (3) "RARELY" "SIO RAHISI",
              NO (4) "NEVER" "SIJAWAHI")

    T707 = (FOOD "Before preparing food" "Kabla ya kutayarisha chakula",
            EAT "Before eating" "Kabla ya kula",
            AFTER_EAT "After eating" "Baada ya kula",
            FEED "Before feeding a child" "Kabla ya kulisha mtoto",
            CLEANING "After cleaning a child's anus" "Baada ya kumsafisha mtoto akienda haja",
            DISPOSE "After disposing of children's feaces" "Baada ya kutupa kinyesi cha mtoto",
            DEFECATE "After toileting / defecation" "Baada ya kwenda haja kubwa",
            RETURN "After returning from outside the compound" "Baada ya kurudi nyumbani kutoka nje ya boma",
            TOUCH "After touching a sick person" "Baada ya kumshika mgonjwa",
            LIVESTOCK "After handling livestock" "Baada ya kushughulikia mifugo",
            DUNG "After handling cow-dung (or any animal feces)" "Baada ya kushika kinyesi cha ng'ombe (au vinyesi vya wanyama wengine)",
            GREET "After greeting a lot of people (i.e. at church or a funeral)" "Baada ya kusalimiana na watu wengi (kama kanisani au matangani)",
            WAKE "After waking up in the morning" "Asubuhi baada ya kuamka",
            WORK "After working in the shamba" "Baada ya kufanya kazi shambani",
            OTHER "Other",
            NEVER "Respondent never washes hands with soap")

{INCLUDE}
    INCLUDE "inc\BlkC7.inc"

BLOCK BlkMoth
FIELDS
    C701_A "@ULEFT HAND@U: FINGERNAILS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU HER FINGERNAILS@R"
           : TCodes, RF
    C701_B "@ULEFT HAND@U: PALMS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU HER PALMS@R"
           : TCodes, RF
    C701_C "@ULEFT HAND@U: FINGER PADS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU HER FINGER PADS@R"
           : TCodes, RF
    C701_D "@URIGHT HAND@U: FINGERNAILS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU HER FINGERNAILS@R"
           : TCodes, RF
    C701_E "@URIGHT HAND@U: PALMS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU HER PALMS@R"
           : TCodes, RF
    C701_F "@URIGHT HAND@U: FINGER PADS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU HER FINGER PADS@R"
           : TCodes, RF
AUXFIELDS
    aux_left "@G@BMOTHER'S LEFT HAND@B@G" : (ENTER), EMPTY
    aux_right "@G@BMOTHER'S RIGHT HAND@B@G" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_left NEWPAGE
    BEFORE aux_right NEWPAGE
RULES
    aux_left
    C701_A
    C701_B
    C701_C
    aux_right
    C701_D
    C701_E
    C701_F
ENDBLOCK

BLOCK BlkChild
FIELDS
    C701_A "@ULEFT HAND@U: FINGERNAILS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU THE CHILD'S FINGERNAILS@R"
           : TCodes, RF
    C701_B "@ULEFT HAND@U: PALMS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU THE CHILD'S PALMS@R"
           : TCodes, RF
    C701_C "@ULEFT HAND@U: FINGER PADS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU THE CHILD'S FINGER PADS@R"
           : TCodes, RF
    C701_D "@URIGHT HAND@U: FINGERNAILS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU THE CHILD'S FINGERNAILS@R"
           : TCodes, RF
    C701_E "@URIGHT HAND@U: PALMS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU THE CHILD'S PALMS@R"
           : TCodes, RF
    C701_F "@URIGHT HAND@U: FINGER PADS
           @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU THE CHILD'S FINGER PADS@R"
           : TCodes, RF
AUXFIELDS
    aux_left "@G@BCHILD'S LEFT HAND@B@G" : (ENTER), EMPTY
    aux_right "@G@BCHILD'S RIGHT HAND@B@G" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_left NEWPAGE
    BEFORE aux_right NEWPAGE
RULES
    aux_left
    C701_A
    C701_B
    C701_C
    aux_right
    C701_D
    C701_E
    C701_F
ENDBLOCK

{C702 TABLE}
TABLE TblC702
FIELDS
    BC702 : BlkC702
RULES
    BC702
ENDTABLE

{C703 TABLE}
TABLE TblC703
FIELDS
    BC703 : BlkC703
RULES
    BC703
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    HW700a "@BOBSERVE:@B
           @/@/RECORD WHAT THE RESPONDENT WAS DOING WHEN YOU ARRIVED."
           : (SHAMBA "RESPONDENT IN THE SHAMBA / GARDEN",
              DISH "RESPONDENT WASHING DISHES / CLOTHES / ETC",
              SIT "RESPONDENT SITTING IN THEIR COMPOUND (INSIDE OR OUTSIDE THEIR HOUSEHOLD)",
              ANOTHER "RESPONDENT IN ANOTHER COMPOUND",
              OTHER "OTHER")
    HW700a_oth "Specify other:" : STRING [30]
    C700_wash "@BOBSERVE:@B
              @/@/RECORD WHETHER YOU OBSERVED THE RESPONDENT WASHING HER HANDS AT ANY TIME @UBEFORE@U THIS QUESTION."
              : (WITHOUT "OBSERVED RESPONDENT WASHING HANDS WITHOUT SOAP",
                 WITH_SOAP "OBSERVED RESPONDENT WASHING HANDS WITH SOAP",
                 NO_OBSERVATION "DID NOT OBSERVE RESPONDENT WASHING HANDS")
    C701A "Thank you.
          @/@/Now I would like to do a quick inspection of your hands. I hope you don't mind.
          @/@/Can you please show me your hands?
          @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU HER HANDS@R"
          "Asante.
          @/@/Sasa ningependa kufanya ukaguzi wa haraka wa mikono yako. Natumaini ni sawa.
          @/@/Tafadhali unaweza nionyesha mikono yako?
          @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU HER HANDS@R"
          : (AGREE), RF
    C701B "Thank you.
          @/@/Now I would like to do a quick inspection of the hands of @B^b.TB10.BB10 [young].B10_fname@B, the youngest non-study child 0 - 36 months in the household. I hope you don't mind.
          @/@/Please show me his / her hands.
          @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU @R@B^b.TB10.BB10 [young].B10_fname@B@R'S HANDS
          @/@/IF THERE IS NO CHILD 0 - 36 MONTHS, FILL WITH @R@B“88”@B"
          "Asante.
          @/@/Sasa ningependa kufanya ukaguzi wa haraka wa mikono ya mtoto wako @B^b.TB10.BB10 [young].B10_fname@B aliye na miezi 0 - 36. Natumaini ni sawa.
          @/@/Tafadhali unaweza kunionyesha mikono ya @B^b.TB10.BB10 [young].B10_fname@B?
          @/@/@RYOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO SHOW YOU @R@B^b.TB10.BB10 [young].B10_fname@B@R'S HANDS
          @/@/IF THERE IS NO CHILD 0 - 36 MONTHS, FILL WITH @R@B“88”@B"
          : (AGREE), RF
    BMoth : BlkMoth
    BChild : BlkChild
    TC702 : TblC702
    TC703 : TblC703
    C703_oth "Do you have another place where you wash your hands?"
             "Una sehemu nyingine ambapo wewe huosha mikino yako?"
             : TYesNo
    C707_soap "Please tell me about all of the times you wash your hands with soap.
              @/@/@RDO NOT READ RESPONSES.
              @/CHECK EACH CRITICAL TIME THE RESPONDENT MENTIONS.@R"
              "Tafadhali nieleze kuhusu nyakati zote wewe huosha mikono yako kwa sabuni?
              @/@/@RDO NOT READ RESPONSES.
              @/CHECK EACH CRITICAL TIME THE RESPONDENT MENTIONS.@R"
              : SET [15] OF T707
    C707_other "Specify other times mentioned without prompting:" : STRING [244]
    C707B_food "How often do you wash your hands with soap and water @Bbefore preparing food@B?
               @/@/@RREAD RESPONSES@R"
               "Ni mara ngapi wewe huosha mikono kwa maji ya sabuni @Bkabla ya kutayarisha chakula@B?
               @/@/@RREAD RESPONSES@R"
               : TC707B
    C707C_food "Do you usually wash your hands with soap and water @Bbefore preparing food?@B
               @/@/@RREAD RESPONSES@R"
               "Kwa kawaida, wewe huosha mikono ukitumia sabuni na maji @Bkabla ya kutayarisha chakula@B?
               @/@/@RREAD RESPONSES@R"
               : TC707C
    C707B_eat "How often do you wash your hands with soap and water @Bbefore eating@B?
              @/@/@RREAD RESPONSES@R"
              "Ni mara ngapi wewe huosha mikono kwa maji ya sabuni @Bkabla ya kula@B?
              @/@/@RREAD RESPONSES@R"
              : TC707B
    C707C_eat "Do you usually wash your hands with soap and water @Bbefore eating@B?
              @/@/@RREAD RESPONSES@R"
              "Kwa kawaida, wewe huosha mikono ukitumia sabuni na maji @Bkabla ya kula@B?
              @/@/@RREAD RESPONSES@R"
              : TC707C
    C707B_after "How often do you wash your hands with soap and water @Bafter eating@B?
                @/@/@RREAD RESPONSES@R"
                "Ni mara ngapi wewe huosha mikono kwa maji ya sabuni @Bbaada ya kula@B?
                @/@/@RREAD RESPONSES@R"
                : TC707B
    C707C_after "Do you usually wash your hands with soap and water @Bafter eating@B?
                @/@/@RREAD RESPONSES@R"
                "Kwa kawaida, wewe huosha mikono ukitumia sabuni na maji @Bbaada ya kula@B?
                @/@/@RREAD RESPONSES@R"
                : TC707C
    C707B_feed "How often do you wash your hands with soap and water @Bbefore feeding a child@B?
               @/@/@RREAD RESPONSES@R"
               "Ni mara ngapi wewe huosha mikono kwa maji ya sabuni @Bkabla ya kulisha mtoto@B?
               @/@/@RREAD RESPONSES@R"
               : TC707B
    C707C_feed "Do you usually wash your hands with soap and water @Bbefore feeding a child@B?
               @/@/@RREAD RESPONSES@R"
               "Kwa kawaida, wewe huosha mikono ukitumia sabuni na maji @Bkabla ya kulisha mtoto@B?
               @/@/@RREAD RESPONSES@R"
               : (ALWAYS (1) "ALWAYS" "KILA MARA",
                  SOMETIMES (2) "SOMETIMES" "WAKATI MWINGINE",
                  RARELY (3) "RARELY" "SIO RAHISI",
                  NO (4) "NEVER" "SIJAWAHI",
                  NA (88) "Not Applicable")
    C707B_clean "How often do you wash your hands with soap and water @Bafter cleaning a child's anus@B?
                @/@/@RREAD RESPONSES@R"
                "Ni mara ngapi wewe huosha mikono kwa maji ya sabuni @Bbaada ya kusafisha njia ya mtoto ya haja kubwa@B?
                @/@/@RREAD RESPONSES@R"
                 : TC707B
    C707C_clean "Do you usually wash your hands with soap and water @Bafter cleaning a child’s anus@B?
                @/@/@RREAD RESPONSES@R"
                "Kwa kawaida, wewe huosha mikono ukitumia sabuni na maji @Bbaada ya kusafisha njia ya mtoto ya haja kubwa@B?
                @/@/@RREAD RESPONSES@R"
                : (ALWAYS (1) "ALWAYS" "KILA MARA",
                  SOMETIMES (2) "SOMETIMES" "WAKATI MWINGINE",
                  RARELY (3) "RARELY" "SIO RAHISI",
                  NO (4) "NEVER" "SIJAWAHI",
                  NA (88) "Not Applicable")
    C707B_disp "How often do you wash your hands with soap and water @Bafter disposing of child's feces@B?
               @/@/@RREAD RESPONSES@R"
               "Ni mara ngapi wewe huosha mikono kwa maji ya sabuni @Bbaada ya kutupa kinyesi cha mtoto@B?
               @/@/@RREAD RESPONSES@R"
               : TC707B
    C707C_disp "Do you usually wash your hands with soap and water @Bafter disposing of child's feces@B?
               @/@/@RREAD RESPONSES@R"
               "Kwa kawaida, wewe huosha mikono ukitumia sabuni na maji @Bbaada ya kutupa kinyesi cha mtoto@B?
               @/@/@RREAD RESPONSES@R"
               : (ALWAYS (1) "ALWAYS" "KILA MARA",
                  SOMETIMES (2) "SOMETIMES" "WAKATI MWINGINE",
                  RARELY (3) "RARELY" "SIO RAHISI",
                  NO (4) "NEVER" "SIJAWAHI",
                  NA (88) "Not Applicable")
    C707B_defe "How often do you wash your hands with soap and water @Bafter toileting / defecating@B?
               @/@/@RREAD RESPONSES@R"
               "Ni mara ngapi wewe huosha mikono kwa maji ya sabuni @Bbaada ya kwenda haja kubwa@B?
               @/@/@RREAD RESPONSES@R"
               : TC707B
    C707C_defe "Do you usually wash your hands with soap and water @Bafter toileting / defecating@B?
               @/@/@RREAD RESPONSES@R"
               "Kwa kawaida, wewe huosha mikono ukitumia sabuni an maji @Bbaada ya kwenda haja kubwa@B?
               @/@/@RREAD RESPONSES@R"
               : TC707C
    C711_spend "About how much money do you spend on soap (for all purposes) every week?
               @/@/@RPROBE CAREFULLY.
               @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MUCH MONEY SHE SPENDS ON SOAP FOR ALL PURPOSES EVERY WEEK
               @/@/YOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO DISCLOSE HOW MUCH MONEY SHE SPENDS ON SOAP FOR ALL PURPOSES EVERY WEEK@R"
               "Ni kiasi gani cha pesa wewe hutumia kwa kununua sabuni (ya kazi zote) kila wiki?
               @/@/@RPROBE CAREFULLY.
               @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MUCH MONEY SHE SPENDS ON SOAP FOR ALL PURPOSES EVERY WEEK
               @/@/YOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO DISCLOSE HOW MUCH MONEY SHE SPENDS ON SOAP FOR ALL PURPOSES EVERY WEEK@R"
               : 0..997, DK, RF
    C714_soap "Some people think soap is too expensive to use for handwashing purposes, and some people think it's worth spending the money.
              @/@/What do you think?
              @/@/@RREAD RESPONSES.@R"
              "Watu wengine hufikiria kuwa sabuni ni ya bei ya juu sana ikitumiwa kuoshea mikono, na watu wengine hufikiria kuwa ni bora kutumia hiyo pesa.
              @/@/Wewe unafikiria nini?
              @/@/@RREAD RESPONSES.@R"
              : (DEFINITELY "DEFINITELY TOO EXPENSIVE" "HAKIKA NI BEI YA JUU SANA",
                 MAYBE "MAYBE TOO EXPENSIVE" "PENGINE NI BEI YA JUU SANA",
                 NOT_TOO "NOT TOO EXPENSIVE" "SI BEI YA JUU SANA",
                 DEFINITELY_NOT "DEFINITELY NOT TOO EXPENSIVE" "BILA SHAKA SIO BEI YA JUU SANA")
    C715_soap "Some people think lack of soap near the toilet is one of the reasons people don't wash their hands with soap after defecation.
              @/@/Do you agree?
              @/@/@RREAD RESPONSES.@R"
              "Watu wengine hufikiria kuwa ukosefu wa sabuni karibu na choo ni mojawapo ya sababu za watu kutoosha mikono yao kwa kutumia sabuni baada ya kwenda haja kubwa.
              @/@/Unakubali?
              @/@/@RREAD RESPONSES.@R"
              : (DEFINITELY "DEFINITELY AGREE" "KWA HAKIKA NAKUBALI",
                 SOMEWHAT "SOMEWHAT AGREE" "KWA KIASI FULANI NAKUBALI",
                 DONT "DON'T AGREE OR DISAGREE" "SIKUBALI WALA SIKATAI",
                 DONT_REALLY "DON'T REALLY AGREE" "SIKUBALI KABISA",
                 DEFINITELY_DONT "DEFINITELY DON'T AGREE" "SIKUBALI KAMWE")

LOCALS
    c7 : INTEGER
AUXFIELDS
    aux_c7 "@G@BC7.@|@UHANDWASHING BEHAVIOR MEASURES (All households)@U@B@G" : (ENTER), EMPTY
    aux_ind1 "@G@BINDICATOR 1:@B@|THREE-POINT HAND INSPECTION@B@G" : (ENTER), EMPTY
    aux_ind2 "@G@BINDICATOR 2:@B@|SOAP AND WATER AT HANDWASHING PLACE@B@G" : (ENTER), EMPTY
    aux_C702 "Thank you.
             @/@/Can you please show me the place where you @Umost often@U wash your hands?"
             "Asante.
             @/@/Tafadhali nionyeshe mahali wewe huosha mikono yako @Umara kwa mara@U?"
             : (ENTER), EMPTY
    aux_scale "@G@BSELF-REPORTED HANDWASHING SCALES@B@G" : (ENTER), EMPTY

LAYOUT
    BEFORE aux_c7 NEWPAGE
    AFTER aux_c7 NEWPAGE

    AFTER aux_ind1 NEWPAGE

    BEFORE C701A NEWPAGE
    AFTER C701A NEWPAGE

    BEFORE C701B NEWPAGE
    AFTER C701B NEWPAGE

    BEFORE aux_ind2 NEWPAGE
    AFTER aux_ind2 NEWPAGE

    BEFORE aux_scale NEWPAGE
    AFTER aux_scale NEWPAGE

    BEFORE C711_spend NEWPAGE
RULES
    aux_c7
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
    aux_ind1
    HW700a
    IF (HW700a = OTHER) THEN
        HW700a_oth
    ENDIF
    C700_wash
    C701A
    IF (C701A = AGREE) THEN
        BMoth
    ENDIF
    IF ((c1.C102_status = BORN) AND (a.Thh [1].BA01.A5_0t3 > 1)) OR ((c1.C102_status = UNBORN) AND (a.Thh [1].BA01.A5_0t3 > 0)) THEN
        C701B
        IF (C701B = AGREE) THEN
            BChild
        ENDIF
    ENDIF
    aux_ind2
    aux_C702
    TC702
    C703_oth
    IF (C703_oth = YES) THEN
        TC703
    ENDIF
    aux_scale
    C707_soap
    IF (NEVER IN C707_soap) THEN
        FOR c7:= 1 TO 15 DO
            IF (C707_soap [c7] = FOOD) OR (C707_soap [c7] = EAT) OR (C707_soap [c7] = AFTER_EAT) OR (C707_soap [c7] = FEED)
            OR (C707_soap [c7] = CLEANING) OR (C707_soap [c7] = DISPOSE) OR (C707_soap [c7] = DEFECATE) OR (C707_soap [c7] = RETURN)
            OR (C707_soap [c7] = TOUCH) OR (C707_soap [c7] = LIVESTOCK) OR (C707_soap [c7] = DUNG) OR (C707_soap [c7] = GREET)
            OR (C707_soap [c7] = WAKE) OR (C707_soap [c7] = WORK) OR (C707_soap [c7] = OTHER) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BRespondent never washes hands with soap@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ENDIF
    IF (OTHER IN C707_soap) THEN
        C707_other
    ENDIF
    {COLUMN B}
    IF (FOOD IN C707_soap) THEN
        C707B_food
    ENDIF
    IF (EAT IN C707_soap) THEN
        C707B_eat
    ENDIF
    IF (AFTER_EAT IN C707_soap) THEN
        C707B_after
    ENDIF
    IF (FEED IN C707_soap) THEN
        C707B_feed
    ENDIF
    IF (CLEANING IN C707_soap) THEN
        C707B_clean
    ENDIF
    IF (DISPOSE IN C707_soap) THEN
        C707B_disp
    ENDIF
    IF (DEFECATE IN C707_soap) THEN
        C707B_defe
    ENDIF
    {COLUMN C}
    IF NOT (FOOD IN C707_soap) THEN
        C707C_food
    ENDIF
    IF NOT (EAT IN C707_soap) THEN
        C707C_eat
    ENDIF
    IF NOT (AFTER_EAT IN C707_soap) THEN
        C707C_after
    ENDIF
    IF NOT (FEED IN C707_soap) THEN
        C707C_feed
    ENDIF
    IF NOT (CLEANING IN C707_soap) THEN
        C707C_clean
    ENDIF
    IF NOT (DISPOSE IN C707_soap) THEN
        C707C_disp
    ENDIF
    IF NOT (DEFECATE IN C707_soap) THEN
        C707C_defe
    ENDIF
    C711_spend
    SIGNAL
        (C711_spend < 99) "@G@BALERT!@B
                          @/@/Are you sure the respondent spends more than @B100 shillings@B on soap per week?@G"
    C714_soap
    C715_soap
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF (etimestamp = EMPTY) AND (C715_soap = RESPONSE) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
