BLOCK modc8_cont

{TYPES}
TYPE
    TAnimal = (POULTRY "POULTRY (CHICKEN, DUCK, PIGEON)",
               COW "COW / BUFFALO",
               GOAT "GOAT / SHEEP",
               PIG,
               DOG "DOG / CAT",
               OTHER (8),
               NO (9) "NO FECES OBSERVED",
               NA (99) "Could not observe")


FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    C826 "@BOBSERVE:
         @/@/@UHUMAN FECES@U@B PRESENT @UWITHIN THE COMPOUND@U THAT COULD BE CONSIDERED OPEN DEFECATION.
         @/@/@ROBSERVE AND COUNT THE PILES OF HUMAN FECES AND WRITE THE APPROPRIATE NUMBER.
         @/@/@BCODE:@B @R@B“55”@B@R IF @BTOO NUMEROUS TO COUNT (MORE THAN 10 PILES)@B.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT TELL / CANNOT OBSERVE HUMAN FECES WITHIN THE COMPOUND@R"
         : 0..55, DK
    C827 "@BOBSERVE:
         @/@/@UANIMAL FECES@U@B PRESENT @UWITHIN THE COMPOUND@U."
         : SET [8] OF TAnimal
    C827_oth "Specify other animal feces within the compound:" : STRING [30]
    C828 "@BOBSERVE:
         @/@/@UHUMAN FECES@U@B PRESENT @UIN THE AREA@U WHERE THE PREGNANT MOTHER @USPENDS MOST OF THE TIME@U THAT COULD BE CONSIDERED OPEN DEFECATION.
         @/@/@RPROBE AND IDENTIFY WHERE THE @UPREGNANT MOTHER@U SPENDS THE MOST TIME
         @/@/OBSERVE AND COUNT THE PILES OF HUMAN FECES AND WRITE THE APPROPRIATE NUMBER.
         @/@/@BCODE:@B @R@B“55”@B@R IF @BTOO NUMEROUS TO COUNT (MORE THAN 10 PILES)@B.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT TELL / CANNOT OBSERVE HUMAN FECES PRESENT IN THE AREA WHERE THE PREGNANT MOTHER SPENDS MOST OF THE TIME@R"
         : 0..55, DK
    C829 "@BOBSERVE:
         @UANIMAL FECES@U@B PRESENT @UIN THE AREA@U WHERE THE PREGNANT MOTHER @USPENDS MOST OF THE TIME@U.
         @/@/@RPROBE AND IDENTIFY WHERE THE @UPREGNANT MOTHER@U SPENDS THE MOST TIME@R"
         : SET [8] OF TAnimal
    C829_oth "Specify other animal feces within the compound:" : STRING [30]
    C830 "@BOBSERVE:
         @/@/@UHUMAN FECES@U@B PRESENT @UBEHIND THE HOUSE@U THAT COULD BE CONSIDERED OPEN DEFECATION.
         @/@/@ROBSERVE AND COUNT THE PILES OF HUMAN FECES AND WRITE THE APPROPRIATE NUMBER.
         @/@/@BCODE:@B @R@B“55”@B@R IF @BTOO NUMEROUS TO COUNT (MORE THAN 10 PILES)@B.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT TELL / CANNOT OBSERVE HUMAN FECES PRESENT BEHIND THE HOUSE@R"
         : 0..55, DK
    C831 "@BOBSERVE:
         @/@/@UANIMAL FECES@U@B PRESENT @UBEHIND THE HOUSE@U."
         : SET [8] OF TAnimal
    C831_oth "Specify other animal feces within the compound:" : STRING [30]
LOCALS
    c8_c : INTEGER [1]
