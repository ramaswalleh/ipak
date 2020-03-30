BLOCK BlkResp
FIELDS
    C300A "Respondent's first name:"
          "Jina la kwanza la mama:"
          : STRING [15]
    C300B "@B^C300A@B's age in years:"
          "Umri wa @B^C300A@B kwa miaka:"
          : 0..98
    C301 "In the @Ulast six months@U, has @B^C300A@B received a pill or drug for intestinal worms?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW / NOT SURE IF SHE HAS RECEIVED A DRUG FOR INTESTINAL WORMS IN THE PAST SIX MONTHS@R"
         "Kwa @Umiezi sita iliyopita@U, @B^C300A@B alipewa tembe au dawa ya minyoo?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW / NOT SURE IF SHE HAS RECEIVED A DRUG FOR INTESTINAL WORMS IN THE PAST SIX MONTHS@R"
         : TYesNo, DK
    C302 "Where did @B^C300A@B receive the drug for intestinal worms?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW WHERE SHE RECEIVED THE DRUG FOR INTESTINAL WORMS@R"
         "Ni wapi @B^C300A@B alipewa dawa ya minyoo?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW WHERE SHE RECEIVED THE DRUG FOR INTESTINAL WORMS@R"
         : (HOME "At home / in village",
            CLINIC "At a clinic or health facility",
            SCHOOL "At a school",
            PURCHASE "Purchased"), DK
    C303 "Did @B^C300A@B receive the drug as part of a larger campaign?
         @/@/@BNOTE: CAMPAIGN IF RECEIVED FOR FREE; IF REQUESTED OR BOUGHT, NOT A CAMPAIGN@B
         @/@/@RIF MORE RECENT THAN 1 MONTH, RECORD WEEKS
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW IF SHE RECEIVED THE DRUG AS PART OF A LARGER CAMPAIGN@R"
         "@B^C300A@B alipokea dawa kupitia kampeni kubwa?
         @/@/@BNOTE: CAMPAIGN IF RECEIVED FOR FREE; IF REQUESTED OR BOUGHT, NOT A CAMPAIGN@B
         @/@/@RIF MORE RECENT THAN 1 MONTH, RECORD WEEKS
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW IF SHE RECEIVED THE DRUG AS PART OF A LARGER CAMPAIGN@R"
         : TYesNo, DK
    C304 "Approximately how long ago did @B^C300A@B receive the drug?
         @/@/@RIF MORE RECENT THAN 1 MONTH, RECORD WEEKS
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW HOW LONG AGO SHE RECEIVED THE DRUG@R"
         "@B^C300A@B alipokea dawa takriban muda gani uliopita?
         @/@/@RIF MORE RECENT THAN 1 MONTH, RECORD WEEKS
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW HOW LONG AGO SHE RECEIVED THE DRUG@R"
         : SET [2] OF (MONTHS "Months",
                       WEEKS "Weeks"), DK
    C304_mth "Months:" : 1..6
    C304_wks "Weeks:" : 1..52
    C305_tod "Has @B^C300A@B intentionally eaten any dirt or soil @Btoday@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW IF SHE HAS EATEN DIRT TODAY@R"
             "Je @B^C300A@B amekula uchafu wowote au udongo kimaksudi @Bleo@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW IF SHE HAS EATEN DIRT TODAY@R"
             : TYesNo, DK
    C305_yes "Has @B^C300A@B intentionally eaten any dirt or soil @Byesterday@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW / IS NOT SURE IF SHE ATE ANY DIRT OR SOIL YESTERDAY@R"
             "Je @B^C300A@B amekula uchafu wowote au udongo kimaksudi @Bjana@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW / IS NOT SURE IF SHE ATE ANY DIRT OR SOIL YESTERDAY@R"
             : TYesNo, DK
    C305_dby "Has @B^C300A@B intentionally eaten any dirt or soil @Bthe day before yesterday@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW / IS NOT SURE IF SHE ATE ANY DIRT OR SOIL THE DAY BEFORE YESTERDAY@R"
             "Je @B^C300A@B amekula uchafu wowote au udongo kimaksudi @Bjuzi@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW / IS NOT SURE IF SHE ATE ANY DIRT OR SOIL THE DAY BEFORE YESTERDAY@R"
             : TYesNo, DK
    C305_7day "Has @B^C300A@B intentionally eaten any dirt or soil @Bthe last seven days (since this day last week)@B?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW / IS NOT SURE IF SHE ATE ANY DIRT OR SOIL IN THE LAST SEVEN DAYS@R"
              "Je @B^C300A@B amekula uchafu wowote au udongo kimaksudi @Bsiku saba zilizopita (tangu siku hii, juma lililopita)@B?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF @R@B^C300A@B@R DOES NOT KNOW / IS NOT SURE IF SHE ATE ANY DIRT OR SOIL IN THE LAST SEVEN DAYS@R"
              : TYesNo, DK
RULES
    C300A:= c.TRI004.BRI004.RI004_fname
    C300A.SHOW
    C300B
    C301
    IF (C301 = YES) THEN
        C302
        IF NOT (C302 = PURCHASE) THEN
            C303
        ENDIF
        C304
        IF NOT (C304 = DK) THEN
            IF (MONTHS IN C304) THEN
                C304_mth
            ENDIF
            IF (WEEKS IN C304) THEN
                C304_wks
            ENDIF
        ENDIF
        C305_tod
        C305_yes
        C305_dby
        IF (C305_tod = YES) OR (C305_yes = YES) OR (C305_dby = YES) THEN
            C305_7day:= YES
            C305_7day.SHOW
        ELSE
            C305_7day
        ENDIF
    ELSE
        C305_tod
        C305_yes
        C305_dby
        IF (C305_tod = YES) OR (C305_yes = YES) OR (C305_dby = YES) THEN
            C305_7day:= YES
            C305_7day.SHOW
        ELSE
            C305_7day
        ENDIF
    ENDIF
