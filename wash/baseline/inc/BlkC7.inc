{MOST OFTEN PLACE BLOCK}
BLOCK BlkC702
FIELDS
    C702a "@BOBSERVE:@B
          @/@/LOCATION OF HANDWASH PLACE:"
          : SET [5] OF TPlace
    C702b "@BOBSERVE:@B
          @/@/TYPE OF HANDWASH DEVICE:"
          : TDevice
    C702b_oth "Specify other type of handwashing device:" : STRING [30]
    C702c "@BOBSERVE:@B
          @/@/MATERIALS PRESENT:
          @/@/@RIF THERE IS NO SPECIFIC HANDWASH PLACE AND THE DEVICE IS A BASIN, NOTE WHICH MATERIALS ARE KEPT WITH THE BASIN / PITCHER.@R"
          : SET [7] OF TMaterial
    C702c_oth "Specify other type of materials present:" : STRING [30]
    C702d "@BOBSERVE:@B
          @/@/DISTANCE TO COOKING AREA:
          @/@/@RCOUNT STEPS, THEN CONVERT TO METERS. (MULTIPLY BY 10 AND DIVIDE BY YOUR NUMBER OF STEPS IN 10 m)
          @/@/IF NO SPECIFIC PLACE, MEASURE FROM WHERE BASIN / PITCHER WAS STORED.
          @/@/IF MEASUREMENT NOT POSSIBLE, CODE “@R@B88@B@R”.@R"
          : 0..997
    C702e "@BOBSERVE:@B
          @/@/DISTANCE TO LATRINE / PLACE OF DEFECATION:
          @/@/@RCOUNT STEPS, CONVERT TO METERS. (MULTIPLY BY 10 AND DIVIDE BY YOUR NUMBER OF STEPS IN 10 m)
          @/@/IF NO SPECIFIC PLACE, MEASURE FROM WHERE BASIN / PITCHER WAS STORED.
          @/@/IF MEASUREMENT NOT POSSIBLE OR IF NO LATRINE, CODE “@R@B88@B@R”.@R"
          : 0..997
LOCALS
    c702 : INTEGER
RULES
    C702a
    C702b
    IF (C702b = OTHER) THEN
        C702b_oth
    ENDIF
    C702c
    IF (NONE IN C702c) THEN
        FOR c702:= 1 TO 7 DO
            IF (C702c [c702] = WATER) OR (C702c [c702] = SCENTED) OR (C702c [c702] = UNSCENTED)
            OR (C702c [c702] = POWDERED) OR (C702c [c702] = SOAPY) OR (C702c [c702] = OTHER) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BNONE@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ENDIF
    IF (OTHER IN C702c) THEN
        C702c_oth
    ENDIF
    C702d
    SIGNAL
        ((C702d < 29) OR (C702d = 88))
            "@G@BALERT@B
            @/@/Are you sure the distance to the cooking area is greater than @B30 meters@B?@G"
    C702e
    SIGNAL
        ((C702e < 29) OR (C702e = 88))
            "@G@BALERT@B
            @/@/Are you sure the distance to the latrine is greater than @B30 meters@B?@G"
ENDBLOCK

{ANOTHER PLACE BLOCK}
BLOCK BlkC703
FIELDS
    C703a "@BOBSERVE:@B
          @/@/LOCATION OF OTHER HANDWASH PLACE:"
          : SET [5] OF TPlace
    C703b "@BOBSERVE:@B
          @/@/TYPE OF OTHER HANDWASH DEVICE:"
          : TDevice
    C703b_oth "Specify other type of handwashing device:" : STRING [30]
    C703c "@BOBSERVE:@B
          @/@/MATERIALS PRESENT:
          @/@/@RIF THERE IS NO SPECIFIC HANDWASH PLACE AND THE DEVICE IS A BASIN, NOTE WHICH MATERIALS ARE KEPT WITH THE BASIN / PITCHER.@R"
          : SET [7] OF TMaterial
    C703c_oth "Specify other type of materials present:" : STRING [30]
    C703d "@BOBSERVE:@B
          @/@/DISTANCE TO COOKING AREA:
          @/@/@RCOUNT STEPS, THEN CONVERT TO METERS.
          @/(MULTIPLY BY 10 AND DIVIDE BY YOUR NUMBER OF STEPS IN 10 m)
          @/@/IF NO SPECIFIC PLACE, MEASURE FROM WHERE BASIN / PITCHER WAS STORED.
          @/@/IF MEASUREMENT NOT POSSIBLE, CODE “@R@B88@B@R”.@R"
          : 0..997
    C703e "@BOBSERVE:@B
          @/@/DISTANCE TO LATRINE / PLACE OF DEFECATION:
          @/@/@RCOUNT STEPS, CONVERT TO METERS. (MULTIPLY BY 10 AND DIVIDE BY YOUR NUMBER OF STEPS IN 10 m)
          @/@/IF NO SPECIFIC PLACE, MEASURE FROM WHERE BASIN / PITCHER WAS STORED.
          @/@/IF MEASUREMENT NOT POSSIBLE OR IF NO LATRINE, CODE “@R@B88@B@R”.@R"
          : 0..997
LOCALS
    c703 : INTEGER
RULES
    C703a
    C703b
    IF (C703b = OTHER) THEN
        C703b_oth
    ENDIF
    C703c
    IF (NONE IN C703c) THEN
        FOR c703:= 1 TO 7 DO
            IF (C703c [c703] = WATER) OR (C703c [c703] = SCENTED) OR (C703c [c703] = UNSCENTED)
            OR (C703c [c703] = POWDERED) OR (C703c [c703] = SOAPY) OR (C703c [c703] = OTHER) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BNONE@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ENDIF
    IF (OTHER IN C703c) THEN
        C703c_oth
    ENDIF
    C703d
    SIGNAL
        ((C703d < 29) OR (C703d = 88))
            "@G@BALERT@B
            @/@/Are you sure the distance to the cooking area is greater than @B30 meters@B?@G"
    C703e
    SIGNAL
        (C703e < 29) OR (C703e = 88)
            "@G@BALERT@B
            @/@/Are you sure the distance to the latrine is greater than @B30 meters@B?@G"
ENDBLOCK
