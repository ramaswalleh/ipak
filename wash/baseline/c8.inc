BLOCK modc8

TYPE
    TPractice = (DAILY,
                 OCCASIONALLY,
                 NEVER,
                 NA (88) "NOT APPLICABLE (NO CHILD IN AGE GROUP)")

    TReason = (CHOICE (1) "No choice (nothing else available)",
               CONTROL (2) "Cannot control where young children defecate",
               HABIT (4) "Habit / routine",
               PREFER (5) "Prefer to use bush rather than toilet",
               SHARE (7) "Do not share toilets with in-laws",
               CONVENIENCE (8) "Convenience",
               SICKNESS (11) "Sickness - diarrhea",
               FULL (12) "Latrine full",
               BROKEN (13) "Latrine broken (walls and / or floor)",
               FEAR (14) "Fear of latrine",
               USE (15) "Don't know how to use the latrine",
               YOUNG (16) "Too young to use latrine",
               OTHER_1 (17) "Other 1",
               OTHER_2 (18) "Other 2")

    TWhere = (TOILET "In the toilet / latrine",
              BUCKET "In a bucket or other improvised container within the compound",
              POTTY "Child potty within compound",
              COMPOUND "Open defecation – within compound",
              BUSH "Open defecation – in the bush / forest / field",
              NAPPY "Nappy / diaper",
              OTHER (77) "Other",
              NA (88) "Not Applicable")

    TDone = (LEFT "Left there",
             TOILET "Put / rinsed into toilet or latrine",
             DRAIN "Put / rinsed into drain or ditch",
             BUSH "Thrown into the bush / forest / field",
             GARBAGE "Thrown into garbage",
             PIT "Thrown into a specific pit for child's feces",
             BURIED "Buried",
             OTHER (77) "Other")

    TOther = (OFTEN "Yes, often",
              SOMETIMES "Yes, sometimes",
              NEVER "No, never")

    TOften = (ALWAYS "ALWAYS" "KILA MARA",
              USUALLY "USUALLY" "KWA KAWAIDA",
              SOMETIMES "SOMETIMES" "WAKATI MWINGINE",
              NEVER "NEVER" "HAJAWAHI",
              NA (88) "NOT APPLICABLE")

    TDispose = (LATRINE "Latrine",
                PIT "Open pit",
                BUSH "Bush / shamba",
                HOLE "Dig hole and cover")

    {INCLUDE}
    INCLUDE "inc\BlkS83.inc"

{CHILDREN 0 - 36 MONTHS}
BLOCK BlkC8A
FIELDS
    C801A "Do @Bchildren 0 - 36 months@B in this household ever practice open defecation?
          @/@/@RREAD RESPONSES.
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF CHILDREN < 3 YEARS EVER PRACTICE OPEN DEFECATION@R"
          "Je @Bwatoto walio na miezi 0 - 36@B katika nyumba hii huenda haja kubwa mahali pa wazi?
          @/@/@RREAD RESPONSES.
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF CHILDREN < 3 YEARS EVER PRACTICE OPEN DEFECATION@R"
          : TPractice, DK
    C802A "Do @Bchildren 0 - 36 months@B go to more or less the same area everytime?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF CHILDREN < 3 YEARS GO TO MORE OR LESS THE SAME AREA@R"
          "Je @Bwatoto walio na miezi 0 - 36@B huenda sehemu ile ile moja kila mara?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF CHILDREN < 3 YEARS GO TO MORE OR LESS THE SAME AREA@R"
          : TYesNo, DK
    C803A "How long does it take to walk @B(one way)@B from your house to the most commonly visited place?
          @/@/@RDURATION IN MINUTES
          @/@/MARK “@R@B00@B@R” IF NEXT TO MAIN HOUSE
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE HOW LONG IT TAKES TO WALK TO THE MOST COMMONLY VISITED PLACE@R"
          "Itakuchukua muda gani kutembea @B(njia moja)@B kutoka kwa nyumba yako hadi mahali panapo tembelewa sana?
          @/@/@RDURATION IN MINUTES
          @/@/MARK “@R@B00@B@R” IF NEXT TO MAIN HOUSE
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE HOW LONG IT TAKES TO WALK TO THE MOST COMMONLY VISITED PLACE@R"
          : 0..97, DK
    C804A "Is this place within the compound?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF THIS PLACE IS WITHIN THE VILLAGE@R"
          "Mahali hapa pamo bomani?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF THIS PLACE IS WITHIN THE VILLAGE@R"
          : TYesNo, DK
    C804aA "What are the main reasons that @Bchildren 0 - 36 months@B in your household practice open defecation?
           @/@/@RDO NOT READ RESPONSES.@R"
           "Ni sababu zipi kuu ambazo hufanya @Bwatoto walio na miezi 0 - 36@B katika nyumba yako kwenda haja kubwa mahali pa wazi?
           @/@/@RDO NOT READ RESPONSES.@R"
           : SET [14] OF TReason
    C804aA_13 "Specify other reason why children practice open defecation:" : STRING [100]
    C804aA_14 "Specify other reason why children practice open defecation:" : STRING [100]
    C804bA "The last time someone @Bchildren 0 - 36 months@B was sick with diarrhea, where did they defecate?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHERE CHILD DEFECATED@R"
           "Mara ya mwisho @Bwatoto walio na miezi 0 - 36@B kuugua maradhi ya kuhara, walienda haja kubwa wapi?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHERE CHILD DEFECATED@R"
           : TWhere, DK
    C804bA_oth "Specify other place where child defecated:" : STRING [100]
    C804cA "What was done with the feces?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
           "Ni nini kilifanyiwa kinyesi hicho?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
           : TDone, DK
    C804cA_oth "Specify what other action was done:" : STRING [100]
    C804dA "How long after defecation did somebody dispose of the feces?
           @/@/@RYOU CAN SELECT HOURS, MINUTES OR BOTH@R"
           "Ilichukua muda gani baada ya kwenda haja kabla ya mtu kutupa kinyesi hicho?
           @/@/@RYOU CAN SELECT HOURS, MINUTES OR BOTH@R"
           : SET [2] OF (HOURS,
                         MINUTES)
    C804dA_hr "Hours:" : 0..96
    C804dA_min "Minutes:" : 0..60
    C804eA "Do you know of other households in the community whose @Bchildren 0 - 36 months@B practice open defecation, even if they might have a toilet or latrine at their house?
           @/@/@RIF YES, PROBE TO DETERMINE FREQUENCY.
           @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF OTHER HOUSEHOLDS IN THE COMPOUND PRACTICE OPEN DEFECATION@R"
           "Unafahamu nyumba zingine katika kijiji ambapo @Bwatoto walio na miezi 0 - 36@B huenda haja mahali ambapo si choo (kwa mfano, kwa kiwanja, kwa msitu/kichaka, kwa njia / barabarani n.k) hata ikiwa wana choo katika boma lao?
           @/@/@RIF YES, PROBE TO DETERMINE FREQUENCY.
           @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF OTHER HOUSEHOLDS IN THE COMPOUND PRACTICE OPEN DEFECATION@R"
           : TOther, DK