AUXFIELDS
    aux_c8_cont "@G@BC.8 CONT'D:@|FECES OBSERVED IN AND AROUND THE COMPOUND@B@G" : (ENTER), EMPTY
    aux_obs "@RTHIS OBSERVATION MUST BE COMPLETED BEFORE YOU LEAVE THE COMPOUND.
            @/@/TRY AND DO IT WITHOUT THE RESPONDENT NOTICING.
            @/@/BEFORE YOU BEGIN THE OBSERVATION, ASK THE RESPONDENT TO IDENTIFY THE SHARED COMPOUND AREA AND THE PRIVATE AREA AROUND THE HOUSEHOLD STRUCTURE.
            @/@/MAKE ALL OBSERVATIONS ACCORDINGLY.@R"
            : (ENTER), EMPTY

LAYOUT
    BEFORE aux_c8_cont NEWPAGE
    AFTER aux_c8_cont NEWPAGE

    AFTER aux_obs NEWPAGE
RULES
    aux_c8_cont
    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    IF ((stimestamp = EMPTY) AND (C826 = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    aux_obs
    C826
    C827
    IF (NO IN C827) THEN
        FOR c8_c:= 1 TO 8 DO
            IF (C827 [c8_c] = POULTRY) OR (C827 [c8_c] = COW) OR (C827 [c8_c] = GOAT) OR (C827 [c8_c] = PIG)
            OR (C827 [c8_c] = DOG) OR (C827 [c8_c] = OTHER) OR (C827 [c8_c] = NA) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BNO FECES OBSERVED@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ELSEIF (NA IN C827) THEN
        FOR c8_c:= 1 TO 8 DO
            IF (C827 [c8_c] = POULTRY) OR (C827 [c8_c] = COW) OR (C827 [c8_c] = GOAT) OR (C827 [c8_c] = PIG)
            OR (C827 [c8_c] = DOG) OR (C827 [c8_c] = OTHER) OR (C827 [c8_c] = NO) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BCould not observe@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ELSEIF (OTHER IN C827) THEN
        C827_oth
    ENDIF
    C828
    C829
    IF (NO IN C829) THEN
        FOR c8_c:= 1 TO 8 DO
            IF (C829 [c8_c] = POULTRY) OR (C829 [c8_c] = COW) OR (C829 [c8_c] = GOAT) OR (C829 [c8_c] = PIG)
            OR (C829 [c8_c] = DOG) OR (C829 [c8_c] = OTHER) OR (C829 [c8_c] = NA) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BNO FECES OBSERVED@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ELSEIF (NA IN C829) THEN
        FOR c8_c:= 1 TO 8 DO
            IF (C829 [c8_c] = POULTRY) OR (C829 [c8_c] = COW) OR (C829 [c8_c] = GOAT) OR (C829 [c8_c] = PIG)
            OR (C829 [c8_c] = DOG) OR (C829 [c8_c] = OTHER) OR (C829 [c8_c] = NO) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BCould not observe@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ELSEIF (OTHER IN C829) THEN
        C829_oth
    ENDIF
    C830
    C831
    IF (NO IN C831) THEN
        FOR c8_c:= 1 TO 8 DO
            IF (C831 [c8_c] = POULTRY) OR (C831 [c8_c] = COW) OR (C831 [c8_c] = GOAT) OR (C831 [c8_c] = PIG)
            OR (C831 [c8_c] = DOG) OR (C831 [c8_c] = OTHER) OR (C831 [c8_c] = NA) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BNO FECES OBSERVED@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ELSEIF (NA IN C831) THEN
        FOR c8_c:= 1 TO 8 DO
            IF (C831 [c8_c] = POULTRY) OR (C831 [c8_c] = COW) OR (C831 [c8_c] = GOAT) OR (C831 [c8_c] = PIG)
            OR (C831 [c8_c] = DOG) OR (C831 [c8_c] = OTHER) OR (C831 [c8_c] = NO) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BCould not observe@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ELSEIF (OTHER IN C831) THEN
        C831_oth
    ENDIF
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (C831_oth = RESPONSE)) OR ((etimestamp = EMPTY) AND (C831 = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
