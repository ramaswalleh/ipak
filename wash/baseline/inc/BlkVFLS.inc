{VESTERGAARD FRANDSEN / LIFESTRAW FILTER}
BLOCK BlkVFLS
FIELDS
    C1009C1 "Was your household given a @BLifeStraw@B water filter at home for free earlier this year?"
            "Je nyumba yako ilipewa chombo cha kuchunga maji kinachoitwa @BLifeStraw@B bure nyumbani kwako mwanzoni mwa mwaka huu?"
            : TYesNo
    C1009C2 "Are you able and willing to show me your @BLifestraw@B filter?"
            "Unaweza, na ungependa kunionyesha chombo chako cha @BLifestraw@B cha kuchungia maji?"
            : TYesNo
    C1009C3 "@BOBSERVE:@B
            @/@/IS THERE A @BLIFESTRAW@B WATER FILTER AT HOME?"
            : TObservation
    C1009C3A "@BOBSERVE:@B
             @/@/IS THE WATER FILTER HANGING?"
             : (YES	"YES, FILTER IS HANGING ON THE WALL / PURLIN / RAFTERS",
                NO "NO, FILTER IS IN THE HOUSE BUT NOT HUNG",
                NOT_POSSIBLE "Observation not possible")
    C1009C4 "Does the filter currently work?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT IF THE FILTER IS CURRENTLY WORKING@R"
            "Kichungio hicho kinafanya kazi hivi sasa?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT IF THE FILTER IS CURRENTLY WORKING@R"
            : TYesNo, DK
    C1009C4a "When did the filter stop working?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN THE FILTER STOPPED WORKING@R"
             "Kichungio hicho kiliwacha kufanya kazi lini?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN THE FILTER STOPPED WORKING@R"
             : (TODAY_YESTERDAY "Today or yesterday",
                SEVEN_DAYS "Within the last 7 days (since this day last week)",
                WEEK "More than a week ago",
                MONTH "More than one month ago",
                NEVER "Never @I@Bworked@B@I"), DK
    C1009C5 "@BOBSERVE:@B
            @/@/IS THERE ANY MOISTURE / WATER IN THE FILTER?"
            : TObservation
    C1009C5A "@BOBSERVE:@B
            @/@/ARE THERE ANY SIGNS THAT THE FILTER IS NOT CURRENTLY IN USE (i.e. DUST, COBWEBS, etc)?"
            : TObservation
    C1009C5AA "Do you use this filter?"
              "Wewe hutumia kichujio hiki?"
              : TYesNo
    C1009C5B "When was the last time this filter was used to treat drinking water for your household?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN WAS THE LAST TIME THE FILTER WAS USED TO TREAT WATER
             @/@/DO NOT READ RESPONSES@R"
             "Ni lini mara ya mwisho kichungio hiki kilitumika kuyatibu maji ya kunywa nyumbani kwako?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN WAS THE LAST TIME THE FILTER WAS USED TO TREAT WATER
             @/@/DO NOT READ RESPONSES@R"
             : (TODAY_YESTERDAY "Today or yesterday",
                SEVEN_DAYS "Within the last 7 days (since this day last week)",
                WEEK "More than a week ago",
                MONTH "More than one month ago",
                NEVER "Never @I@Bused@B@I"), DK
    C1009C6 "Typically, for how long do you store water after it has been treated with @BLifeStraw@B?
            @/@/@RDO NOT READ RESPONSES@R"
            "Kwa kawaida, wewe huifadhi maji yaliyotibiwa na kichungio cha @BLifestraw@B kwa muda gani?
            @/@/@RDO NOT READ RESPONSES@R"
            : (IMMEDIATELY "Drink immediately",
               LESS_HOUR "Less than an hour",
               FEW_HOUR "A few hours or less",
               DAY_LESS "1 day or less",
               DAY_MORE "2 or more days")
    {C1009C7B "When was the last time your child drank water that was @I@Bnot treated@B@I with the filter?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN WAS THE LAST TIME HER CHILD DRANK WATER THAT WAS NOT TREATED
             @/@/DO NOT READ RESPONSES@R"
             "Mwisho mtoto wako alikunywa maji ambayo @I@Bhayajatibiwa@B@I na kichungio cha @BLifeStraw@B ni lini?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHEN WAS THE LAST TIME HER CHILD DRANK WATER THAT WAS NOT TREATED
             @/@/DO NOT READ RESPONSES@R"
             : (TODAY_YESTERDAY "Today or yesterday",
                SEVEN_DAYS "Within the last 7 days (since this day last week)",
                WEEK "More than a week ago",
                MONTH "More than one month ago",
                NEVER "Never @I@Bdrank@B@I",
                NA (88) "Not Applicable (No children in household)"), DK
    C1009C7C "How often do your children drink water that has been immediately filtered by the @BLifeStraw@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW OFTEN HER CHILDREN DRINK WATER THAT HAS BEEN IMMEDIATELY FILTERED
             @/@/DO NOT READ RESPONSES@R"
             "Kwa kukadiria, ni mara ngapi watoto wako hunywa maji mara tu yanapotoka kwenye kichungio cha @BLifeStraw@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW OFTEN HER CHILDREN DRINK WATER THAT HAS BEEN IMMEDIATELY FILTERED
             @/@/DO NOT READ RESPONSES@R"
             : (ALWAYS "Always" "Kila mara",
                USUALLY "Usually" "Kwa kawaida",
                SOMETIMES "Sometimes" "Wakati mwingine",
                NEVER "Never" "Hajawahi",
                NA (88) "Not Applicable (No children in household)"), DK
    C1009C8A "What are some things that might motivate you to filter your drinking water with the @BLifeStraw@B?
             @/@/@RDO NOT READ RESPONSES
             @/@/PROBE UNTIL RESPONDENT IS FINISHED.@R"
             "Ni sababu zipi zinaweza kukufanya uchunge maji yako ya kukunywa na kichungio cha @BLifeStraw@B?
             @/@/@RDO NOT READ RESPONSES
             @/@/PROBE UNTIL RESPONDENT IS FINISHED.@R"
             : SET [4] OF (GOOD "Good for health",
                           IMPROVE "Improves smell / taste",
                           LESS "Less expensive than other methods",
                           OTHER (77) "Other",
                           NOTHING (99) "Nothing")
    C1009C8A_oth "Specify other water filtering motivators:" : STRING [30]}
    C1009C8Aa "What are some things that might prevent you from filtering your drinking water with the @BLifeStraw@B?
             @/@/@RDO NOT READ RESPONSES.
             @/@/PROBE UNTIL RESPONDENT IS FINISHED.@R"
             "Ni mambo yapi ambayo yanaweza kukuzuia kuchunga maji yako ya kunywa ukitumia @BLifeStraw@B?
             @/@/@RDO NOT READ RESPONSES.
             @/@/PROBE UNTIL RESPONDENT IS FINISHED.@R"
             : SET [7] OF (BROKE (1) "Filter is blocked or broken",
                           TIME (4) "Takes a lot of time",
                           HEALTH (13) "Bad for health",
                           SMELL (14) "Bad smell / taste",
                           REPRODUCTION (16) "Bad for reproduction",
                           NOTHING (15) "Nothing / no difficulties",
                           OTHER (11) "Other")
    C1009C8Aa_oth "Specify other reasons that might prevent filtering of water:" : STRING [30]
    C1009C11 "Have you been visited by someone from @BVestergaard Frandsen@B (@BVF@B) to promote the @BLifeStraw@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF SHE HAS BEEN VISITED BY SOMEONE FROM VESTERGAARD FRANDSEN@R"
             "Je, umewahi kutembelewa na mtu kutoka @BVestergaard Frandsen@B (@BVF@B) ili kueneza @BLifeStraw@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF SHE HAS BEEN VISITED BY SOMEONE FROM VESTERGAARD FRANDSEN@R"
             : TYesNo, DK
    C1009C11_when "How long ago were you visited?"
                  "Ni lini ulitembelewa?"
                  : SET [2] OF (WEEKS "Weeks",
                                MONTHS "Months")
    C1009C11_wk "How many weeks ago?
                @/@/@RIF WITHIN LAST WEEK, WRITE @R@B“00”@B@R IN WEEKS AGO@R"
                "Wiki nagapi zilizopita?
                @/@/@RIF WITHIN LAST WEEK, WRITE @R@B“00”@B@R IN WEEKS AGO@R"
                : INTEGER [2]
    C1009C11_mon "How many months ago?"
                 "Miezi ngapi zilizopita?"
                 : INTEGER [2]
    {C1009C12 "How often are you visited by someone from @BVestergaard Frandsen@B (@BVF@B) to promote the @BLifeStraw@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE FREQUENCY OF VISITS BY SOMEONE FROM VESTERGAARD FRANDSEN (VF)@R"
             "Ni kwa mara ngapi wewe hutembelewa na mtu kutoka @BVestergaard Frandsen@B (@BVF@B) ili kueneza kichungio cha @BLifeStraw@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE FREQUENCY OF VISITS BY SOMEONE FROM VESTERGAARD FRANDSEN (VF)@R"
             : (ONCE_WEEK "Once per week",
                TWO_WEEK "Once every two weeks",
                ONCE_MONTH "Once per month",
                TWO_MONTH "Once every two months",
                THREE_MONTH "Once every three to five months",
                SIX "Once every six or more months"), DK}