AUXFIELDS
    aux_lt3 "@G@BCHILDREN 0 - 36 MONTHS@B@G" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_lt3 NEWPAGE
RULES
    aux_lt3
    C801A
    IF (C801A = DAILY) OR (C801A = OCCASIONALLY) THEN
        C802A
        C803A
        C804A
        SIGNAL
            ((C803A < 11) OR (C804A = NO)) "@G@BALERT!@B
                                           @/@/Since the child takes more than @B10 minutes@B to walk to the defecation area, is this place really within the compound?@G"
        C804aA
        IF (OTHER_1 IN C804aA) THEN
	       C804aA_13
        ENDIF
        IF (OTHER_2 IN C804aA) THEN
    	   C804aA_14
        ENDIF
        C804bA
        IF NOT ((C804bA = TOILET) OR (C804bA = BUSH) OR (C804bA = NA) OR (C804bA = DK)) THEN
            IF (C804bA = OTHER) THEN
    	       C804bA_oth
            ENDIF
            C804cA
            IF NOT (C804cA = LEFT) THEN
                IF (C804cA = OTHER) THEN
    	           C804cA_oth
                ENDIF
                C804dA
                IF (HOURS IN C804dA) THEN
                    C804dA_hr
                ENDIF
                IF (MINUTES IN C804dA) THEN
                    C804dA_min
                ENDIF
            ENDIF
        ENDIF
        C804eA
    ELSEIF (C801A = NEVER) OR (C801A = DK) THEN
        C804bA
        IF NOT ((C804bA = TOILET) OR (C804bA = BUSH) OR (C804bA = NA) OR (C804bA = DK)) THEN
            IF (C804bA = OTHER) THEN
    	       C804bA_oth
            ENDIF
            C804cA
            IF NOT (C804cA = LEFT) THEN
                IF (C804cA = OTHER) THEN
    	           C804cA_oth
                ENDIF
                C804dA
                IF (HOURS IN C804dA) THEN
                    C804dA_hr
                ENDIF
                IF (MINUTES IN C804dA) THEN
                    C804dA_min
                ENDIF
            ENDIF
        ENDIF
        C804eA
    ELSEIF (C801A = NA) THEN
        C804eA
    ENDIF
ENDBLOCK

{CHILDREN 3 - 7 YEARS}
BLOCK BlkC8B
FIELDS
    C801B "Do @Bchildren 3 - 7 years@B in this household ever practice open defecation?
          @/@/@RREAD RESPONSES.
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF CHILDREN 3 - 7 YEARS EVER PRACTICE OPEN DEFECATION@R"
          "Je @Bwatoto walio na miaka 3 - 7@B katika nyumba hii huenda haja kubwa mahali pa wazi?
          @/@/@RREAD RESPONSES.
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF CHILDREN 3 - 7 YEARS EVER PRACTICE OPEN DEFECATION@R"
          : TPractice, DK
    C802B "Do @Bchildren 3 - 7 years@B go to more or less the same area everytime?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF CHILDREN 3 - 7 YEARS GO TO MORE OR LESS THE SAME AREA@R"
          "Je @Bwatoto walio na miaka 3 - 7@B huenda sehemu ile ile moja kila mara?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF CHILDREN 3 - 7 YEARS GO TO MORE OR LESS THE SAME AREA@R"
          : TYesNo, DK
    C803B "How long does it take to walk @B(one way)@B from your house to the most commonly visited place?
          @/@/@RDURATION IN MINUTES
          @/@/MARK “@R@B00@B@R” IF NEXT TO MAIN HOUSE
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE HOW LONG IT TAKES TO WALK TO THE MOST COMMONLY VISITED PLACE@R"
          "Itakuchukua muda gani kutembea @B(njia moja)@B kutoka kwa nyumba yako hadi mahali panapo tembelewa sana?
          @/@/@RDURATION IN MINUTES
          @/@/MARK “@R@B00@B@R” IF NEXT TO MAIN HOUSE
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE HOW LONG IT TAKES TO WALK TO THE MOST COMMONLY VISITED PLACE@R"
          : INTEGER [2], DK
    C804B "Is this place within the compound?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF THIS PLACE IS WITHIN THE VILLAGE@R"
          "Mahali hapa pamo bomani?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF THIS PLACE IS WITHIN THE VILLAGE@R"
          : TYesNo, DK
    C804aB "What are the main reasons that @Bchildren 3 - 7 years@B in your household practice open defecation?
           @/@/@RDO NOT READ RESPONSES.@R"
           "Ni sababu zipi kuu ambazo hufanya @Bwatoto walio na miaka 3 - 7@B katika nyumba yako kwenda haja kubwa mahali pa wazi?
           @/@/@RDO NOT READ RESPONSES.@R"
           : SET [14] OF TReason
    C804aB_13 "Specify other reason why children practice open defecation:" : STRING [100]
    C804aB_14 "Specify other reason why children practice open defecation:" : STRING [100]
    C804bB "The last time someone @Bchildren 3 - 7 years@B was sick with diarrhea, where did they defecate?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHERE CHILD DEFECATED@R"
           "Mara ya mwisho @Bwatoto walio na miaka 3 - 7@B kuugua maradhi ya kuhara, walienda haja kubwa wapi?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHERE CHILD DEFECATED@R"
           : TWhere, DK
    C804bB_oth "Specify other place where child defecated:" : STRING [100]
    C804cB "What was done with the feces?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
           "Ni nini kilifanyiwa kinyesi hicho?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
           : TDone, DK
    C804cB_oth "Specify what other action was done:" : STRING [100]
    C804dB "How long after defecation did somebody dispose of the feces?
           @/@/@RYOU CAN SELECT HOURS, MINUTES OR BOTH@R"
           "Ilichukua muda gani baada ya kwenda haja kabla ya mtu kutupa kinyesi hicho?
           @/@/@RYOU CAN SELECT HOURS, MINUTES OR BOTH@R"
           : SET [2] OF (HOURS,
                         MINUTES)
    C804dB_hr "Hours:" : 0..96
    C804dB_min "Minutes:" : 0..60
    C804eB "Do you know of other households in the community whose @Bchildren 3 - 7 years@B practice open defecation, even if they might have a toilet or latrine at their house?
           @/@/@RIF YES, PROBE TO DETERMINE FREQUENCY.
           @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF OTHER HOUSEHOLDS IN THE COMPOUND PRACTICE OPEN DEFECATION@R"
           "Unafahamu nyumba zingine katika kijiji ambapo @Bwatoto walio na miaka 3 - 7@B huenda haja mahali ambapo si choo (kwa mfano, kwa kiwanja, kwa msitu/kichaka, kwa njia / barabarani n.k) hata ikiwa wana choo katika boma lao?
           @/@/@RIF YES, PROBE TO DETERMINE FREQUENCY.
           @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF OTHER HOUSEHOLDS IN THE COMPOUND PRACTICE OPEN DEFECATION@R"
           : TOther, DK
