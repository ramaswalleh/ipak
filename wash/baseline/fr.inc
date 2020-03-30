{KITCHEN FLY RETRIEVAL BLOCK}
BLOCK modfr

BLOCK BlkFR13
FIELDS
    FR13B "@BTIME OF RETRIEVAL@B
          @/@/KITCHEN / FOOD PREPARATION" : T24HRClock
    FR13_fl "RECORD THE NUMBER OF FLIES COUNTED ON ALL STRIPS" : 0..999
    FR13_st "ABOUT HOW MANY METERS (STEPS) ARE THE STRIPS HUNG FROM THE KITCHEN?" : 0..99
RULES
    FR13B
    CHECK
        (LEN (FR13B) > 3) "@R@BERROR!@B
                          @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!
                          @/@/Prefix your input with @B0@B if your hour recording has only one digit entry.@R"
    CHECK
        (VAL (SUBSTRING (FR13B, 1, 2)) < 24) "@R@BERROR!@B
                                             @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
    CHECK
        (VAL (SUBSTRING (FR13B, 3, 4)) < 60) "@R@BERROR!@B
                                             @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
    FR13_fl
    SIGNAL
        (FR13_fl < 101) "@G@BALERT!@B
                       @/@/Are you sure there are more than @B100 flies@B counted on all strips?@G"
    FR13_st
    SIGNAL
        (FR13_st < 11) "@G@BALERT!@B
                      @/@/Are you sure there are more than @B10 meters@B betweeen the strips and the kitchen?@G"
ENDBLOCK

TABLE TblFR13
FIELDS
    BFR13 : BlkFR13
RULES
    BFR13
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    FR11 "When was the most recent time it rained?"
         "Je mvua ilinyesha lini mwisho hivi karibuni?"
         : (CURRENT "Currently raining",
            EARLY "Rained earlier today",
            YESTERDAY "Rained yesterday",
            DBY "Rained the day before yesterday",
            LAST "Rained in the last week",
            NOT_RAIN "Did not rain in the last week")
    FR12A "May I look inside your kitchen area?
          @BOBSERVE FLY ACTIVITY.@B
          @/@/ESTIMATE TOTAL NUMBER OF FLIES SEEN @UAT KITCHEN / FOOD PREPARATION AREA@U."
          "Je, ninaweza kutazama jikoni mwako?
          @BOBSERVE FLY ACTIVITY.@B
          @/@/ESTIMATE TOTAL NUMBER OF FLIES SEEN @UAT KITCHEN / FOOD PREPARATION AREA@U."
          : (NONE "NONE",
             LOW "LOW (1 - 5)",
             MODERATE "MODERATE (6 - 10)",
             HIGH "HIGH (> 10)",
             COULD_NOT (99) "COULD NOT OBSERVE")
    FR1B "@BOBSERVE:@B
         @/@/WAS FLY TAPE HUNG IN THE FOOD PREPARATION AREA / KITCHEN?"
         : TYesNo             
    TFR13 : TblFR13
    FR16 "@BOBSERVE:@B
         @/@/WAS THE FLY PAPER IN THE FOOD PREP AREA TAMPERED WITH OR DID IT FALL DOWN?"
         : TYesNo
    FR17A "OTHER OBSERVATION MADE
          @/@/@RYOU CAN LEAVE THIS FIELD BLANK IF NO OTHER OBSERVATION WAS MADE@R" : STRING [244], EMPTY
AUXFIELDS
    aux_fr "@R@BGO TO THE KITCHEN / FOOD PREPARATION AREA@B@R" : (ENTER), EMPTY
    aux_tape "@RRETRIEVE THE FLY TAPE LEFT BY THE PARASITE TEAM@R" : (ENTER), EMPTY
    aux_etimestamp : TIMETYPE

LAYOUT
    BEFORE aux_fr NEWPAGE
    AFTER aux_fr NEWPAGE

    BEFORE aux_tape NEWPAGE

RULES
    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    FR11
    IF ((stimestamp = EMPTY) AND (FR11 = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    aux_fr
    FR12A
    IF (sc.visit = YES) THEN
        IF (FR1B = YES) THEN
            aux_tape
            TFR13
            FR16
            FR17A
        ENDIF            
    ENDIF
    {FINISH}

    {END TIME AND DATE STAMPS}
    aux_etimestamp:= SYSTIME
    etimestamp.KEEP
    IF ((etimestamp <> aux_etimestamp) AND (FR17A = RESPONSE)) OR ((etimestamp <> aux_etimestamp) AND (TFR13.BFR13.FR13_st = RESPONSE))
    OR ((etimestamp <> aux_etimestamp) AND (FR16 = RESPONSE)) OR ((etimestamp <> aux_etimestamp) AND (FR17A = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
