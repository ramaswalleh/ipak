BLOCK modrcst

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    test "DID RESPONDENT REPORT TREATING WATER WITH CHLORINE?" : TYesNo
    C1015a "TEST FOR @B@UFREE RESIDUAL CHLORINE ONCE YOU HAVE LEFT THE HOUSEHOLD AFTER SURVEY HAS ENDED@B@U
           @/@/@RLEVEL OF @BFREE@B CHLORINE @I(mg / L)@I
           @/@/@BMARK:@B @R@B“99.9”@B@R IF COULD NOT TEST@R"
           : REAL [4]
    C1015b "TEST FOR @B@UTOTAL RESIDUAL CHLORINE ONCE YOU HAVE LEFT THE HOUSEHOLD AFTER SURVEY HAS ENDED@B@U
           @/@/@RLEVEL OF @BFREE@B CHLORINE @I(mg / L)@I
           @/@/@BMARK:@B @R@B“99.9”@B@R IF COULD NOT TEST@R"
           : REAL [4]
    C1015c	"Record time chlorine was measured.
            @/@/@RUse the 24Hr clock system.@R" : T24HRClock

AUXFIELDS
    aux_rcst "@G@BRESIDUAL CHLORINE SAMPLE AND TEST@B@G" : (ENTER), EMPTY
    aux_YesTest "@RTEST ONCE YOU HAVE LEFT THE RESPONDENTS COMPOUND.@R" : (ENTER)
    aux_NoTest "@RDO NOT TEST WATER. DUMP OUT.@R" : (ENTER)
    aux_timestamp : TIMETYPE
LAYOUT
    BEFORE aux_rcst NEWPAGE
    AFTER aux_rcst NEWPAGE

RULES
    aux_rcst
    {START TIME STAMP AND DATE STAMP}
    stimestamp.KEEP
    aux_timestamp:= SYSTIME
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    test
    IF ((stimestamp = EMPTY) AND (test = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    IF (test = YES) THEN
        aux_YesTest
        C1015a
        C1015b
        C1015c
        CHECK
            (LEN (C1015c) > 3) "@R@BERROR!@B
                               @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!@R"
        CHECK
            (VAL (SUBSTRING (C1015c, 1, 2)) < 24) "@R@BERROR!@B
                                                  @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
        CHECK
            (VAL (SUBSTRING (C1015c, 3, 4)) < 60) "@R@BERROR!@B
                                                  @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
    ELSEIF (test = NO) THEN
        aux_NoTest
    ENDIF
    {FINISH}

    {END TIME STAMP AND DATE STAMP}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (C1015c = RESPONSE)) OR ((etimestamp = EMPTY) AND (test = NO)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