AUXFIELDS
    aux_3t7 "@G@BCHILDREN 3 - 7 YEARS@B@G" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_3t7 NEWPAGE
RULES
    aux_3t7
    C801B
    IF (C801B = DAILY) OR (C801B = OCCASIONALLY) THEN
        C802B
        C803B
        C804B
        SIGNAL
            ((C803B < 11) OR (C804B = NO)) "@G@BALERT!@B
                                           @/@/Since the child takes more than @B10 minutes@B to walk to the defecation area, is this place really within the compound?@G"
        C804aB
        IF (OTHER_1 IN C804aB) THEN
	       C804aB_13
        ENDIF
        IF (OTHER_2 IN C804aB) THEN
    	   C804aB_14
        ENDIF
        C804bB
        IF NOT ((C804bB = TOILET) OR (C804bB = BUSH) OR (C804bB = NA) OR (C804bB = DK)) THEN
            IF (C804bB = OTHER) THEN
    	       C804bB_oth
            ENDIF
            C804cB
            IF NOT (C804cB = LEFT) THEN
                IF (C804cB = OTHER) THEN
    	           C804cB_oth
                ENDIF
                C804dB
                IF (HOURS IN C804dB) THEN
                    C804dB_hr
                ENDIF
                IF (MINUTES IN C804dB) THEN
                    C804dB_min
                ENDIF
            ENDIF
        ENDIF
        C804eB
    ELSEIF (C801B = NEVER) OR (C801B = DK) THEN
        C804bB
        IF NOT ((C804bB = TOILET) OR (C804bB = BUSH) OR (C804bB = NA) OR (C804bB = DK)) THEN
            IF (C804bB = OTHER) THEN
    	       C804bB_oth
            ENDIF
            C804cB
            IF NOT (C804cB = LEFT) THEN
                IF (C804cB = OTHER) THEN
    	           C804cB_oth
                ENDIF
                C804dB
                IF (HOURS IN C804dB) THEN
                    C804dB_hr
                ENDIF
                IF (MINUTES IN C804dB) THEN
                    C804dB_min
                ENDIF
            ENDIF
        ENDIF
        C804eB
    ELSEIF (C801B = NA) THEN
        C804eB
    ENDIF
ENDBLOCK

{BLOCK INDIVIDULAS > 7 YEARS}
BLOCK BlkC8C
FIELDS
    C804bC "The last time @Bindividuals older than 7 years@B was sick with diarrhea, where did they defecate?"
           "Mara ya mwisho @Bmtu aliye na miaka juu ya 7@B kuugua maradhi ya kuhara, walienda haja kubwa wapi?"
           : (TOILET "In the toilet / latrine",
              BUCKET "In a bucket or other improvised container within the compound",
              POTTY "Child potty within compound",
              COMPOUND "Open defecation – within compound",
              BUSH "Open defecation – in the bush / forest / field",
              NAPPY "Nappy / diaper",
              OTHER (77) "Other"), DK
    C804bC_oth "Specify other place where @Bindividuals older than 7 years@B defecated:" : STRING [100]
    C804cC "What was done with the feces?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
           "Ni nini kilifanyiwa kinyesi hicho?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
           : TDone, DK
    C804cC_oth "Specify what other action was done:" : STRING [100]
    C804dC "How long after defecation did somebody dispose of the feces?
           @/@/@RYOU CAN SELECT HOURS, MINUTES OR BOTH@R"
           "Ilichukua muda gani baada ya kwenda haja kabla ya mtu kutupa kinyesi hicho?
           @/@/@RYOU CAN SELECT HOURS, MINUTES OR BOTH@R"
           : SET [2] OF (HOURS,
                         MINUTES)
    C804dC_hr "Hours:" : 0..96
    C804dC_min "Minutes:" : 0..60
    C804eC "Do you know of other households in the community where @Bindividuals older than 7 years@B practice open defecation, even if they might have a toilet or latrine at their house?
           @/@/@RIF YES, PROBE TO DETERMINE FREQUENCY.
           @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF OTHER HOUSEHOLDS IN THE COMPOUND PRACTICE OPEN DEFECATION@R"
           "Unafahamu nyumba zingine katika kijiji ambapo @Bwatu walio na miaka juu ya 7@B huenda haja mahali ambapo si choo (kwa mfano, kwa kiwanja, kwa msitu/kichaka, kwa njia / barabarani n.k) hata ikiwa wana choo katika boma lao?
           @/@/@RIF YES, PROBE TO DETERMINE FREQUENCY.
           @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF OTHER HOUSEHOLDS IN THE COMPOUND PRACTICE OPEN DEFECATION@R"
           : TOther, DK
