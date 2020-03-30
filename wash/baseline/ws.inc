BLOCK modws

{GPS COORDINATES BLOCK}
BLOCK BlkWS6
FIELDS
    WS6_GPSN "Northerly Coordinates:" : TNCoordinate
    WS6_GPSE "Easterly Coordinates:" : TECoordinate
RULES
    WS6_GPSN
    IF NOT (LEN (WS6_GPSN) = 7) THEN
        ERROR "@R@BERROR!@B
              @/@/The @BNortherly Coordinate@B entered as @R@B^WS6_GPSN@B@R is @Ulower@U than the minimum number of digits required!
              @/@/Please check your digits and try again.@R"
    ENDIF
    CHECK
        (SUBSTRING (WS6_GPSN, 1, 2) = '00') "@R@BERROR!@B
                                            @/@/The @BNortherly Coordinate@B entered as @R@B^WS6_GPSN@B@R does not @Ubegin@U with the values @B00@B!
                                            @/@/Please check your entry and try again.@R"
    WS6_GPSE
    IF NOT (LEN (WS6_GPSE) = 8) THEN
        ERROR "@R@BERROR!@B
              @/@/The @BEasterly Coordinate@B entered as @R@B^WS6_GPSE@B@R is @Ulower@U than the minimum number of digits required!
              @/@/Please check your digits and try again.@R"
    ENDIF
    CHECK
        (SUBSTRING (WS6_GPSE, 1, 3) = '034') OR (SUBSTRING (WS6_GPSE, 1, 3) = '035') "@R@BERROR!@B
                                                                                     @/@/The @BEasterly Coordinate@B entered as @R@B^WS6_GPSE@B@R does not @Ubegin@U with the values @B034@B or @B035@B!
                                                                                     @/@/Please check your entry and try again.@R"
ENDBLOCK

{DATE BLOCK}
BLOCK BlkWS8
FIELDS
    WS8_day "Specify @BDAY@B:"
            : 0..31
    WS8_mon "Specify @BMONTH@B:"
            : 1..12
    WS8_yea "Specify @BYEAR@B:"
            : 2012..2014