LOCALS
    vfls : INTEGER [1]
AUXFIELDS
    aux_VFLS "@GVESTERGAARD FRANDSEN / LIFESTRAW FILTER@G" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_VFLS NEWPAGE

RULES
    aux_VFLS
    C1009C1
    IF (C1009C1 = YES) THEN
        C1009C2
        C1009C3
        IF (C1009C3 = YES) THEN
            C1009C3A
            C1009C4
            IF (C1009C4 = NO) THEN
                C1009C4a
                IF (C1009C4a = TODAY_YESTERDAY) OR (C1009C4a = SEVEN_DAYS) OR (C1009C4a = WEEK) OR (C1009C4a = DK) THEN
                    C1009C5
                    C1009C5A
                    C1009C5AA
                    IF (C1009C5AA = YES) THEN
                        C1009C5B
                        IF (C1009C5B = TODAY_YESTERDAY) OR (C1009C5B = SEVEN_DAYS) OR (C1009C5B = WEEK) OR (C1009C5B = DK) THEN
                            C1009C6
                            {C1009C7B
                            C1009C7C}
                        ENDIF
                    ENDIF
                ENDIF
            ELSE
                C1009C5
                C1009C5A
                C1009C5AA
                IF (C1009C5AA = YES) THEN
                    C1009C5B
                    IF (C1009C5B = TODAY_YESTERDAY) OR (C1009C5B = SEVEN_DAYS) OR (C1009C5B = WEEK) OR (C1009C5B = DK) THEN
                        C1009C6
                        {C1009C7B
                        C1009C7C}
                    ENDIF
                ENDIF
            ENDIF
        ELSE
            C1009C5AA
            IF (C1009C5AA = YES) THEN
                C1009C5B
                IF (C1009C5B = TODAY_YESTERDAY) OR (C1009C5B = SEVEN_DAYS) OR (C1009C5B = WEEK) OR (C1009C5B = DK) THEN
                    C1009C6
                    {C1009C7B
                    C1009C7C}
                ENDIF
            ENDIF
        ENDIF
        {C1009C8A
        IF (NOTHING IN C1009C8A) THEN
            FOR vfls:= 1 TO 4 DO
                IF (C1009C8A [vfls] = GOOD) OR (C1009C8A [vfls] = IMPROVE) OR (C1009C8A [vfls] = LESS) OR (C1009C8A [vfls] = OTHER) THEN
                    ERROR "@R@BERROR!@B
                          @/@/You cannot select @R@BNOTHING@B@R and at the same time select other options!
                          @/@/Please check your entry and try again.@R"
                ENDIF
            ENDDO
        ENDIF
        IF (OTHER IN C1009C8A) THEN
            C1009C8A_oth
        ENDIF}
        C1009C8Aa
        IF (NOTHING IN C1009C8Aa) THEN
            FOR vfls:= 1 TO 7 DO
                IF (C1009C8Aa [vfls] = BROKE) OR (C1009C8Aa [vfls] = TIME) OR (C1009C8Aa [vfls] = HEALTH) OR
                (C1009C8Aa [vfls] = SMELL)OR (C1009C8Aa [vfls] = REPRODUCTION) OR (C1009C8Aa [vfls] = OTHER) THEN
                    ERROR "@R@BERROR!@B
                          @/@/You cannot select @R@BNOTHING@B@R and at the same time select other options!
                          @/@/Please check your entry and try again.@R"
                ENDIF
            ENDDO
        ENDIF
        IF (OTHER IN C1009C8Aa) THEN
            C1009C8Aa_oth
        ENDIF
        C1009C11
        IF (C1009C11 = YES) THEN
            C1009C11_when
            IF (WEEKS IN C1009C11_when) THEN
                C1009C11_wk
            ENDIF
            IF (MONTHS IN C1009C11_when) THEN
                C1009C11_mon
            ENDIF
            {C1009C12}
        ENDIF
    ENDIF
ENDBLOCK
