BLOCK modc0
    EXTERNALS
        GetLocDetlC0 : GetLocationDetailsC0 ('..\ext\LocDetailC0')

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    C01A "Village ID:
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT KNOWN / NOT APPLICABLE@R"
         : TVillageID, DK
    C01 "Village name:
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE NAME IS NOT KNOW@R"
        : STRING [20], DK
    Clstid "Cluster ID:" : 11000..46000
    C02 "Household ID:" : THouseholdID

AUXFIELDS
    aux_c0 "@G@B@UCOMPOUND / HOUSEHOLD IDENTIFICATION@U@B@G" : (ENTER), EMPTY

LAYOUT
    BEFORE aux_c0 NEWPAGE
    AFTER aux_c0 NEWPAGE

RULES
    aux_c0

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
    C01A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
    CHECK
        (LEN (C01A) > 3) "@R@BERROR!@B
                         @/@/Please check that your @Bvillage ID@B entry has the @Ucorrect number of digits@U!@R"
    IF NOT (C01A = DK) THEN
        IF (C01A = RESPONSE) THEN
            IF GetLocDetlC0.SEARCH (C01A) THEN
                GetLocDetlC0.READ
                C01:= GetLocDetlC0.VILLAGENAME
            ELSE
                C01.KEEP
            ENDIF
        ENDIF
        C01.SHOW
    ENDIF
    Clstid
    C02:= hhid
    C02.SHOW
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (Clstid = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (etimestamp <> EMPTY) AND (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
