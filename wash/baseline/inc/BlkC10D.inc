{DRINKING WATER SOURCES}
BLOCK BlkC10D
    EXTERNALS
        GetLocDetl : GetLocationDetails ('..\ext\LocDetail')

FIELDS
    D2 "What is the type of water source that your household collects most of the water that you use from?
       @/@/@RUSE CODE SHEET@R"
       "Ni aina gani ya chemichemi ambapo nyumba yako huteka maji mengi mnayotumia?
       @/@/@RUSE CODE SHEET@R"
       : TSource
    D2_oth "Describe other type of water source:" : STRING [30]
    D2A "Is the well / spring covered?
        @/@/@RREAD RESPONSES@R"
        "Je, chemichemi imefunikwa?
        @/@/@RREAD RESPONSES@R"
        : (FULL "YES, FULLY COVERED" "NDIO, IMEFUNIKWA KABISA",
           PARTIAL "YES, PARTIALLY COVERED" "NDIO, IMEFUNIKWA KIASI",
           NO "NO" "HAPANA")
    C1016A "What is the name of this water source?
           @/@/@RCHECK WHICH ATTRIBUTES ARE KNOWN / AVAILABLE THEN YOU CAN ENTER THEM@R"
           "Je, jina la chemichemi hili mnapoteka maji ni gani?
           @/@/@RCHECK WHICH ATTRIBUTES ARE KNOWN / AVAILABLE THEN YOU CAN ENTER THEM@R"
           : SET [5] OF (NAME "Name",
                         ALTERNATE_1 "Alternate name 1",
                         ALTERNATE_2 "Alternate name 2",
                         LANDMARK_1 "Landmark 1",
                         LANDMARK_2 "Landmark 2")
    C1016A_nm "Name:" : STRING [50]
    C1016A_a1 "Alternate name 1:" : STRING [50]
    C1016A_a2 "Alternate name 2:" : STRING [50]
    C1016A_l1 "Landmark 1:" : STRING [50]
    C1016A_l2 "Landmark 2:" : STRING [50]
    D3a "Which best describes your water source's location?
        @/@/@RREAD RESPONSES@R"
        "Chemichemi yenyewe iko na wapi?
        @/@/@RREAD RESPONSES@R"
        : (YOUR_COMPOUND "IN YOUR COMPOUND" "KATIKA BOMA LAKO",
           OTHER_COMPOUND "IN ANOTHER PERSON'S COMPOUND" "KATIKA BOMA LA MTU MWINGINE",
           YOUR_PROPERTY "OUTSIDE YOUR COMPOUND ON YOUR PROPERTY" "NJE YA BOMA LAKO, KWA SHAMBA LAKO",
           OTHER_PROPERTY "ON SOMEONE ELSE'S PROPERTY" "KWA SHAMBA LA MTU MWINGINE",
           PUBLIC "IN A PUBLIC PLACE" "KATIKA SEHEMU YA UMMA")
    D6 "Is this source within the village?"
       "Je chemichemi hii ya maji iko ndani ya kijiji?"
       : (YES "Yes, in this village",
          NO "No, in other village",
          BORDER "On the border")
    D6_NO_nme "Other village name:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME@R"
              : STRING [20], DK
    D6_NO_id "Other village ID:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT APPLICABLE / OR IF IT CANNOT BE FOUND@R"
             : TVillageID, DK
    D6_BOR_nme "Border village name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME@R"
               : STRING [20], DK
    D6_BOR_id "Border village ID:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT APPLICABLE / OR IF IT CANNOT BE FOUND@R"
              : TVillageID, DK
    D4 "@BIF ON LIST@B, RECORD SOURCE ID
       @/@/@BIF NOT ON LIST@B, CONTACT TEAM LEADER FOR NEW ID"
       : 100000..999999
    D5 "During which months do you collect water from this source?"
       "Ni katika miezi gani kwa mwaka ndipo wewe huteka maji kutoka kwa chemichemi hii?"
       : (ALL "All year (every month of the year)",
          SELECT "Selected Months")
    D5_sel "Please select which months of the year:"
           : SET [12] OF TCalender
    D7 "How long does it take to get there (in minutes walking, @Bone way@B)?
       @/@/@RRECORD EXACTLY WHAT RESPONDENT SAYS@R"
       "Inachukua takriban dakika ngapi kufika huko (kwa dakika ukitembea, @Bnjia moja@B)?
       @/@/@RRECORD EXACTLY WHAT RESPONDENT SAYS@R"
       : SET [2] OF (MINUTES "Minutes",
                     HOURS "Hours")
    D7_min "Minutes walking:" : 0..60
    D7_hrs "Hours walking:" : 1..24
    D8 "Who in the household usually collects water from this source?
       @/@/@RCHECK ALL THAT APPLY@R"
       "Kwa kawaida, nani katika nyumba hii huenda kuteka maji kutoka kwa chemichemi?
       @/@/CHECK ALL THAT APPLY@R"
       : SET [4] OF (RESPONDENT "Respondent",
                     ADULT "Other adult (> 18 years)",
                     CHILD "Child (8 - 19 years)",
                     CHILD_lt8 "Child (< 8 years)")
    D8A "How many trips @Bper day@B does your household usually take to this source?
        @/@/Count trips from all household members together.
        @/@/@RIF NOT VISITED IN THE PAST 1 WEEK, CODE @R@B“88”@B@R
        @/@/YOU CAN ENTER @R@B“0.5”@B@R IF WATER WAS COLLECTED IN ANOTHER INTERVAL, E.G ONCE IN THE LAST TWO DAYS E.T.C@R
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY TRIPS@R"
        "Kwa kawaida, ni mara ngapi @Bkwa siku@B watu katika nyumba yako huenda kuteka maji kwa chemchemi?
        @/@/Hesabu idadi ya safari ya watu wote katika nyumba yako.
        @/@/@RIF NOT VISITED IN THE PAST 1 WEEK, CODE @R@B“88”@B@R
        @/@/YOU CAN ENTER @R@B“0.5”@B@R IF WATER WAS COLLECTED IN ANOTHER INTERVAL, E.G ONCE IN THE LAST TWO DAYS E.T.C@R
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY TRIPS@R"
        : 0.0..97.9, DK
    D8B "Typically, how many of the following @Utypes of containers@U do you / other household members collect on @Beach trip@B @B(WATER FOR ALL PURPOSES)@B?
        @/@/@RYOU CAN ENTER DECIMAL ENTRIES (E.G HALF A LITER CAN BE ENTERED AS 0.5)
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY@R"
        "Kwa kawaida, ni lita ngapi wewe / watu katika nyumba yako huteka kwa @Bkila safari@B? @B(MAJI YA MATUMIZI YOTE)@B?
        @/@/@RYOU CAN ENTER DECIMAL ENTRIES (E.G HALF A LITER CAN BE ENTERED AS 0.5)
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY@R"
        : SET [4] OF (FIVE "5 liter containers",
                      TEN "10 liter containers",
                      TWENTY "20 liter containers",
                      OTHER "Other sized container"), DK
    D8B_five "How many containers of @U5-liter@U capacity @Bper trip@B?" : 0.0..97.9
    D8B_ten "How many containers of @U10_liter@U capacity @Bper trip@B?" : 0.0..97.9
    D8B_twen "How many containers of @U20-liter@U capacity @Bper trip@B?" : 0.0..97.9
    D8B_oth "For other size, how many liters in one container?" : 0.0..97.9
    D8B_no "How many containers of @B^D8B_oth@B-size @Bper trip@B?" : 0.0..97.9
    D8C "What do you use the water from this source for?
        @/@/@RCHECK ALL THAT APPLY
        @/@/READ RESPONSES@R"
        "Je, wewe hutumia maji kutoka chechemi hii kwa kazi gani?
        @/@/@RCHECK ALL THAT APPLY
        @/@/READ RESPONSES@R"
        : SET [6] OF TUse
    D8Ca "Does your household pay any money to use this source?"
         "Je nyumba yako hulipia pesa zozote ili kutumia chemichemi hii?"
         : TYesNo
    D8C1 "Do you or your children ever drink water from the source you just told me about?"
         "Je, wewe au watoto wako hunywa maji kutoka kwa chemichemi uliyonieleza hivi sasa?"
         : TYesNo