ENDBLOCK

BLOCK BlkChild
FIELDS
    C300A "First name:"
          "Jina la kwanza:"
          : STRING [15]
    C300B "@B^C300A@B's age:
          @/@/@RENTER THE AGE IN YEARS@R"
          "Umri wa @B^C300A@B:
          @/@/@RENTER THE AGE IN YEARS@R"
          : 0..12
    Childid "Child ID:" : TIndividualID
    C301 "In the @Ulast six months@U, has @B^C300A@B received a pill or drug for intestinal worms?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE IF @R@B^C300A@B@R HAS RECEIVED A DRUG FOR INTESTINAL WORMS IN THE PAST SIX MONTHS@R"
         "Kwa @Umiezi sita iliyopita@U, @B^C300A@B alipewa tembe au dawa ya minyoo?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE IF @R@B^C300A@B@R HAS RECEIVED A DRUG FOR INTESTINAL WORMS IN THE PAST SIX MONTHS@R"
         : TYesNo, DK
    C302 "Where did @B^C300A@B receive the drug for intestinal worms?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE @R@B^C300A@B@R RECEIVED THE DRUG FOR INTESTINAL WORMS@R"
         "Ni wapi @B^C300A@B alipewa dawa ya minyoo?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE @R@B^C300A@B@R RECEIVED THE DRUG FOR INTESTINAL WORMS@R"
         : (HOME "At home / in village",
            CLINIC "At a clinic or health facility",
            SCHOOL "At a school",
            PURCHASE "Purchased"), DK
    C303 "Did @B^C300A@B receive the drug as part of a larger campaign?
         @/@/@RIF MORE RECENT THAN 1 MONTH, RECORD WEEKS
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R RECEIVED THE DRUG AS PART OF A LARGER CAMPAIGN@R"
         "@B^C300A@B alipokea dawa kupitia kampeni kubwa?
         @/@/@RIF MORE RECENT THAN 1 MONTH, RECORD WEEKS
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R RECEIVED THE DRUG AS PART OF A LARGER CAMPAIGN@R"
         : TYesNo, DK
    C304 "Approximately how long ago did @B^C300A@B receive the drug?
         @/@/@RIF MORE RECENT THAN 1 MONTH, RECORD WEEKS
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW LONG AGO @R@B^C300A@B@R RECEIVED THE DRUG@R"
         "@B^C300A@B alipokea dawa takriban muda gani uliopita?
         @/@/@RIF MORE RECENT THAN 1 MONTH, RECORD WEEKS
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW LONG AGO @R@B^C300A@B@R RECEIVED THE DRUG@R"
         : SET [2] OF (MONTHS "Months",
                       WEEKS "Weeks"), DK
    C304_mth "Months:" : 1..6
    C304_wks "Weeks:" : 1..52
    C305_tod "Has @B^C300A@B eaten any dirt or soil @Btoday@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R HAS EATEN ANY DIRT OR SOIL TODAY@R"
             "Je @B^C300A@B amekula uchafu wowote au udongo @Bleo@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R HAS EATEN ANY DIRT OR SOIL TODAY@R"
             : TYesNo, DK
    C305_yes "Did @B^C300A@B eat any dirt or soil @Byesterday@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R HAS EATEN ANY DIRT OR SOIL YESTERDAY@R"
             "Je @B^C300A@B alikula uchafu wowote au udongo @Bjana@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R HAS EATEN ANY DIRT OR SOIL YESTERDAY@R"
             : TYesNo, DK
    C305_dby "Did @B^C300A@B eat any dirt or soil @Bthe day before yesterday@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R HAS EATEN ANY DIRT OR SOIL THE DAY BEFORE YESTERDAY@R"
             "Je @B^C300A@B alikula uchafu wowote au udongo @Bjuzi@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R HAS EATEN ANY DIRT OR SOIL THE DAY BEFORE YESTERDAY@R"
             : TYesNo, DK
    C305_7day "Did @B^C300A@B eat any dirt or soil @Blast seven days (since this day last week)@B?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R HAS EATEN ANY DIRT OR SOIL IN THE LAST SEVEN DAYS@R"
              "Je @B^C300A@B alikula uchafu wowote au udongo @Bsiku saba zilizopita (tangu siku hii, juma lililopita)@B?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @R@B^C300A@B@R HAS EATEN ANY DIRT OR SOIL IN THE LAST SEVEN DAYS@R"
              : TYesNo, DK

RULES
    C300A.SHOW
    C300B.SHOW
    Childid.SHOW
    C301
    IF (C301 = YES) THEN
        C302
        C303
        C304
        IF NOT (C304 = DK) THEN
            IF (MONTHS IN C304) THEN
                C304_mth
            ENDIF
            IF (WEEKS IN C304) THEN
                C304_wks
            ENDIF
        ENDIF
        C305_tod
        C305_yes
        C305_dby
        IF (C305_tod = YES) OR (C305_yes = YES) OR (C305_dby = YES) THEN
            C305_7day:= YES
            C305_7day.SHOW
        ELSE
            C305_7day
        ENDIF
    ELSE
        C305_tod
        C305_yes
        C305_dby
        IF (C305_tod = YES) OR (C305_yes = YES) OR (C305_dby = YES) THEN
            C305_7day:= YES
            C305_7day.SHOW
        ELSE
            C305_7day
        ENDIF
    ENDIF
ENDBLOCK