RULES
    WS8_day:= C101.DAY
    WS8_mon:= C101.MONTH
    WS8_yea:= C101.YEAR
    {IF (WS8_yea > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/The @Byear@B entered as @R@B^WS8_yea@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (WS8_yea = sdatestamp.YEAR) AND (WS8_mon > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bmonth@B entered as @R@B^WS8_mon@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSEIF (WS8_yea = sdatestamp.YEAR) AND (WS8_mon = sdatestamp.MONTH) AND (WS8_day > sdatestamp.DAY) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bday@B entered as @R@B^WS8_day@B@R is @I@Ubeyond@U@I the current day!
                  @/@/Please check your entry and try again.@R"
        ENDIF
    ENDIF}
ENDBLOCK

{DATE TABLE}
TABLE TblWS8
FIELDS
    BWS8 : BlkWS8
RULES
    BWS8
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    WS01A "DID YOU VISIT WATER SOURCE?" : TYesNo
    WS01B "IF NO, WHY NOT?"
          : (REFUSE "RESPONDENT REFUSED",
             VISIT "ANOTHER SURVEY FO VISITED",
             CUP "NO WATER PROVIDED IN A CUP",
             ANOTHER "SOURCE IS IN ANOTHER VILLAGE",
             OTHER "OTHER")
    WS01B_oth "Specify other:" : STRING [50]
    WS01 "RECORD HOW LONG IT TAKES TO WALK FROM HOUSEHOLD DOORSTEP TO WATER SOURCE.
         @/@/@RUSE PHONE STOPWATCH.
         @/@/STOP TIMER WHILE DOING CHLORINE ANALYSIS.@R"
         : TStopWatch
    WS1 "@RIF YOU ARE TAKING A SOURCE WATER SAMPLE ASK:@R
        @/@/May I collect a small sample of your source water?
        @/@/@RNOTE DIRECTIONS FOR SAMPLING AFTER HOUSEHOLD INTERVIEW IS COMPLETE. INVOLVE GUIDE TO CONFIRM CORRECT LOCATION OF SOURCE.@R"
        "@RIF YOU ARE TAKING A SOURCE WATER SAMPLE ASK:@R
        @/@/Je, ninaweza kuchukua sampuli ya maji yako?
        @/@/@RNOTE DIRECTIONS FOR SAMPLING AFTER HOUSEHOLD INTERVIEW IS COMPLETE. INVOLVE GUIDE TO CONFIRM CORRECT LOCATION OF SOURCE.@R"
        : (YES "YES, SAMPLE COLLECTED",
           NO "NO, REFUSED",
           UNABLE "NO, UNABLE TO COLLECT")
    WS2 "WHAT IS THE WATER SOURCE NAME?" : STRING [30]
    WS3 "WATER SOURCE NAME - ALTERNATE 1
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE ALTERNATE NAME IS NOT KNOWN OR IF IT IS NOT APPLICABLE@R"
        : STRING [30], DK
    WS4 "WATER SOURCE NAME - ALTERNATE 2
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE ALTERNATE NAME IS NOT KNOWN OR IF IT IS NOT APPLICABLE@R"
        : STRING [30], DK
    WS5 "@R@B[TO BE COMPLETED AT WATER SOURCE]@B@R
        @/@/WATER SOURCE ID:
        @/@/COPY FROM WATER SOURCE LIST
        @/@/IF NOT ON LIST, ASK TEAM LEADER FOR A NEW ID BEFORE COLLECTING SAMPLE"
        : 100000..999999
    WS6 "For the GPS ID, USE @BWB@B OR @BK@B?" : (WB, K)
    WS6_GPSWB "@BWB@B GPS ID:" : TGPSIDWB
    WS6_GPSK "@BK@B GPS ID:" : TGPSIDK
    WS6WPID "Waypoint ID:" : 1..999
    BWS6 : BlkWS6
    W1014B "Is today your assigned day for taking duplicates?
           @/@/@RUSE THE LARGE WHIRLPAK BAGS@R"
           : TYesNo  
    TWS8 : TblWS8
    WS8_dat "Date captured as @B^TWS8.BWS8.WS8_day/^TWS8.BWS8.WS8_mon/^TWS8.BWS8.WS8_yea@B" : (ENTER)
    WS8_tim : T24HRClock
    WS9 "UNIQUE BAG ID" : 10000..99999
    WS10 "Confirm type of water source:"
         : (BOREHOLE (1) "Borehole",
            UNPROTECT_SPRING (3) "Unprotected spring",
            PROTECT_SPRING	(4) "Protected spring (has concrete lining)",
            UNPROTECT_WELL	(5) "Unprotected dug well",
            PROTECT_WELL (6) "Protected dug well (has concrete lining)",
            RAINWATER (7) "Rainwater collection",
            CART (8) "Cart with small tank / drum",
            TANKER_TRUCK (9) "Tanker truck",
            SURFACE_WATER (10) "Surface water (river, dam, lake, pond, stream, etc.)",
            PIPED_DWELL (11) "Piped water into dwelling",
            PIPED_YARD (12) "Piped water into yard / plot",
            OTHER (77) "Other")
    WS11 "What type of surface water are you sampling?"
         : (RIVER "River",
            LAKE "Lake / Pond",
            STREAM "Stream",
            OTHER "Other")
    WS11_oth "Specify other surface water that you are sampling:" : STRING [30]
    WS12 "Describe other type of water source:" : STRING [30]
    WS13 "Describe method used to collect water from the water source:"
         : (BUCKET "Dip a bucket / container & pour into whirlpak",
            TAP "Directly from tap / pipe / borewell",
            WHIRLPAK "Dip whirlpak into source",
            OTHER "Other")
    WS13_oth "Specify other method used to collect water:" : STRING [30]
    WS7 "@BOBSERVE WATER:@B
        @/@/WHAT COLOR IS THE WATER AFTER IT IS IN WHIRLPACK?"
        : (CLEAR,
           BROWN,
           MILK "MILKY / WHITE",
           OTHER)
    WS7_oth "Specify other color that the water had:" : STRING [30]
    WS14 "@BOBSERVE:@B
         @/@/IS THE WELL / SPRING COVERED?"
         : (FULL "YES, FULLY COVERED",
            PARTIAL "YES, PARTIALLY COVERED",
            NO)
    WS15 "@BOBSERVE:@B
         @/@/What material is the well / spring lined with?"
         : (CONCRETE,
            TIRES,
            NOTHING "NOTHING / DIRT",
            OTHER)
    WS15_oth "Specify other lining material:" : STRING [30]
    WS16 "@BOBSERVE:@B
         @/@/Are there feces near the source (within 5 meters)?"
         : (HUMAN "YES, HUMAN FECES",
            ANIMAL "YES, ANIMAL FECES",
            BOTH "YES, BOTH HUMAN AND ANIMAL FECES",
            UNKNOWN "YES, UNKNOWN FECES",
            NO)
    WS17 "@BOBSERVE:@B
         @/@/Are there @Banimals@B near the source (within 5 meters)?"
         : TYesNo
    WS17_anim "Which animals are near the source?"
              : SET [8] OF (CATTLE "CATTLE" "NG'OMBE",
                            DONKEYS "DONKEYS" "PUNDA",
                            GOATS "GOATS" "MBUZI",
                            SHEEP "SHEEP" "KONDOO",
                            POULTRY "POULTRY" "NDEGE",
                            PIGS "PIGS" "NGURUWE",
                            DOGS "DOGS" "MBWA",
                            OTHER)
    WS17_oth "Specify other animals:" : STRING [30]

AUXFIELDS
    aux_ws "@G@BSOURCE WATER SAMPLE COLLECTION@B@G" : (ENTER), EMPTY
    aux_coll "@RPAIRED SOURCE WATER SAMPLE FOR HH WATER SAMPLE @BCOLLECT WATER FROM SOURCE WHERE THE WATER BROUGHT IN CUP (C.1003) CAME FROM@R" : (ENTER), EMPTY
    aux_WS8 "@GSOURCE SAMPLE COLLECTED (MM / DD / YYYY, HH:MM)@G" : (ENTER), EMPTY
    aux_WP "@R@B** WRITE THE SOURCE ID AND WATER SOURCE TYPE ABBREVIATION VERY CLEARLY ON THE WHIRLPACK BEFORE PROCEEDING **@B
           @/@/BAG SHOULD BE LABELED AS: @BWATER SOURCE ID@B
           @/@/TYPE.
           @/Where TYPE  =
           @/@BB@B = Borehole
           @/@BSP@B = Spring
           @/@BW@B = Dug well
           @/@BP@B = Piped water
           @/@BR@B = Rainwater
           @/@BSF@B = Surface water
           @/@BO@B = Other@R"
           : (ENTER), EMPTY

LAYOUT
    BEFORE aux_ws NEWPAGE
    AFTER aux_ws NEWPAGE

    AFTER aux_coll

    BEFORE aux_WP NEWPAGE
    AFTER aux_WP NEWPAGE

RULES
    aux_ws
    {BEGIN}
    WS01A
    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF ((stimestamp = EMPTY) AND (WS01A = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    IF ((stimestamp <> EMPTY) AND (sdatestamp = EMPTY)) THEN
        sdatestamp:= SYSDATE
    ENDIF

    IF (WS01A = YES) THEN
        aux_coll
        WS01
        CHECK
            (LEN (WS01) = 4) "@R@BERROR!@B
                             @/@/Incomplete time entry!
                             @/@/Restrict your input to the format @B(mm:ss) [00-59]:[00-59]@B.
                             @/@/Prefix your input with @B0@B if your recording is only one digit, or @B00@B if no entry.
                             @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (WS01, 1, 2)) < 60)
                "@R@BERROR!@B
                @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
                @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
                @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (WS01, 3, 4)) < 60)
                "@R@BERROR!@B
                @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
                @/@/It is also neither the acceptable special codes @B77@B or @B99@B!
                @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B.
                @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (WS01, 1, 2)) < 60) OR (VAL (SUBSTRING (WS01, 3, 4)) > 59)
                "@R@BERROR!@B
                @/@/The @Uminutes@U time entry is not in the range between @B0@B and @B59@B!
                @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
                @/@/or the @Bcomplete@B special codes @B77:77@B or @B99:99@B.
                @/@/Please check your entry and try again.@R"
        CHECK
            (VAL (SUBSTRING (WS01, 1, 2)) > 59) OR (VAL (SUBSTRING (WS01, 3, 4)) < 60)
                "@R@BERROR!@B
                @/@/The @Useconds@U time entry is not in the range between @B0@B and @B59@B!
                @/@/Restrict your @Bcomplete@B time input to the format @B(mm:ss) [00-59]:[00-59]@B
                @/@/or the @Bcomplete@B special codes @B77:77@B or @B99:99@B.
                @/@/Please check your entry and try again.@R"
        SIGNAL
            (VAL (SUBSTRING (WS01, 1, 2)) < 6) AND (VAL (SUBSTRING (WS01, 1, 2)) <> 5) OR (VAL (SUBSTRING (WS01, 3, 4)) < 01)
                "@G@BALERT!@B
                @/@/Does it really take over @B5 minutes@B to walk from household doorstep to watersource?
                @/@/Suppress if entry is correct.@G"
        WS1
        IF (WS1 = YES) THEN
            WS2
            WS3
            WS4
            WS5
            WS6
            IF (WS6 = WB) THEN
                WS6_GPSWB
            ELSE
                WS6_GPSK
            ENDIF
            WS6WPID
            BWS6
            W1014B
            aux_WS8
            TWS8
            WS8_dat
            WS8_tim
            CHECK
                (LEN (WS8_tim) > 3) "@R@BERROR!@B
                                    @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!
                                    @/@/Prefix your input with @B0@B if your hour recording has only one digit entry.@R"
            CHECK
                (VAL (SUBSTRING (WS8_tim, 1, 2)) < 24) "@R@BERROR!@B
                                                       @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
            CHECK
                (VAL (SUBSTRING (WS8_tim, 3, 4)) < 60) "@R@BERROR!@B
                                                       @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
            WS9
            WS10
            IF (WS10 = OTHER) THEN
                WS12
            ELSEIF (WS10 = SURFACE_WATER) THEN
                WS11
            ENDIF
            aux_WP
            WS13
            IF (WS13 = OTHER) THEN
                WS13_oth
            ENDIF
            WS7
            IF (WS7 = OTHER) THEN
                WS7_oth
            ENDIF
            IF (WS10 = UNPROTECT_SPRING) OR (WS10 = PROTECT_SPRING) OR (WS10 = UNPROTECT_WELL) OR (WS10 = PROTECT_WELL) THEN
                WS14
            ENDIF
            WS15
            IF (WS15 = OTHER) THEN
                WS15_oth
            ENDIF
            WS16
            WS17
            IF (WS17 = YES) THEN
                WS17_anim
                IF (OTHER IN WS17_anim) THEN
                    WS17_oth
                ENDIF
            ENDIF
        ENDIF
    ELSE
        WS01B
        IF (WS01B = OTHER) THEN
            WS01B_oth
        ENDIF
    ENDIF
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (WS1 = NO)) OR ((etimestamp = EMPTY) AND (WS17 = NO))
    OR ((etimestamp = EMPTY) AND NOT (OTHER IN WS17_anim)) OR ((etimestamp = EMPTY) AND (WS17_oth = RESPONSE))
    OR ((etimestamp = EMPTY) AND NOT (WS01B = OTHER)) OR ((etimestamp = EMPTY) AND (WS01B_oth = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
