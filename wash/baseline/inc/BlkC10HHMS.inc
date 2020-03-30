{HOUSEHOLD MICROBIOLOGICAL SAMPLE}
BLOCK BlkW1017
FIELDS
    W1017_day "Household water sample collection @BDAY@B:"
              : 1..31
    W1017_month "Household water sample collection @BMONTH@B:"
                : 1..12
    W1017_year "Household water sample collection @BYEAR@B:"
               : 2012..2015
    W1017_date : STRING [10]
RULES
    W1017_day
    W1017_month
    W1017_year
    W1017_date.KEEP

    {IF (W1017_year > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/The @Bhousehold water sample collection year@B entered as @R@B^W1017_year@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (W1017_year = sdatestamp.YEAR) AND (W1017_month > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bhousehold water sample collection month@B entered as @R@B^W1017_month@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF (W1017_year = sdatestamp.YEAR) AND (W1017_month = sdatestamp.MONTH) AND (W1017_day > sdatestamp.DAY) THEN
                ERROR "@R@BERROR!@B
                      @/@/The @Bhousehold water sample collection day@B entered as @R@B^W1017_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSE}
                IF (W1017_day < 10) THEN
                    W1017_date:= '0' + STR (W1017_day) + '/'
                ELSE
                    W1017_date:= STR (W1017_day) + '/'
                ENDIF
                IF (W1017_month < 10) THEN
                    W1017_date:= W1017_date + '0' + STR (W1017_month) + '/'
                ELSE
                    W1017_date:= W1017_date + STR (W1017_month) + '/'
                ENDIF
                W1017_date:= W1017_date + STR (W1017_year)
            {ENDIF
        ENDIF
    ENDIF}
ENDBLOCK

TABLE TblW1017
FIELDS
    BW1017 : BlkW1017
RULES
    BW1017
ENDTABLE

BLOCK BlkC10HHMS
FIELDS
    C1001A "@BOBSERVE:@B
           @/@/HOW WAS THE WATER STORED?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU COULD NOT OBSERVE HOW THE WATER WAS STORED@R"
           : (PLASTIC "IN PLASTIC OR METAL CONTAINERS",
              CLAY "IN CLAY POTS",
              ROOF "ROOF TANK OR CISTERN",
              DO_NOT_STORE "DO NOT STORE WATER"), DK
    C1001B "@BOBSERVE:@B
           @/@/HOW WAS CONTAINER COVERED?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU COULD NOT OBSERVE HOW THE CONTAINER WAS COVERED@R"
           : (FULL "FULLY COVERED",
              PARTIAL "PARTIALLY COVERED",
              NOT_COVERED "NOT COVERED",
              OTHER "OTHER",
              NA (88) "Not Applicable"), DK
    C1001B_oth "Specify other way container was covered:" : STRING [100]
    C1004 "How long ago did you or somebody in your household collect this water from the source?
          @/@/IF @URAINWATER@U, HOW LONG AGO DID THEY FILL THIS CONTAINER WITH RAINWATER?
          @/@/@RIF MORE THAN 24 HOURS, PUT A “@R@B00@B@R” IN THE HOURS FIELD AND FILL NUMBER OF DAYS.
          @/@/MARK “@R@B88@B@R” IF NO WATER
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW LONG AGO SOMEBODY COLLECTED THE WATER@R"
          "Ni muda gani umepita tangu mtu nyumbani mwako ayateke maji haya kutoka chemichemi?
          @/@/IF @URAINWATER@U, HOW LONG AGO DID THEY FILL THIS CONTAINER WITH RAINWATER?
          @/@/@RIF MORE THAN 24 HOURS, PUT A “@R@B00@B@R” IN THE HOURS FIELD AND FILL NUMBER OF DAYS.
          @/@/MARK “@R@B88@B@R” IF NO WATER
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW LONG AGO SOMEBODY COLLECTED THE WATER@R"
          : SET [3] OF TDuration, DK
    C1004_hr "Hours:
             @/@/@RIF MORE THAN 24 HOURS, PUT A “@R@B0@B@R” AND FILL THE EQUIVALLENT IN NUMBER OF DAYS IN THE NEXT QUESTION.@R"
             : 0..24
    C1004_day "Days:" : 0..30
    C1004_wk "Weeks:" : 0..4
    C1023 "From what @Utype of source@U did you collect the drinking water in this cup?
          @/@/@R@BDEFINE:@B [TAFADHALI KUMBUKA CHEMICHEMI NI MAHALI AMBAPO WATU HUCHOTA MAJI YA MATUMIZI KWA KAZI YOYOTE]
          @/@/PROBE TO DETERMINE THE SPECIFIC TYPE OF WATER SOURCE@R"
          "Maji yaliyo ndani ya kikombe hiki yalitekwa kutoka chemichemi ya @Uaina gani@U?
          @/@/@R@BDEFINE:@B [TAFADHALI KUMBUKA CHEMICHEMI NI MAHALI AMBAPO WATU HUCHOTA MAJI YA MATUMIZI KWA KAZI YOYOTE]
          @/@/PROBE TO DETERMINE THE SPECIFIC TYPE OF WATER SOURCE@R"
          : TSource
    C1023a "Describe surface water:" : STRING [20]
    C1023_oth "Describe other type of water source:" : STRING [30]
    C1005 "Have you done anything to make this water less cloudy or safer to drink?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF SHE HAS DONE ANYTHING TO MAKE THE WATER LESS CLOUDY OR SAFE TO DRINK@R"
          "Je umefanya chochote ili kupunguza rangi ya maji haya au kuyafanya kuwa salama ya kukunywa?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF SHE HAS DONE ANYTHING TO MAKE THE WATER LESS CLOUDY OR SAFE TO DRINK@R"
          : TYesNo, DK
    C1006 "What method(s) did you use?
          @/@/@RDO NOT READ RESPONSES.
          @/@/PROBE UNTIL RESPONDENT IS FINISHED.@R"
          "Ni mbinu gani ulizotumia?
          @/@/@RDO NOT READ RESPONSES.
          @/@/PROBE UNTIL RESPONDENT IS FINISHED.@R"
          : SET [13] OF (DISPENSER (1) "Chlorine dispenser",
                         WATERGUARD (2) "@BWaterGuard@B / bottled Chlorine",
                         BOIL (3) "Boil",
                         SIEVE (4) "Sieve it through cloth or other material",
                         OTHER (5) "Other type of water filter (ceramic, sand, composite)",
                         SODIS (6) "@BSO@Blar @BDIS@Binfection (@BSODIS@B)",
                         SETTLE (7) "Let it stand and settle",
                         BIOSAND (8) "Biosand filter",
                         FILTER (9) "@BLifeStraw@B family filter (distributed by @BVestergaard Frandsen@B)",
                         ALUM (10) "Coagulant (i.e. Alum)",
                         PUR (11) "@BPUR@B (Flocculant + disinfectant)",
                         AQUATAB (12) "@BAquatabs@B",
                         CHLORINE (13) "Water source treated with Chlorine")
    C1006a "How long ago did you or somebody in your home treat this water?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW LONG THE WATER WAS TREATED@R"
           "Ni muda gani umepita tangu mtu nyumbani atibu maji haya?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW LONG THE WATER WAS TREATED@R"
           : SET [3] OF TDuration, DK
    C1006a_hr "Hours:" : 0..24
    C1006a_day "Days:" : 0..30
    C1006a_wk "Weeks:" : 0..4
    C1007 "Do you ever treat your drinking water or do anything to make it less cloudy?"
          "Wewe hutibu maji yako ya kunywa au kufanya chochote kupunguza rangi?"
          : TYesNo
    C1008 "When was the last time you treated your water or did anything to make it less cloudy?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE WHEN WAS THE LAST TIME SHE TREATED HER WATER OR DID ANYTHING TO MAKE IT LESS CLOUDY@R"
          "Mara ya mwisho ulipotibu maji yako au kupunguza rangi ilikuwa lini?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE WHEN WAS THE LAST TIME SHE TREATED HER WATER OR DID ANYTHING TO MAKE IT LESS CLOUDY@R"
          : TWhen, DK
    C1014 "May I collect a small sample of your drinking water?
          @/@/@RCOLLECT FROM SAME CUP OF WATER THAT WAS BROUGHT TO YOU@R"
          "Naweza kuchukua sampuli kidogo ya maji yako?
          @/@/@RCOLLECT FROM SAME CUP OF WATER THAT WAS BROUGHT TO YOU@R"
          : (YES "YES, SAMPLE COLLECTED",
             NO_REFUSE "NO / REFUSED",
             NO_WATER "NO DRINKING WATER AVAILABLE TO TEST")
    W1014A "Is today your assigned day for taking duplicates?
           @/@/@RUSE THE LARGE WHIRLPAK BAGS@R"
           : TYesNo
    TW1017 : TblW1017
    W1017_time "Household sample collection @BTIME@B
               @/@/@R@B24 HOUR FORMAT@B@R"
               : T24HRClock
    W1017A "UNIQUE BAG ID" : 10000..99999
    C1009 "What are all the ways you treat your drinking water?
          @/@/@RDO NOT READ RESPONSES.
          @/@/PROBE UNTIL RESPONDENT IS FINISHED.@R"
          "Ni njia zipi zote wewe hutumia kuyatibu maji yako ya kunywa?
          @/@/@RDO NOT READ RESPONSES.
          @/@/PROBE UNTIL RESPONDENT IS FINISHED.@R"
          : SET [13] OF (DISPENSER (1) "Chlorine dispenser",
                         WATERGUARD (2) "@BWaterGuard@B / bottled Chlorine",
                         BOIL (3) "Boil",
                         SIEVE (4) "Sieve it through cloth or other material",
                         OTHER (5) "Other type of water filter (ceramic, sand, composite)",
                         SODIS (6) "@BSO@Blar @BDIS@Binfection (@BSODIS@B)",
                         SETTLE (7) "Let it stand and settle",
                         BIOSAND (8) "Biosand filter",
                         FILTER (9) "@BLifeStraw@B family filter (distributed by @BVestergaard Frandsen@B)",
                         ALUM (10) "Coagulant (i.e. Alum)",
                         PUR (11) "@BPUR@B (Flocculant + disinfectant)",
                         AQUATAB (12) "@BAquatabs@B",
                         CHLORINE (13) "Water source treated with Chlorine")
    C1009A "How often do you purchase @BWaterGuard@B / bottled Chlorine or @BPUR@B or @BAquatabs@B?"
           "Mara ngapi wewe hununua dawa ya kutibu maji kama vile @BPUR@B, @BWaterGuard@B, @BAquatabs@B au zingine?"
           : (WEEK "ONCE OR MORE PER WEEK",
              ONCE_MONTH "ONCE PER MONTH",
              TWO_MONTH "ONCE EVERY TWO MONTHS",
              ONCE_THREE "ONCE EVERY THREE OR MORE MONTHS",
              CHOLERA "ONLY WHEN THERE IS A CHOLERA OUTBREAK",
              NEVER "I NEVER PURCHASE; ONLY USE WHEN GIVEN FOR FREE")
    {C1009B "How often do you use @BWaterGuard@B / bottled Chlorine or @BPUR@B or @BAquatabs@B?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE HOW OFTEN SHE USES WATERGUARD / BOTTLED CHLORINE OR PUR
           @/@/YOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO TELL YOU HOW OFTEN SHE USES WATERGUARD / BOTTLED CHLORINE OR PUR@R"
           "Ni mara ngapi wewe hutumia @BWaterGuard@B / Klorin au @BPUR@B au @BAquatabs@B?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE HOW OFTEN SHE USES WATERGUARD / BOTTLED CHLORINE OR PUR
           @/@/YOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO TELL YOU HOW OFTEN SHE USES WATERGUARD / BOTTLED CHLORINE OR PUR@R"
           : (EVERY "Every time I drink water",
              DAY "Once or more per day",
              WEEK "Once or more a week",
              MONTH "Once a month or more",
              NEVER "Never"), DK, RF}
    C1009Ba "When did you last treat your drinking water with @BWaterGuard@B / bottled Chlorine or @BPUR@B or @BAquatabs@B?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE WHEN WAS THE LAST TIME SHE TREATED HER WATER OR DID ANYTHING TO MAKE IT LESS CLOUDY@R"
            "Ni lini mwisho ulitibu maji yako ya kunywa kwa kutumia @BWaterGuard@B / Klorin au @BPUR@B au @BAquatabs@B?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / NOT SURE WHEN WAS THE LAST TIME SHE TREATED HER WATER OR DID ANYTHING TO MAKE IT LESS CLOUDY@R"
            : TWhen, DK
    C1009A1 "May I see the bottle / sachet?
            @/@/(@BWaterGuard@B, @BPUR@B, @BAquatabs@B or any other brand)?"
            "Je waweza kunionyesha chupa au karatasi ya @BWaterGuard@B / Klorin au @BPUR@B au @BAquatabs@B?"
            : (WATERGUARD_HOUSEHOLD "WATERGUARD OR OTHER BOTTLED CHLORINE PRODUCT, OBSERVED IN HOUSEHOLD",
               WATERGUARD_COMPOUND "WATERGUARD OR OTHER BOTTLED CHLORINE PRODUCT, OBSERVED IN COMPOUND",
               PUR_HOUSEHOLD "PUR, OBSERVED IN HOUSEHOLD",
               PUR_COMPOUND "PUR, OBSERVED IN COMPOUND",
               NOT_OBSERVED "NOT OBSERVED")
    C1009A1A "Where do you get @BWaterGuard@B / bottled Chlorine and or @BPUR@B or @BAquatabs@B from?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE SHE GOT WATERGUARD / BOTTLED CHLORINE OR PUR@R"
             "Je wewe hupata wapi @BWaterGuard@B / Klorin au @BPUR@B au @BAquatabs@B?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE SHE GOT WATERGUARD / BOTTLED CHLORINE OR PUR@R"
             : SET [4] OF (OAF "Chlorine from @BOne Acre Fund@B (@BOAF@B)",
                           SOMEONE "Chlorine from someone else",
                           OWN "Purchase on own",
                           OTHER "Other"), DK
    C1009A1A_else "Specify person who provided Chlorine:" : STRING [100]
    C1009A1A_oth "Specify other source of water treatment product:" : STRING [30]

AUXFIELDS
    aux_hhms "@GHOUSEHOLD MICROBIOLOGICAL SAMPLE@G" : (ENTER), EMPTY
    aux_W1017 "@GHOUSEHOLD SAMPLE COLLECTED (DD / MM / YYYY, HH:MM)@G" : (ENTER), EMPTY
    aux_clust "@RWRITE THE CLUSTER / HOUSEHOLD ID and “@R@BSW@B@R” VERY CLEARLY ON THE WHIRLPACK BEFORE PROCEEDING@R" : (ENTER)
    aux_sour "@RREMEMBER TO TAKE SOURCE WATER SAMPLE AT END OF SURVEY IF APPLICABLE@R" : (ENTER)
    aux_rcts "@GRESIDUAL CHLORINE TEST SAMPLE@G
             @/@/@R@BNOTE!@B OBTAIN WATER SAMPLE FOR CHLORINE ANALYSIS FROM ALL HOUSEHOLDS (USE 3 15mL TUBES ).
             @/@/@BINSTRUCTIONS:@B TEST FOR CHLORINE AFTER SURVEY HAS ENDED AND YOU HAVE LEFT COMPOUND
             @/IF THE RESPONDENT REPORTED TREATING WITH CHLORINE OR HAS PIPED WATER.@R"
             : (ENTER)

LAYOUT
    BEFORE aux_hhms NEWPAGE
    BEFORE aux_rcts NEWPAGE
RULES
    IF (BC1003.C1003_1 = YES) THEN
        C1001A
        IF NOT ((C1001A = DO_NOT_STORE) OR (C1001A = DK)) THEN
            C1001B
            IF (C1001B = OTHER) THEN
                C1001B_oth
            ENDIF
        ENDIF
        C1004
        IF (HOURS IN C1004) THEN
            C1004_hr
        ENDIF
        IF (DAYS IN C1004) THEN
            C1004_day
        ENDIF
        IF (WEEKS IN C1004) THEN
            C1004_wk
        ENDIF
        C1023
        IF (C1023 = SURFACE_WATER) THEN
            C1023a
        ENDIF
        IF (C1023 = OTHER) THEN
            C1023_oth
        ENDIF
        C1005
        IF (C1005 = YES) THEN
            C1006
            C1006a
            IF (HOURS IN C1006a) THEN
                C1006a_hr
            ENDIF
            IF (DAYS IN C1006a) THEN
                C1006a_day
            ENDIF
            IF (WEEKS IN C1006a) THEN
                C1006a_wk
            ENDIF
            aux_hhms
            C1014
            IF (C1014 = YES) THEN
                aux_W1017
                TW1017
                W1017_time
                CHECK
                    (LEN (W1017_time) > 3) "@R@BERROR!@B
                                           @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!@R"
                CHECK
                    (VAL (SUBSTRING (W1017_time, 1, 2)) < 24) "@R@BERROR!@B
                                                              @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
                CHECK
                    (VAL (SUBSTRING (W1017_time, 3, 4)) < 60) "@R@BERROR!@B
                                                              @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
                W1017A
                aux_clust
                aux_sour
            ENDIF
            aux_rcts
            C1009
            SIGNAL
                (NOT (DISPENSER IN C1006) OR (DISPENSER IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BChlorine dispenser@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (WATERGUARD IN C1006) OR (WATERGUARD IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BWaterGuard / bottled Chlorine@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (BOIL IN C1006) OR (BOIL IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BBoil@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (SIEVE IN C1006) OR (SIEVE IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BSieve it through cloth or other material@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (OTHER IN C1006) OR (OTHER IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BOther type of water filter (ceramic, sand, composite)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (SODIS IN C1006) OR (SODIS IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BSOlar DISinfection (SODIS)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (SETTLE IN C1006) OR (SETTLE IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BLet it stand and settle@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (BIOSAND IN C1006) OR (BIOSAND IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BBiosand filter@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (FILTER IN C1006) OR (FILTER IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BLifeStraw family filter (distributed by Vestergaard Frandsen)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (ALUM IN C1006) OR (ALUM IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BCoagulant (i.e. Alum)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (PUR IN C1006) OR (PUR IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BPUR (Flocculant + disinfectant)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (AQUATAB IN C1006) OR (AQUATAB IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BAquatabs@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (CHLORINE IN C1006) OR (CHLORINE IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BWater source treated with Chlorine@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            IF (WATERGUARD IN C1009) OR (PUR IN C1009) OR (AQUATAB IN C1009) THEN
                C1009A
                {C1009B}
                C1009Ba
                C1009A1
                C1009A1A
                IF (SOMEONE IN C1009A1A) THEN
                    C1009A1A_else
                ENDIF
                IF (OTHER IN C1009A1A) THEN
                    C1009A1A_oth
                ENDIF
            ENDIF
        ELSE
            C1007
            IF (C1007 = YES) THEN
                C1008
                aux_hhms
                C1014
                IF (C1014 = YES) THEN
                    aux_W1017
                    TW1017
                    W1017_time
                    CHECK
                        (LEN (W1017_time) > 3) "@R@BERROR!@B
                                               @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!@R"
                    CHECK
                        (VAL (SUBSTRING (W1017_time, 1, 2)) < 24) "@R@BERROR!@B
                                                                  @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
                    CHECK
                        (VAL (SUBSTRING (W1017_time, 3, 4)) < 60) "@R@BERROR!@B
                                                                  @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
                    W1017A
                    aux_clust
                    aux_sour
                ENDIF
                aux_rcts
                C1009
                SIGNAL
                    (NOT (DISPENSER IN C1006) OR (DISPENSER IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BChlorine dispenser@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (WATERGUARD IN C1006) OR (WATERGUARD IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BWaterGuard / bottled Chlorine@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (BOIL IN C1006) OR (BOIL IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BBoil@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (SIEVE IN C1006) OR (SIEVE IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BSieve it through cloth or other material@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (OTHER IN C1006) OR (OTHER IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BOther type of water filter (ceramic, sand, composite)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (SODIS IN C1006) OR (SODIS IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BSOlar DISinfection (SODIS)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (SETTLE IN C1006) OR (SETTLE IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BLet it stand and settle@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (BIOSAND IN C1006) OR (BIOSAND IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BBiosand filter@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (FILTER IN C1006) OR (FILTER IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BLifeStraw family filter (distributed by Vestergaard Frandsen)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (ALUM IN C1006) OR (ALUM IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BCoagulant (i.e. Alum)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (PUR IN C1006) OR (PUR IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BPUR (Flocculant + disinfectant)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (AQUATAB IN C1006) OR (AQUATAB IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BAquatabs@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                SIGNAL
                    (NOT (CHLORINE IN C1006) OR (CHLORINE IN C1009))
                    "@G@BALERT!@B
                    @/@/The answer option @G@BWater source treated with Chlorine@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
                IF (WATERGUARD IN C1009) OR (PUR IN C1009) OR (AQUATAB IN C1009) THEN
                    C1009A
                    {C1009B}
                    C1009Ba
                    C1009A1
                    C1009A1A
                    IF (SOMEONE IN C1009A1A) THEN
                        C1009A1A_else
                    ENDIF
                    IF (OTHER IN C1009A1A) THEN
                        C1009A1A_oth
                    ENDIF
                ENDIF
            ELSE
                aux_hhms
                C1014
                W1014A
                IF (C1014 = YES) THEN
                    aux_W1017
                    TW1017
                    W1017_time
                    CHECK
                        (LEN (W1017_time) > 3) "@R@BERROR!@B
                                               @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!@R"
                    CHECK
                        (VAL (SUBSTRING (W1017_time, 1, 2)) < 24) "@R@BERROR!@B
                                                                  @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
                    CHECK
                        (VAL (SUBSTRING (W1017_time, 3, 4)) < 60) "@R@BERROR!@B
                                                                  @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
                    W1017A
                    aux_clust
                    aux_sour
                ENDIF
                aux_rcts
            ENDIF
        ENDIF
    ELSE
        C1007
        IF (C1007 = YES) THEN
            C1008
            aux_hhms
            C1014
            IF (C1014 = YES) THEN
                aux_W1017
                TW1017
                W1017_time
                CHECK
                    (LEN (W1017_time) > 3) "@R@BERROR!@B
                                           @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!@R"
                CHECK
                    (VAL (SUBSTRING (W1017_time, 1, 2)) < 24) "@R@BERROR!@B
                                                              @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
                CHECK
                    (VAL (SUBSTRING (W1017_time, 3, 4)) < 60) "@R@BERROR!@B
                                                              @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
                W1017A
                aux_clust
                aux_sour
            ENDIF
            aux_rcts
            C1009
            SIGNAL
                (NOT (DISPENSER IN C1006) OR (DISPENSER IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BChlorine dispenser@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (WATERGUARD IN C1006) OR (WATERGUARD IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BWaterGuard / bottled Chlorine@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (BOIL IN C1006) OR (BOIL IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BBoil@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (SIEVE IN C1006) OR (SIEVE IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BSieve it through cloth or other material@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (OTHER IN C1006) OR (OTHER IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BOther type of water filter (ceramic, sand, composite)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (SODIS IN C1006) OR (SODIS IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BSOlar DISinfection (SODIS)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (SETTLE IN C1006) OR (SETTLE IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BLet it stand and settle@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (BIOSAND IN C1006) OR (BIOSAND IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BBiosand filter@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (FILTER IN C1006) OR (FILTER IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BLifeStraw family filter (distributed by Vestergaard Frandsen)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (ALUM IN C1006) OR (ALUM IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BCoagulant (i.e. Alum)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (PUR IN C1006) OR (PUR IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BPUR (Flocculant + disinfectant)@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (AQUATAB IN C1006) OR (AQUATAB IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BAquatabs@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            SIGNAL
                (NOT (CHLORINE IN C1006) OR (CHLORINE IN C1009))
                "@G@BALERT!@B
                @/@/The answer option @G@BWater source treated with Chlorine@B@G was selected in question @BC1006@B and not selected here in @BC1009@B.@G"
            IF (WATERGUARD IN C1009) OR (PUR IN C1009) OR (AQUATAB IN C1009) THEN
                C1009A
                {C1009B}
                C1009Ba
                C1009A1
                C1009A1A
                IF (SOMEONE IN C1009A1A) THEN
                    C1009A1A_else
                ENDIF
                IF (OTHER IN C1009A1A) THEN
                    C1009A1A_oth
                ENDIF
            ENDIF
        ELSE
            aux_hhms
            C1014
            IF (C1014 = YES) THEN
                aux_W1017
                TW1017
                W1017_time
                CHECK
                    (LEN (W1017_time) > 3) "@R@BERROR!@B
                                           @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!@R"
                CHECK
                    (VAL (SUBSTRING (W1017_time, 1, 2)) < 24) "@R@BERROR!@B
                                                              @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
                CHECK
                    (VAL (SUBSTRING (W1017_time, 3, 4)) < 60) "@R@BERROR!@B
                                                              @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
                W1017A
                aux_clust
                aux_sour
            ENDIF
        aux_rcts
        ENDIF
    ENDIF
ENDBLOCK