AUXFIELDS
    aux_C10D "@G@B^loc_label@B WATER SOURCE@G" : (ENTER), EMPTY
    aux_D6_NO_id : STRING [4]
    aux_D6_BOR_id : STRING [4]

LAYOUT
    BEFORE aux_C10D NEWPAGE
    AFTER D8Ca NEWPAGE

RULES
    aux_C10D
    D2
    IF NOT (D2 = RAINWATER) THEN
        IF (D2 = OTHER) THEN
            D2_oth
        ENDIF
        IF (D2 = UNPROTECT_SPRING) OR (D2 = PROTECT_SPRING) OR (D2 = UNPROTECT_WELL) OR (D2 = PROTECT_WELL) THEN
            D2A
        ENDIF
        C1016A
        IF (NAME IN C1016A) THEN
            C1016A_nm
        ENDIF
        IF (ALTERNATE_1 IN C1016A) THEN
            C1016A_a1
        ENDIF
        IF (ALTERNATE_2 IN C1016A) THEN
            C1016A_a2
        ENDIF
        IF (LANDMARK_1 IN C1016A) THEN
            C1016A_l1
        ENDIF
        IF (LANDMARK_2 IN C1016A) THEN
            C1016A_l2
        ENDIF
        D3a
        D6
        IF (D6 = NO) THEN
            D6_NO_nme{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
            IF NOT (D6_NO_nme = DK) THEN
                IF (D6_NO_nme = RESPONSE) THEN
                    IF GetLocDetl.SEARCH (D6_NO_nme) THEN
                        GetLocDetl.READ
                        D6_NO_id:= GetLocDetl.VILLAGEID
                    ENDIF
                ENDIF
                D6_NO_id
            ENDIF
        ELSEIF (D6 = BORDER) THEN
            D6_BOR_nme{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
            IF NOT (D6_BOR_nme = DK) THEN
                IF (D6_BOR_nme = RESPONSE) THEN
                    IF GetLocDetl.SEARCH (D6_BOR_nme) THEN
                        GetLocDetl.READ
                        D6_BOR_id:= GetLocDetl.VILLAGEID
                    ENDIF
                ENDIF
                D6_BOR_id
            ENDIF
        ENDIF
        D4
        D5
        IF (D5 = SELECT) THEN
            D5_sel
        ENDIF
        D7
        IF (MINUTES IN D7) THEN
            D7_min
        ENDIF
        IF (HOURS IN D7) THEN
            D7_hrs
        ENDIF
        D8
        D8A
        D8B
        SIGNAL
            (D8A < 39) "@G@BALERT!@B
                       @/@/Does the respondent's household really make more than 40 trips in a day?
                       @/@/Suppress if correct.@G"
        IF (FIVE IN D8B) THEN
            D8B_five
            SIGNAL
                (D8B_five < 6) "@G@BALERT!@B
                               @/@/Are you sure the respondent meant @B^D8B_five@B five-liter containers?@G"
        ENDIF
        IF (TEN IN D8B) THEN
            D8B_ten
            SIGNAL
                (D8B_ten < 6) "@G@BALERT!@B
                              @/@/Are you sure the respondent meant @B^D8B_ten@B ten-liter containers?@G"
        ENDIF
        IF (TWENTY IN D8B) THEN
            D8B_twen
            SIGNAL
                (D8B_twen < 6) "@G@BALERT!@B
                               @/@/Are you sure the respondent meant @B^D8B_twen@B twenty-liter containers?@G"
        ENDIF
        IF (OTHER IN D8B) THEN
            D8B_oth
            D8B_no
            SIGNAL
                (D8B_no < 6) "@G@BALERT!@B
                             @/@/Are you sure the respondent meant @B^D8B_no@B other-liter containers?@G"
        ENDIF
    ENDIF
    D8C
    D8Ca
    IF NOT (DRINK IN D8C) THEN
        D8C1
    ENDIF
ENDBLOCK