AUXFIELDS
    aux_gt7 "@G@BINDIVIDUALS > 7 YEARS@B@G" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_gt7 NEWPAGE
RULES
    aux_gt7
    C804bC
    IF NOT ((C804bC = TOILET) OR (C804bC = BUSH) OR (C804bC = DK)) THEN
        IF (C804bC = OTHER) THEN
            C804bC_oth
        ENDIF
        C804cC
        IF NOT (C804cC = LEFT) THEN
            IF (C804cC = OTHER) THEN
                C804cC_oth
            ENDIF
            C804dC
            IF (HOURS IN C804dC) THEN
                C804dC_hr
            ENDIF
            IF (MINUTES IN C804dC) THEN
                C804dC_min
            ENDIF
        ENDIF
    ENDIF
    C804eC
ENDBLOCK

{TOILET USE QUESTIONS BLOCK}
BLOCK BlkC809
FIELDS
    C809A "Please tell me how often @Bchildren younger than 3 years@B in your household uses the toilet for defecation.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          "Tafadhali niambie ni mara ngapi @Bwatoto walio chini ya miaka 3@B kwa nyumba yako hutumia choo kwenda haja kubwa.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          : TOften
    C809B "Please tell me how often @Bchildren 3 - 7 years@B in your household uses the toilet for defecation.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          "Tafadhali niambie ni mara ngapi @Bwatoto walio na miaka 3 - 7@B kwa nyumba yako hutumia choo kwenda haja kubwa.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          : TOften
    C809C "Please tell me how often @Bchildren 8 - 15 years@B in your household uses the toilet for defecation.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          "Tafadhali niambie ni mara ngapi @Bwatoto walio na miaka 8 - 15@B kwa nyumba yako hutumia choo kwenda haja kubwa.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          : TOften
    C809D "Please tell me how often @Bmen@B in your household uses the toilet for defecation.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          "Tafadhali niambie ni mara ngapi @Bwanaume@B kwa nyumba yako hutumia choo kwenda haja kubwa.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          : TOften
    C809E "Please tell me how often @Bwomen@B in your household uses the toilet for defecation.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          "Tafadhali niambie ni mara ngapi @Bwanawake@B kwa nyumba yako hutumia choo kwenda haja kubwa.
          @/@/@RREAD RESPONSES
          @/@/IF MULTIPLE CHILDREN FROM HOUSEHOLD ARE IN SAME AGE GROUP AND DO DIFFERENT BEHAVIORS, RECORD THE LOWEST COMMON DENOMINATOR FOR THE BEHAVIOR IN THAT CATEGORY.
          @/@/E.G, IF 3 YEAR OLD ALWAYS USES TOILET BUT 7 YEAR OLD SOMETIMES USES TOILET, SELECT '@R@BSOMETIMES@B@R'.@R"
          : TOften
RULES
    C809A
    C809B
    C809C
    C809D
    C809E
ENDBLOCK

{C817 BLOCK}
BLOCK BlkC817
FIELDS
    C817_1 "LESS THAN 1 YEAR" : TYesNo
    C817_2 "1 TO LESS THAN 3 YEARS" : TYesNo
    C817_3 "3 TO LESS THAN 5 YEARS" : TYesNo
    C817_4 "5 OR MORE YEARS" : TYesNo
LAYOUT
    AFTER C817_4 NEWPAGE
RULES
    C817_1
    C817_2
    C817_3
    C817_4
ENDBLOCK

{C819 BLOCK}
BLOCK BlkC819
FIELDS
    C819_1 "EASILY ACCESSIBLE WHEN NEEDED BY CHILD" : TYesNo
    C819_2 "EASILY ACCESSIBLE WHEN NEEDED BY MOTHER" : TYesNo
    C819_3 "VISIBLE SIGNS OF FECES INSIDE / ON POTTY" : TYesNo
    C819_4 "POTTY WAS COVERED WITH THE LID" : TYesNo
    C819_5 "POTTY WAS COVERED WITH ANYTHING OTHER THAN THE LID" : TYesNo
    C819_5A "POTTY MISSING LID" : TYesNo
    C819_6 "DRY" : TYesNo
    C819_7 "BROKEN SO THAT UNUSABLE" : TYesNo
    C819_7a "Describe the damaged condition:" : STRING [100]
    C819_8 "COVERED IN DUST / SIGNS OF NON-USE" : TYesNo
AUXFIELDS
    aux_cond "@G@BOBSERVATION:@B
             @/@/POTTY CONDITION@G" : (ENTER), EMPTY
LAYOUT
    AFTER C819_8 NEWPAGE
RULES
    C819_1
    C819_2
    aux_cond
    C819_3
    C819_4
    C819_5
    C819_5A
    C819_6
    C819_7
    IF (C819_7 = YES) THEN
        C819_7a
    ENDIF
    C819_8
ENDBLOCK

{BLOCK C825}
BLOCK BlkC825
FIELDS
    C825_A1 "Do you use @B^locC821a@B to pick up @Bchild feces@B?"
            "Wewe hutumia @B^locC821a@B kuokota @Bvinyesi vya mtoto@B?"
            : TYesNo
    C825_A2 "Do you use @B^locC821a@B to pick up @Bcow feces@B?"
            "Wewe hutumia @B^locC821a@B kuokota @Bvinyesi vya ng'ombe@B?"
            : TYesNo
    C825_A3 "Do you use @B^locC821a@B to pick up @Bpoultry / pigeon feces@B?"
            "Wewe hutumia @B^locC821a@B kuokota @Bvinyesi vya kuku / ndege@B?"
            : TYesNo
    C825_A4 "Do you use @B^locC821a@B to pick up @Bgoat feces@B?"
            "Wewe hutumia @B^locC821a@B kuokota @Bvinyesi vya mbuzi@B?"
            : TYesNo
    C825_A5 "Do you use @B^locC821a@B to pick up @Bpig feces@B?"
            "Wewe hutumia @B^locC821a@B kuokota @Bvinyesi vya nguruwe@B?"
            : TYesNo
    C825_A6 "Do you use @B^locC821a@B to pick up @Bdog or cat feces@B?"
            "Wewe hutumia @B^locC821a@B kuokota @Bvinyesi vya mbwa au paka@B?"
            : TYesNo
    C825_A7 "Do you use @B^locC821a@B to pick up @Bsheep feces@B?"
            "Wewe hutumia @B^locC821a@B kuokota @Bvinyesi vya kondoo@B?"
            : TYesNo

LAYOUT
    AFTER C825_A6 NEWPAGE
RULES
    IF (CHILD IN C823) THEN
        C825_A1:= YES
        C825_A1.SHOW
    ELSE
        C825_A1
    ENDIF
    C825_A2
    C825_A3
    C825_A4
    IF NOT ((b.B15_reli = MUSLIM) OR (b.B16_reli = MUSLIM)) THEN
        C825_A5
    ENDIF
    C825_A6
    C825_A7
ENDBLOCK

{TOILET USE QUESTIONS TABLE}
TABLE TblC809
FIELDS
    BC809 : BlkC809
RULES
    BC809
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE

    BC8A : BlkC8A
    BC8B : BlkC8B
    BC8C : BlkC8C
    C804f "Have you observed  that children's stools are disposed in the yard / surrounding / community in your neighborhood / river?
          @/@/@RIF YES, PROBE TO DETERMINE FREQUENCY.
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF SHE SEES CHILDREN'S STOOLS ARE DISPOSED IN THE YARD / SURROUNDING / COMMUNITY IN YOUR NEIGHBORHOOD / RIVER@R"
          "Je, wewe huwa unaona vinyesi vya watoto vikitupwa kwenye kiwanja humu bomani / kwenye mazingara ya karibu / kwenye majirani / kwenye mto?
          @/@/@RIF YES, PROBE TO DETERMINE FREQUENCY.
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF SHE SEES CHILDREN'S STOOLS ARE DISPOSED IN THE YARD / SURROUNDING / COMMUNITY IN YOUR NEIGHBORHOOD / RIVER@R"
          : TOther, DK
    C805 "Does your household have access to a toilet facility?"
         "Je kuna choo kina chotumika na watu wa nyumba yako?"
         : (YES "Yes have access to a toilet",
            NO "No access to a toilet facility")
    TC809 : TblC809
    C810 "Do you share this toilet with other households?"
         "Je mwatumia hii choo na nyumba zingine?"
         : TYesNo
    C811 "How many other households use this toilet?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY OTHER HOUSEHOLDS USE THIS TOILET@R"
         "Ni nyumba ngapi zingine zinazotumia hii choo?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY OTHER HOUSEHOLDS USE THIS TOILET@R"
         : 0..97, DK
    C812 "How many people (including children) use this toilet regularly (every day)?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY PEOPLE (INCLUDING CHILDREN) USE THIS TOILET REGULARLY@R"
         "Ni watu wangapi (wakiwemo watoto) hutumia hii choo kila mara (kila siku)?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY PEOPLE (INCLUDING CHILDREN) USE THIS TOILET REGULARLY@R"
         : 0..97, DK
    C813 "Who owns the toilet?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHO OWNS THE TOILET@R"
         "Ni nani mwenye choo hii?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHO OWNS THE TOILET@R"
         : (ONLY "Household only",
            SHARED "Household shared",
            INSIDE "Someone else who lives in compound",
            OUTSIDE "Someone else who lives outside of compound",
            PUBLIC "Public"), DK
    C814 "How long has the present toilet been in this place?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW LONG THE PRESENT TOILET HAS BEEN IN PLACE@R"
         "Ni kwa muda upi choo hii imekuwa mahali hapa?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW LONG THE PRESENT TOILET HAS BEEN IN PLACE@R"
         : SET [2] OF (YEARS "Years",
                       MONTHS "Months"), DK
    C814_yea "Years:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY YEARS THE PRESENT TOILET HAS BEEN IN PLACE@R"
             : 0..40, DK
    C814_mon "Months:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY MONTHS THE PRESENT TOILET HAS BEEN IN PLACE@R"
             : 0..12, DK
    {S804b "When they're at home, do people (including children) in your household ever use a facility @Uoutside your compound (not your latrine)@U to defecate?"
          "Watu wa nyumba yako wakiwa nyumbani, je, wao hutumia kituo chochote @Ukilichoko nje ya boma lako (siyo choo chako)@U kwa haja kubwa?"
          : TYesNo
    S804c "Which type(s) of facilities do they use?"
          "Ni aina ipi / zipi za vituo wanavyotumia?"
          : SET [4] OF (NEIGHBOR "Neighbor's latrine",
                       CHURCH "Public latrine - church / mosque",
                       SCHOOL "Public latrine - school",
                       OTHER "Other latrine")
    S804c_oth "Specify other public latrine:" : STRING [30]
    S804d "How comfortable are people in your household using these facilities?
          @/@/@RREAD RESPONSES
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW COMFORTABLE PEOPLE IN HER HOUSEHOLD ARE USING THESE FACILITIES@R"
          "Watu katika nyumba yako wameridhishwa vipi kwa kutumia vituo hivi?
          @/@/@RREAD RESPONSES
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW COMFORTABLE PEOPLE IN HER HOUSEHOLD ARE USING THESE FACILITIES@R"
          : (VERY "VERY COMFORTABLE" "WAMERIDHIKA SANA",
             SOMEWHAT "SOMEWHAT COMFORTABLE" "WAMERIDHIKA KIASI",
             NOT_VERY "NOT VERY COMFORTABLE" "HAWAJARIDHIKA",
             NOT_AT_ALL "NOT AT ALL COMFORTABLE" "HAWAJARIDHIKA HATA KIDOGO"), DK}
    C815 "Does @Uyour household@U have a potty?
         @/@/@REVEN IF POTTY DOES NOT BELONG TO RESPONDENT / RESPONDENT'S CHILD
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF HER HOUSEHOLD HAS A POTTY@R"
         "@UNyumba yako@U ina poti ya watoto?
         @/@/@REVEN IF POTTY DOES NOT BELONG TO RESPONDENT / RESPONDENT'S CHILD
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF HER HOUSEHOLD HAS A POTTY@R"
         : TYesNo, DK
    C816 "In the last week, how often did your child (or children) use the potty?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW OFTEN THEIR CHILD USED THE POTTY IN THE PAST WEEK@R"
         "Katika wiki iliyopita, mtoto/watoto wako walitumia poti kwa kiwango kipi?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW OFTEN THEIR CHILD USED THE POTTY IN THE PAST WEEK@R"
         : (EVERY "Every time of defecation",
            MORE "More than half of all defecation events, but not every time",
            LESS "Less than half of all defecation events, but often",
            RARELY "Rarely (defined by a few occasions)",
            USED "Used to use it, but no longer use",
            NEVER "Never"), DK
    BC817 : BlkC817
    C818 "Could you please retrieve the potty? Could I please see the potty?
         @/@/@BOBSERVATION:@B
         @/@/@RRECORD HOW LONG IT TAKES TO PRODUCE THE POTTY (mm:ss)
         @/@/IF TOO CLOSE TO MEASURE: RECORD “@R@B00:00@B@R”
         @/@/IF NO POTTY AVAILABLE: RECORD “@R@B77:77@B@R”
         @/@/IF CANNOT MEASURE: RECORD “@R@B99:99@B@R”@R"
         "Ninaweza kuiona hiyo poti, unaweza kuniletea
         @/@/@BOBSERVATION:@B
         @/@/@RRECORD HOW LONG IT TAKES TO PRODUCE THE POTTY (mm:ss)
         @/@/IF TOO CLOSE TO MEASURE: RECORD “@R@B00:00@B@R”
         @/@/IF NO POTTY AVAILABLE: RECORD “@R@B77:77@B@R”
         @/@/IF CANNOT MEASURE: RECORD “@R@B99:99@B@R”@R"
         : TStopWatch
    BC819 : BlkC819
    C819A "How many children use this potty?"
          "Ni watoto wangapi hutumia poti hii?"
          : 0..98
    C820 "Where do you usually dispose of feces from the potty?
         @/@/@RDO NOT READ RESPONSES.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHERE SHE DISPOSES FECES FROM THE POTTY@R"
         "Kwa kawaida ni wapi wewe hutupa kinyesi kutoka kwenye poti?
         @/@/@RDO NOT READ RESPONSES.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHERE SHE DISPOSES FECES FROM THE POTTY@R"
         : (LATRINE "Latrine",
            PIT "Open pit / separate pit for child or animal feces",
            BURY "Bury it / covered pit",
            UNDEFINED "Undefined open site near compound (including open garbage disposal sites / dumps)",
            BUSH "Bush / forest / field / shamba",
            NEARBY "Nearby water",
            OTHER (77) "Other"), DK
    C820_oth "Specify other disposal location:" : STRING [30]
    C821 "Does your household have a @Udedicated tool@U to clean up feces around your household?
         @/@/@RPROBE IF NECESSARY
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF HER HOUSEHOLD HAS A DEDICATED TOOL FOR CLEANING UP FECES AROUND THE HOUSEHOLD@R"
         "Familia yako ina kifaa @Ucha kipekee@U ambacho huondoa kinyesi katika boma lako mara kwa mara?
         @/@/@RPROBE IF NECESSARY
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF HER HOUSEHOLD HAS A DEDICATED TOOL FOR CLEANING UP FECES AROUND THE HOUSEHOLD@R"
         : TYesNo, DK
    C821a "What kind of tool do you @Uprimarily use@U to clean up feces?
          @/@/@RDO NOT READ RESPONSES.@R"
          "Ni kifaa kipi @Ucha kimsingi@U unachotumia kuondoa kinyesi?
          @/@/@RDO NOT READ RESPONSES.@R"
          : (JEMBE "Jembe",
             SPADE "Spade",
             KIPUPUU "Kipupuu",
             OTHER (77) "Other",
             NO_TOOL (88) "No tool used to clean up feces")
    C821a_oth "Specify other tool used:" : STRING [30]
    C822 "How often do you use the @B^locC821a@B to clean up feces?
         @/@/@RDO NOT READ RESPONSES.@R"
         "Mara ngapi wewe hutumia @B^locC821a@B kuondoa kinyesi?
         @/@/@RDO NOT READ RESPONSES.@R"
         : (MULTIPLE "Multiple times per day",
            ONCE "Once per day",
            FEW "A few times each week",
            LESS "Less than once per week",
            UESED "Used to use it, but no longer ",
            NEVER "Never")
    C823 "What do you use the @B^locC821a@B for?
         @/@/@RPROBE UNTIL RESPONDENT IS FINISHED
         @/@/@BDO NOT READ RESPONSES@B@R"
         "Wewe hutumia @B^locC821a@B hiki kufanyia nini?
         @/@/@RPROBE UNTIL RESPONDENT IS FINISHED
         @/@/@BDO NOT READ RESPONSES@B@R"
         : SET [6] OF (ANIMAL "Clean up animal feces",
                       CHILD "Clean up child feces",
                       GARBAGE "Clean up garbage",
                       FIELD "Take the scoop to the field (for work)",
                       DIG "Digging / gardening",
                       OTHER (77) "Other")
    C823_oth "Specify other use for tool:" : STRING [30]
    C824_6 "CANNOT PRODUCE TOOL" : TYesNo
    C824_1 "VISIBLE SIGNS OF FECES ON TOOL" : TYesNo
    C824_2 "DRY" : TYesNo
    C824_3 "BROKEN AND NEEDS REPAIR" : TYesNo
    C824_4A "EASILY ACCESSIBLE BY CHILD " : TYesNo
    C824_4 "EASILY ACCESSIBLE BY ADULT" : TYesNo
    C824_5 "SIGNS THAT TOOL IS NOT USED" : TYesNo
    BC825 : BlkC825
    C825_1 "Where do you dispose of the @Bchild feces@B?"
           "Wewe hutupa wapi @Bvinyesi vya mtoto@B?"
           : SET [4] OF TDispose
    C825_2 "Where do you dispose of the @Bcow feces@B?"
           "Wewe hutupa wapi @Bvinyesi vya ng'ombe@B?"
           : SET [4] OF TDispose
    C825_3 "Where do you dispose of the @Bpoultry / pigeon feces@B?"
           "Wewe hutupa wapi @Bvinyesi vya kuku / ndege@B?"
           : SET [4] OF TDispose
    C825_4 "Where do you dispose of the @Bgoat feces@B?"
           "Wewe hutupa wapi @Bvinyesi vya mbuzi@B?"
           : SET [4] OF TDispose
    C825_5 "Where do you dispose of the @Bpig feces@B?"
           "Wewe hutupa wapi @Bvinyesi vya nguruwe@B?"
           : SET [4] OF TDispose
    C825_6 "Where do you dispose of the @Bdog or cat feces@B?"
           "Wewe hutupa wapi @Bvinyesi vya mbwa au paka@B?"
           : SET [4] OF TDispose
    C825_7 "Where do you dispose of the @Bsheep feces@B?"
           "Wewe hutupa wapi @Bvinyesi vya kondoo@B?"
           : SET [4] OF TDispose
    BS83 : BlkS83

LOCALS
    locC821a : STRING [30]
    c8 : INTEGER
AUXFIELDS
    aux_c8 "@G@BC8.@|@USANITATION@U@B@G" : (ENTER), EMPTY
    aux_say "@GThank you so much for your participation so far.
            @/@/The next part of the survey is a bit sensitive.
            @/@/I would like to ask you some questions about the sanitation practices of people in your compound, including how you usually dispose of your children's feces.
            @/@/I would also like to make some observations.@G"
            "@GShukrani sana kwa kushiriki kwako hadi sasa.
            @/@/Sehemu inayofuatia ni nyeti (@G@Isensitive@I@G) kidogo.
            @/@/Ningependa kukuuliza maswali mengine kuhusu shughuli za usafi wa watu katika boma lako, pamoja na jinsi wewe hutupa choo cha watoto wako.
            @/@/Ningependa pia kuangalia mambo kadhaa.@G"
            : (ENTER), EMPTY
    aux_BlkC8A "@GOPEN DEFECATION@G" : (ENTER), EMPTY
    aux_C809 "@G@BTOILET USE QUESTIONS@B@G" : (ENTER), EMPTY
    aux_read "@GNow, I would like to ask you some questions about the toilet that you use most often.@G"
             "@GSasa, ningependa kukuuliza maswali kuhusu choo unachokitumia kwa mara nyingi.@G"
             : (ENTER), EMPTY
    aux_potty "@GCHILD POTTY USE@G" : (ENTER), EMPTY
    aux_C817 "What are the ages of the child or children using the potty in this household?
             @/@/@RENTER YES OR KNOW FOR EACH AGE GROUP@R"
             "Mtoto au watoto wanaotumia poti katika nyumba hii ni wa umri gani?
             @/@/@RENTER YES OR KNOW FOR EACH AGE GROUP@R"
             : (ENTER), EMPTY
    aux_C818 "@R@BPREPARE STOP WATCH FOR TIMING@B
             @/@/**BE DISCRETE**@R
             @/@/@G@BINSTRUCTIONS:@B
             @/@/@RASK RESPONDENT TO TAKE YOU TO WHERE CHILD MOST COMMONLY USES THE POTTY.@R"
             : (ENTER), EMPTY
    aux_C819 "@G@BOBSERVATION:@B
             @/@/WAS THE POTTY IN A PLACE THAT WAS EASILY ACCESSIBLE?@G
             @/@/@R@BNOTE:@B
             @/@/“EASILY ACCESSIBLE” FOR THE CHILD MEANS THAT THE CHILD COULD RETRIEVE THE POTTY WITHOUT ADULT / CAREGIVER ASSISTANCE;
             @/“EASILY ACCESSIBLE” FOR THE MOTHER / CAREGIVER MEANS THAT IT CAN BE RETRIEVED QUICKLY WITHOUT EXTENSIVE RUMMAGING OR SEARCHING IN THE COMPOUND OR HOUSEHOLD.@R"
             : (ENTER), EMPTY
    aux_C821 "@GSANI-SCOOPER USE@G" : (ENTER), EMPTY
    aux_C824 "@GCould I please see the @B^locC821a@B?@G
             @/@/@BOBSERVATION:@B
             @/@/JEMBE / SPADE / KIPUPU / OTHER TOOL CONDITION"
             "@GTafadhali naweza kukiona @B^locC821a@B hicho?@G
             @/@/@BOBSERVATION:@B
             @/@/JEMBE / SPADE / KIPUPU / OTHER TOOL CONDITION"
             : (ENTER), EMPTY
    aux_S83 "@GDETERMINANTS OF SANITATION@G" : (ENTER), EMPTY
    aux_C825 "@GI'd like to ask a few more questions about the types of feces you usually pick up with the @B^locC821a@B and how you dispose of the different types of feces.@G"
             "@GNingependa kukuuliza maswali mengine kadha kuhusu aina ya vinyesi unavyookota ukitumia @B^locC821a@B na jinsi unavyotupa vinyesi hivyo.@G"
             : (ENTER), EMPTY
    {PROCEDURE AUXFIELDS}
    aux_C8_say : INTEGER [1]

LAYOUT
    BEFORE aux_c8 NEWPAGE
    AFTER aux_c8 NEWPAGE

    BEFORE aux_BlkC8A NEWPAGE

    BEFORE C805 NEWPAGE

    BEFORE aux_C809 NEWPAGE

    BEFORE aux_read NEWPAGE

    BEFORE aux_potty NEWPAGE

    BEFORE aux_C817 NEWPAGE

    BEFORE aux_C818 NEWPAGE

    BEFORE aux_C819 NEWPAGE

    BEFORE aux_C821 NEWPAGE

    BEFORE aux_C824 NEWPAGE
    AFTER aux_C824 NEWPAGE

    BEFORE aux_S83 NEWPAGE
RULES
    aux_c8

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
    aux_C8_say.KEEP
    aux_say
    aux_BlkC8A
    BC8A
    BC8B
    BC8C
    C804f
    C805
    IF (C805 = YES) THEN
        aux_C809
        aux_read
        TC809
        C810
        IF (C810 = YES) THEN
            C811
            SIGNAL
                (C811 < 11) "@G@BALERT!@B
                            @/@/The number of other households that also use this toilet is greater than @B10@B, is this really accurate?@G"
        ENDIF
        C812
        SIGNAL
            (C812 <> DK) OR (C811 < 1) OR (C812 <> 0) "@G@BWARNING!@B
                                                      @/@/The number households that use this toilet facility entered as @G@B^C811@B@G will definitely require the number of people using this toilet to be greater than @Bzero@B@G"
        SIGNAL
            (C812 < 26) "@G@BALERT!@B
                        @/@/The number of people (including children) that use this toilet is greater than @B25@B, is this really accurate?@G"
        C813
        C814
        IF NOT (C814 = DK) THEN
            IF (YEARS IN C814) THEN
                C814_yea
            ENDIF
            IF (MONTHS IN C814) THEN
                C814_mon
            ENDIF
        ENDIF
    ENDIF
    {S804b
    IF (S804b = YES) THEN
        S804c
        IF (OTHER IN S804c) THEN
            S804c_oth
        ENDIF
        S804d
    ENDIF}
    aux_potty
    C815
    IF (C815 = YES) THEN
        {APPLY IF CONSTRUCT HERE IF CHILD HAS BEEN BORN OR NOT}
        {APPLY IF CONSTRUCT HERE IF OTHER CHILDREN EXIST}
        C816
        IF (C816 = EVERY) OR (C816 = MORE) OR (C816 = LESS) OR (C816 = RARELY) THEN
            {APPLY IF CONSTRUCT HERE DEPENDING ON MODULE A}
            aux_C817
            BC817
            aux_C818
            C818
            CHECK
                (LEN (C818) = 4) "@R@BERROR!@B
                                 @/@/Incomplete time entry!
                                 @/@/Restrict your input to the format @B(mm:ss) [00-59]:[00-59]@B.
                                 @/@/Prefix your input with @B0@B if your recording is only one digit, or @B00@B if no entry.
                                 @/@/Please check your entry and try again.@R"
            CHECK
                (VAL (SUBSTRING (C818, 1, 2)) < 60) OR (VAL (SUBSTRING (C818, 1, 2)) = 77) OR (VAL (SUBSTRING (C818, 1, 2)) = 99)
                "@R@BERROR!@B
                @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
                @/@/It is also neither the acceptable special codes @B77@B or @B99@B!
                @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
                @/@/Please check your entry and try again.@R"
            CHECK
                (VAL (SUBSTRING (C818, 3, 4)) < 60) OR (VAL (SUBSTRING (C818, 3, 4)) = 77) OR (VAL (SUBSTRING (C818, 3, 4)) = 99)
                "@R@BERROR!@B
                @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
                @/@/It is also neither the acceptable special codes @B77@B or @B99@B!
                @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
                @/@/Please check your entry and try again.@R"
            CHECK
                (VAL (SUBSTRING (C818, 1, 2)) < 60) OR (VAL (SUBSTRING (C818, 3, 4)) > 59)
                "@R@BERROR!@B
                @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
                @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
                @/@/or the @Bcomplete@B special codes @B77:77@B or @B99:99@B.
                @/@/Please check your entry and try again.@R"
            CHECK
                (VAL (SUBSTRING (C818, 1, 2)) > 59) OR (VAL (SUBSTRING (C818, 3, 4)) < 60)
                "@R@BERROR!@B
                @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
                @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
                @/@/or the @Bcomplete@B special codes @B77:77@B or @B99:99@B.
                @/@/Please check your entry and try again.@R"
            IF NOT (C818 = '7777') THEN
                SIGNAL
                    (VAL (SUBSTRING (C818, 1, 2)) < 6) AND (VAL (SUBSTRING (C818, 1, 2)) <> 5) OR (VAL (SUBSTRING (C818, 3, 4)) < 01)
                    "@G@BALERT!@B
                    @/@/Respondent took over @B5 minutes@B to retrieve the potty!
                    @/@/Suppress if entry is correct.@G"
                aux_C819
                BC819
            ENDIF
            C819A
            SIGNAL
                (C819A < 10) "@G@BALERT!@B
                             @/@/The number of children that use this potty is greater than @B9@B, is this really accurate?@G"
            C820
            IF (C820 = OTHER) THEN
                C820_oth
            ENDIF
        ENDIF
    ENDIF
    aux_C821
    C821
    C821a
    IF NOT (C821a = NO_TOOL) THEN
        IF (C821a = OTHER) THEN
            C821a_oth
        ENDIF
        IF (C821a = JEMBE) THEN
            locC821a:= 'Jembe'
        ELSEIF (C821a = SPADE) THEN
            locC821a:= 'Spade'
        ELSEIF (C821a = KIPUPUU) THEN
            locC821a:= 'Kipupuu'
        ELSE
            locC821a:= C821a_oth
        ENDIF
        C822
        IF (C822 = MULTIPLE) OR (C822 = ONCE) OR (C822 = FEW) OR (C822 = LESS) THEN
            C823
            IF (OTHER IN C823) THEN
                C823_oth
            ENDIF
            aux_C824
            C824_6
            IF (C824_6 = NO) THEN
                C824_1
                C824_2
                C824_3
                C824_4A
                C824_4
                C824_5
            ENDIF
            aux_C825
            BC825
            IF (BC825.C825_A1 = YES) THEN
                C825_1
            ENDIF
            IF (BC825.C825_A2 = YES) THEN
                 C825_2
            ENDIF
            IF (BC825.C825_A3 = YES) THEN
                C825_3
            ENDIF
            IF (BC825.C825_A4 = YES) THEN
                C825_4
            ENDIF
            IF (BC825.C825_A5 = YES) THEN
                C825_5
            ENDIF
            IF (BC825.C825_A6 = YES) THEN
                C825_6
            ENDIF
            IF (BC825.C825_A7 = YES) THEN
                C825_7
            ENDIF
        ENDIF
    ENDIF
    aux_S83
    BS83
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF (etimestamp = EMPTY) AND (BS83.S836 = RESPONSE) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
