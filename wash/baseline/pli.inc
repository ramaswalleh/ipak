BLOCK modpli

{LATRINE OBSERVATION BLOCK}
BLOCK BlkObserve

{GPS COORDINATES BLOCK}
BLOCK BlkS01
FIELDS
    S01_GPSN "Northerly Coordinates:" : TNCoordinate
    S01_GPSE "Easterly Coordinates:" : TECoordinate
RULES
    S01_GPSN
    IF NOT (LEN (S01_GPSN) = 7) THEN
        ERROR "@R@BERROR!@B
              @/@/The @BNortherly Coordinate@B entered as @R@B^S01_GPSN@B@R is @Ulower@U than the minimum number of digits required!
              @/@/Please check your digits and try again.@R"
    ENDIF
    CHECK
        (SUBSTRING (S01_GPSN, 1, 2) = '00') "@R@BERROR!@B
                                            @/@/The @BNortherly Coordinate@B entered as @R@B^S01_GPSN@B@R does not @Ubegin@U with the values @B00@B!
                                            @/@/Please check your entry and try again.@R"
    S01_GPSE
    IF NOT (LEN (S01_GPSE) = 8) THEN
        ERROR "@R@BERROR!@B
              @/@/The @BEasterly Coordinate@B entered as @R@B^S01_GPSE@B@R is @Ulower@U than the minimum number of digits required!
              @/@/Please check your digits and try again.@R"
    ENDIF
    CHECK
        (SUBSTRING (S01_GPSE, 1, 3) = '034') OR (SUBSTRING (S01_GPSE, 1, 3) = '035') "@R@BERROR!@B
                                                                                     @/@/The @BEasterly Coordinate@B entered as @R@B^S01_GPSE@B@R does not @Ubegin@U with the values @B034@B or @B035@B!
                                                                                     @/@/Please check your entry and try again.@R"
ENDBLOCK

{OTHER COMPOUND MEMBER NAMES TABLE}
BLOCK BlkTO5_OTH
FIELDS
    TO5_OTH_fname "Other compound member's @Bfirst@B name:
                  @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE OTHER COMPOUND MEMBER'S FIRST NAME
                  @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                  : STRING [15], DK
    TO5_OTH_sname "Other compound member's @Bsecond@B name:
                  @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE OTHER COMPOUND MEMBER'S SECOND NAME
                  @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                  : STRING [15], DK
    TO5_OTH_lname "Other compound memeber's @Blast@B name:
                  @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE OTHER COMPOUND MEMBER'S LAST NAME
                  @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                  : STRING [15], DK
RULES
    TO5_OTH_fname
    TO5_OTH_sname
    TO5_OTH_lname
ENDBLOCK

{OTHER COMPOUND MEMBER NAMES TABLE}
TABLE TblTO5_OTH
FIELDS
    BTO5_OTH : BlkTO5_OTH
RULES
    BTO5_OTH
ENDTABLE

{NEIGHBOR'S NAMES TABLE}
BLOCK BlkTO5_NEI
FIELDS
    TO5_NEI_fname "Neighbor's @Bfirst@B name:
                  @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NEIGHBOR'S FIRST NAME
                  @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                  : STRING [15], DK
    TO5_NEI_sname "Neighbor's @Bsecond@B name:
                  @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NEIGHBOR'S SECOND NAME
                  @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                  : STRING [15], DK
    TO5_NEI_lname "Neighbor's @Blast@B name:
                  @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NEIGHBOR'S LAST NAME
                  @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                  : STRING [15], DK
RULES
    TO5_NEI_fname
    TO5_NEI_sname
    TO5_NEI_lname
ENDBLOCK

{NEIGHBOR'S NAMES TABLE}
TABLE TblTO5_NEI
FIELDS
    BTO5_NEI : BlkTO5_NEI
RULES
    BTO5_NEI
ENDTABLE

{GPS COORDINATES TABLE}
TABLE TblS01
FIELDS
    BS01 : BlkS01
RULES
    BS01
ENDTABLE

FIELDS
    TO1B "@BOBSERVATION:@B
         @/@/CAN YOU OBSERVE THIS LATRINE?"
         : (YES "YES @R(@BNOTE:@B OBTAIN VERBAL CONSENT BEFORE CONTINUING OBSERVATION)@R",
            NO "NO, REFUSED OBSERVATION",
            NOT_POSSIBLE "NO, OBSERVATION NOT POSSIBLE")
    S805 "@BOBSERVATION:@B
         @/@/RECORD AMOUNT OF TIME IT TAKES TO WALK FROM FRONT DOORSTEP OF HOUSEHOLD TO LATRINE" : TStopWatch
    S805a "@BOBSERVATION:@B
          @/@/ABOUT HOW MANY METERS IS THE FRONT DOORSTEP OF HOUSEHOLD TO LATRINE?
          @/@/@RCOUNT STEPS, CONVERT TO METERS (MULTIPLY BY 10 AND DIVIDE BY YOUR NUMBER OF STEPS IN 10 m)@R"
          : 0..997
    C805a "@BOBSERVATION:@B
          @/@/WHERE IS THE TOILET LOCATED?"
          : (INSIDE "INSIDE COMPOUND",
             IMMEDIATE "IMMEDIATELY OUTSIDE COMPOUND (< 5 M AWAY)",
             OUTSIDE "OUTSIDE COMPOUND (> 5 M AWAY)")
    C806_1 "THERE ARE AT LEAST THREE WALLS AROUND THE TOILET?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THERE ARE AT LEAST THREE WALLS AROUND THE TOILET@R"
           : TYesNo, DK
    C806_1A "HOW MANY WALLS NEED @BREPAIR@B TO GUARANTEE PRIVACY?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL HOW MANY WALLS NEED REPAIR TO GUARANTEE PRIVACY@R"
            : 0..4, DK
    C806_1B "HOW MANY WALLS NEED @BREPLACEMENT@B TO GUARANTEE PRIVACY?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL HOW MANY WALLS NEED REPLACEMENT TO GUARANTEE PRIVACY@R"
            : 0..4, DK
    C806_3 "IS THERE A DOOR / CURTAIN OR ARE THERE WALLS GUARANTEEING PRIVACY
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF DOOR / CURTAIN OR WALLS GUARANTEE PRIVACY@R"
           : TYesNo, DK
    C806_3A "DOES THE DOOR / CURTAIN NEED @BREPAIR@B TO GUARANTEE PRIVACY?"
            : TYesNo
    C806_3B "DOES THE DOOR / CURTAIN NEED @BREPLACEMENT@B TO GUARANTEE PRIVACY?"
            : TYesNo
    C806_4 "IS THERE A ROOF OVER THE TOILET?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THERE IS A ROOF OVER THE TOILET@R"
           : TYesNo, DK
    C806_4A "ROOF NEEDS @BREPAIR@B TO GUARANTEE RAIN DOES NOT ENTER"
            : TYesNo
    C806_4B "ROOF NEEDS @BREPLACEMENT@B TO GUARANTEE RAIN DOES NOT ENTER"
            : TYesNo
    C806_4C "HOW MANY SIDES DOES THE LATRINE ROOF @BNOT@B EXTEND AT LEAST 6 INCHES?
            @/@/@RENTER “@R@B88@B@R” IF NOT APPLICABLE. (NO ROOF)@R"
            : 0..88
    C806_5 "VENTILATION PIPE
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THERE IS A VENTILATION PIPE@R"
           : TYesNo, DK
    C806_6 "PATH TO TOILET SUGGESTS REGULAR USE (IS CLEAR, WELL-WORN, etc)
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THERE IS A PATH TO TOILET SUGGESTS REGULAR USE (IS CLEAR, WELL-WORN, etc)@R"
           : TYesNo, DK
    C806_7 "TOILET HAS A SLAB (PLASTIC OR CEMENT)
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THE TOILET HAS A SLAB (PLASTIC OR CEMENT)@R"
           : TYesNo, DK
    C806_8 "RAISED FOOTINGS AROUND THE HOLE
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THE TOILET HAS RAISED FOOTINGS AROUND THE HOLE@R"
           : TYesNo, DK
    C806_13 "LATRINE APPEARS TO BE IN USE (BY YOUR BEST JUDGEMENT)
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THE LATRINE APPEARS TO BE IN USE (BY YOUR BEST JUDGEMENT)@R"
            : TYesNo, DK
    C806_14 "ODOR OF FECES IN THE LATRINE
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THERE IS ODOR OF FECES IN THE LATRINE@R"
            : TYesNo, DK
    C806_15 "ODOR OF URINE IN THE LATRINE
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THERE IS ODOR OF URINE IN THE LATRINE@R"
            : TYesNo, DK
    C806_16 "STOOL IS VISIBLE ON THE SLAB OR FLOOR
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF STOOL IS VISIBLE ON THE SLAB OR FLOOR@R"
            : TYesNo, DK
    C806_17 "DROP HOLE IS COVERED
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF DROP HOLE IS COVERED@R"
            : TYesNo, DK
    C806_17A "COVER IS CORRECTLY PLACED OVER THE DROP HOLE SO THAT FLIES CANNOT ENTER / EXIT
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF COVER IS CORRECTLY PLACED OVER THE DROP HOLE SO THAT FLIES CANNOT ENTER / EXIT@R"
             : TYesNo, DK
    C806_18 "FLIES PRESENT
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF FLIES ARE PRESENT@R"
            : TYesNo, DK
    C806_20 "COMPOSTING TOILET
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THE TOILET IS COMPOSTING@R"
            : TYesNo, DK
    {TO4 "DOES PIT APPEAR TO BE STABLE? (LOOK INSIDE AND AROUND LATRINE.)" : TYesNo}
    C806_19 "@BOBSERVATION:@B
            @/@/SINGLE OR DOUBLE PIT LATRINE?"
            : (SINGLE "SINGLE PIT",
               DOUBLE "DOUBLE PIT",
               NA (88) "Not Applicable")
    C806_10 "@BOBSERVATION:@B
            @/@/WHICH BEST DESCRIBES THE MATERIAL OF THE @UFLOOR@U?"
            : (MUD "MOSTLY MUD",
               WOOD "MOSTLY WOOD",
               CONCRETE "ALL CONCRETE",
               SLAB "CONCRETE SLAB ON MUD / WOOD",
               PLASTIC "PLASTIC SLAB ON MUD / WOOD",
               OTHER (77) "OTHER")
    C806_10_oth "Specify other material on the floor:" : STRING [30]
    C806_10A "@BOBSERVATION:@B
             @/@/FLOOR NEEDS @BREPAIR@B @UIN ORDER TO SUPPORT SLAB@U"
             : TYesNo
    C806_10B "@BOBSERVATION:@B
             @/@/FLOOR NEEDS @BREPLACEMENT@B @UIN ORDER TO SUPPORT SLAB@U"
             : TYesNo
    C806_21 "@BOBSERVATION:@B
            @/@/WHICH BEST DESCRIBES THE MATERIAL OF THE @UWALLS@U?"
            : (MUD (1) "MUD AND WOOD",
               LEAVES (2) "LEAVES / PAPER AND WOOD",
               SHEET (3) "IRON SHEETS (@B@IMABATI@I@B)",
               CONCRETE (4),
               OTHER (77),
               NO (5) "NO WALLS")
    C806_21_oth "Specify other material on the walls:" : STRING [30]
    C807 "@BOBSERVATION:@B
         @/@/FULLNESS OF THE LATRINE
         @/@/@RDROP WEIGHTED STRING TO DETERMINE IF SOLID WASTE IS WITHIN 2 METERS FROM THE SURFACE@R"
         : (FAR "VERY FAR FROM THE SURFACE (GREATER THAN 2 METERS)",
            BETWEEN "BETWEEN 1 METER AND 2 METERS FROM THE SURFACE",
            LESS "LESS THAN 1 METER FROM THE SURFACE",
            CLOSE "VERY CLOSE TO SURFACE OR FULL",
            NA (88) "WATER SEAL LATRINE / NON DIRECT LATRINE / COULD NOT OBSERVE")
    S807A "IS THIS FUNCTIONAL?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU DO NOT KNOW@R"
          : TYesNo, DK
    C808_1 "@BOBSERVATION:@B
           @/@/IS @BGRASS / LEAVES@B AVAILABLE FOR ANAL CLEANSING EITHER INSIDE OR IMMEDIATELY OUTSIDE THE LATRINE?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT MAKE ANY OBSERVATION ON GRASS / LEAVES AS AN ANAL CLEANSING MATERIAL@R"
           : TYesNo, DK
    C808_3 "@BOBSERVATION:@B
           @/@/IS A @BRAG OR CLOTH@B AVAILABLE FOR ANAL CLEANSING EITHER INSIDE OR IMMEDIATELY OUTSIDE THE LATRINE?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT MAKE ANY OBSERVATION ON RAG OR CLOTH AS AN ANAL CLEANSING MATERIAL@R"
           : TYesNo, DK
    C808_5 "@BOBSERVATION:@B
           @/@/IS A @BHYGIENIC (TOILET) PAPER@B AVAILABLE FOR ANAL CLEANSING EITHER INSIDE OR IMMEDIATELY OUTSIDE THE LATRINE?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT MAKE ANY OBSERVATION ON HYGIENIC (TOILET) PAPER AS AN ANAL CLEANSING MATERIAL@R"
           : TYesNo, DK
    C808_6 "@BOBSERVATION:@B
           @/@/IS A @BWATER CONTAINER / VESSEL@B AVAILABLE FOR ANAL CLEANSING EITHER INSIDE OR IMMEDIATELY OUTSIDE THE LATRINE?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT MAKE ANY OBSERVATION ON WATER CONTAINER / VESSEL AS AN ANAL CLEANSING MATERIAL@R"
           : TYesNo, DK
    C808_8 "@BOBSERVATION:@B
           @/@/IS @BSOAP@B AVAILABLE FOR ANAL CLEANSING EITHER INSIDE OR IMMEDIATELY OUTSIDE THE LATRINE?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT MAKE ANY OBSERVATION ON SOAP AS AN ANAL CLEANSING MATERIAL@R"
           : TYesNo, DK
    C808_10 "@BOBSERVATION:@B
            @/@/IS A @BNEWSPAPER@B AVAILABLE FOR ANAL CLEANSING EITHER INSIDE OR IMMEDIATELY OUTSIDE THE LATRINE?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT MAKE ANY OBSERVATION ON NEWSPAPER AS AN ANAL CLEANSING MATERIAL@R"
            : TYesNo, DK
    C808_11 "Other?" : TYesNo
    C808_oth "Specify other material used:" : STRING [30]
    TO2 "Who uses this latrine?
        @/@/@RCHECK ALL THAT APPLY@R"
        "Nani katika nyumba hutumia hii choo?
        @/@/@RCHECK ALL THAT APPLY@R"
        : SET [6] OF (RESPONDENT,
                      COMPOUND "COMPOUND HEAD",
                      CHILDREN "CHILDREN WHO LIVE IN COMPOUND",
                      OTHER "OTHER ADULTS WHO LIVE IN COMPOUND",
                      CHILDREN_NOT "CHILDREN WHO DO NOT LIVE IN COMPOUND",
                      ADULTS_NOT "ADULTS WHO DO NOT LIVE IN COMPOUND")
    TO3 "Is this the latrine that you use most often?"
        "Je hii ndio choo ambayo mnatumia sana sana?"
        : TYesNo
    TO5 "Who has the authority to make decisions regarding this latrine?"
        "Ni nani aliye na mamlaka ya kufanya uamuzi ya choo hii?"
        : (RESP "Respondent",
           COMP "Compound Head",
           OTHER "Other compound member",
           NEIGHBOR "Neighbor")
    TTO5_OTH : TblTO5_OTH
    TO5_OTH_phone "Other compound member's phone number:" : TPhone
    TTO5_NEI : TblTO5_NEI
    TO5_NEI_phone "Neighbor's phone number:" : TPhone
    S00 "Are you able to take a GPS reading?" : TYesNo
    TS01 : TblS01
    S02 "Waypoint ID:" : 1..999
    S03 "For the GPS ID, USE @BWB@B OR @BK@B?" : (WB, K)
    S03_GPSWB "@BWB@B GPS ID:" : TGPSIDWB
    S03_GPSK "@BK@B GPS ID:" : TGPSIDK
    FR12 "@BOBSERVE FLY ACTIVITY.@B
          @/@/ESTIMATE TOTAL NUMBER OF FLIES SEEN @UAT LATRINE@U."
          : (NONE "NONE",
             LOW "LOW (1 - 5)",
             MODERATE "MODERATE (6 - 10)",
             HIGH "HIGH (> 10)",
             NOT_OBSERVE (99) "COULD NOT OBSERVE")

AUXFIELDS
    aux_latri "@GLATRINE ^pli OBSERVATIONS AND ATTRIBUTES@G" : (ENTER), EMPTY
    aux_C806 "@G@BOBSERVATION:@B
             @/@/NOTE THE TYPE, CONDITION AND APPARENT USE OF THE TOILET.@G" : (ENTER), EMPTY
    aux_ext "@G@BEXTERIOR OBSERVATIONS@B@G" : (ENTER), EMPTY
    aux_int "@G@BINTERIOR OBSERVATIONS@B@G" : (ENTER), EMPTY
    aux_C808 "@G@BOBSERVATION:@B
             @/@/WHICH OF THE FOLLOWING MATERIALS FOR ANAL CLEANSING ARE PRESENT EITHER INSIDE OR IMMEDIATELY OUTSIDE THE LATRINE?@G
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT MAKE ANY OBSERVATION ON ANY ANAL CLEANSING MATERIALS@R"
             : (ENTER), EMPTY
    aux_gps "@GGeographic coordinates of latrine@G
            @/@/@RTAKE A NEW GPS READING BY MARKING A NEW WAYPOINT.
            @/@/WAIT UNTIL YOU HAVE LESS THAN 10M ACCURACY IF POSSIBLE.@R" : (ENTER), EMPTY
    aux_TO5_OTH "@GEnter other compound member names:@G" : (ENTER), EMPTY
    aux_TO5_NEI "@GEnter neighbor's names:@G" : (ENTER), EMPTY

LAYOUT
    BEFORE aux_latri NEWPAGE
    BEFORE S805 NEWPAGE

    BEFORE aux_C806 NEWPAGE
    AFTER aux_C806 NEWPAGE

    BEFORE aux_ext NEWPAGE
    BEFORE aux_int NEWPAGE

    AFTER C806_20 NEWPAGE

    BEFORE aux_gps NEWPAGE

RULES
    aux_latri
    TO1B
    IF (TO1B = YES) THEN
        S805
        CHECK
            (LEN (S805) > 3) "@R@BERROR!@B
                             @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!
                             @/@/Prefix your input with @B0@B if your hour recording has only one digit entry.@R"
        CHECK
            (VAL (SUBSTRING (S805, 1, 2)) < 24) "@R@BERROR!@B
                                                @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
        CHECK
            (VAL (SUBSTRING (S805, 3, 4)) < 60) "@R@BERROR!@B
                                                @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
        S805a
        C805a
        aux_C806
        aux_ext
        C806_1
        C806_1A
        C806_1B
        C806_3
        C806_3A
        C806_3B
        C806_4
        C806_4A
        C806_4B
        C806_4C
        CHECK (C806_4C < 5) OR (C806_4C > 87) "@R@BERROR!@B
                                              @/@/You cannot select a value above @B4@B for this field unless @B88@B for @BNot Applicable@B!
                                              @/@/Please check your entry and try again.@R"
        C806_5
        C806_6
        aux_int
        C806_7
        C806_8
        C806_13
        C806_14
        C806_15
        C806_16
        C806_17
        IF (C806_17 = YES) THEN
    	   C806_17A
        ENDIF
        C806_18
        C806_20
        {TO4}
        C806_19
        C806_10
        IF (C806_10 = OTHER) THEN
            C806_10_oth
        ENDIF
        C806_10A
        C806_10B
        C806_21
        IF (C806_21 = OTHER) THEN
            C806_21_oth
        ENDIF
        C807
        IF (C807 = NA) THEN
            S807A
        ENDIF
        aux_C808
        C808_1
        C808_3
        C808_5
        C808_6
        C808_8
        C808_10
        C808_11
        IF (C808_11 = YES) THEN
            C808_oth
        ENDIF
        TO2
        TO3
        IF (S805a >= 50) THEN
            S00
            IF (S00 = YES) THEN
                aux_gps
                TS01
                S02
                S03
                IF (S03 = WB) THEN
                    S03_GPSWB
                    CHECK
                        (LEN (S03_GPSWB) > 1) "@R@BERROR!@B
                                              @/@/The @BWB GPS ID@B entered as @R@B^S03_GPSWB@B@R is @Ulower@U than the minimum number of digits required!
                                              @/@/Please check your digits and try again.@R"
                ELSE
                    S03_GPSK
                    CHECK
                        (LEN (S03_GPSK) > 1) "@R@BERROR!@B
                                             @/@/The @BWB GPS ID@B entered as @R@B^S03_GPSK@B@R is @Ulower@U than the minimum number of digits required!
                                             @/@/Please check your digits and try again.@R"
                ENDIF
            ENDIF
        ENDIF
        TO5
        IF (TO5 = OTHER) THEN
            aux_TO5_OTH
            TTO5_OTH
            TO5_OTH_phone
            IF NOT ((TO5_OTH_phone = DK) OR (TO5_OTH_phone = '88')) THEN
                IF NOT (LEN (TO5_OTH_phone) = 10) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bother compound member's contact number@B entry has the correct number of digits!@R"
                ENDIF
                IF NOT ((SUBSTRING (TO5_OTH_phone, 1, 2) = '07') OR (SUBSTRING (TO5_OTH_phone, 1, 2) = '02')) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bother compound member's contact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                ENDIF
            ENDIF
        ELSEIF (TO5 = NEIGHBOR) THEN
            aux_TO5_NEI
            TTO5_NEI
            TO5_NEI_phone
            IF NOT ((TO5_NEI_phone = DK) OR (TO5_NEI_phone = '88')) THEN
                IF NOT (LEN (TO5_NEI_phone) = 10) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bneighbor's contact number@B entry has the correct number of digits!@R"
                ENDIF
                IF NOT ((SUBSTRING (TO5_NEI_phone, 1, 2) = '07') OR (SUBSTRING (TO5_NEI_phone, 1, 2) = '02')) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bneighbor's contact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                ENDIF
            ENDIF
        ENDIF
        FR12
    ENDIF
ENDBLOCK

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE

    C8052 "Does your household have a toilet facility that is in use?
          @/@/Can I see it?"
          "Je, nyumba yako ina choo inayotumika?
          @/@/Je, naweza kuitazama?"
          : (YES_CAN "YES, HAVE A TOILET - @BCAN OBSERVE@B",
             NO "NO, HAS A TOILET - @B@IREFUSED@I OBSERVATION@B",
             YES_CANNOT "YES, HAVE A TOILET - @BCANNOT OBSERVE@B",
             NO_TOILET "NO TOILET FACILITY IN USE")
    TO1 "How many different toilet facilities do people in your household use regularly?"
        "Kuna choo ngapi tofauti ambazo watu nyumbani mwako hutumia mara kwa mara?"
        : 1..20
    TO1A "How many of these toilet facilities belong to your compound or your neighbor's compound?"
         "Ni ngapi kati ya vyoo hivi ni vya boma lako au vya boma la jirani wako?"
         : 1..10
    BObserve : ARRAY [1..10] OF BlkObserve
    FR1A "@BOBSERVE:@B
         @/@/WAS FLY TAPE HUNG IN THIS LATRINE?"
         : TYesNo
    FR13A "@BTIME OF RETRIEVAL@B
          @/@/LATRINE" : T24HRClock
    FR13_fl "RECORD THE NUMBER OF FLIES COUNTED ON ALL STRIPS" : 0..9999
    FR13_st "ABOUT HOW MANY METERS (STEPS) ARE THE STRIPS HUNG FROM THE LATRINE?" : 0..999
    FR15 "@BOBSERVE:@B
         @/@/WAS THE FLY PAPER IN THE LATRINE TAMPERED WITH OR DID IT FALL DOWN?"
         : TYesNo
    FR17B "OTHER OBSERVATION MADE
          @/@/@RENTER @R@B“88”@B@R IF NO OTHER OBSERVATION WAS MADE@R" : STRING [244]

LOCALS
    pli : INTEGER [1]

AUXFIELDS
    aux_pli "@G@BPIT LATRINE INSPECTION@B@G" : (ENTER), EMPTY
    aux_inst "@B@GTOILET OBSERVATIONS:@G @RDO OBSERVATIONS WHILE AT TOILET@R@B" : (ENTER), EMPTY
    aux_visit "@GVISIT ALL LATRINES THAT ARE MENTIONED BY THE RESPONDENT AND PERFORM THESE OBSERVATIONS (TO1B TO FR12)@G" : (ENTER), EMPTY
    aux_etimestamp : TIMETYPE

LAYOUT
    BEFORE aux_pli NEWPAGE
    AFTER aux_pli NEWPAGE

    AFTER aux_inst NEWPAGE

    BEFORE aux_visit NEWPAGE
    AFTER aux_visit NEWPAGE

    BEFORE FR13A NEWPAGE

RULES
    aux_pli

    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    aux_inst
    C8052
    IF ((stimestamp = EMPTY) AND (C8052 = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    IF NOT (C8052 = NO_TOILET) THEN
        TO1
        TO1A
        aux_visit
        FOR pli:= 1 TO TO1A DO
            BObserve [pli]
        ENDDO
        IF (sc.visit = YES) THEN
            FR1A
            IF (FR1A = YES) THEN
                FR13A
                CHECK
                    (LEN (FR13A) > 3) "@R@BERROR!@B
                                      @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!
                                      @/@/Prefix your input with @B0@B if your hour recording has only one digit entry.@R"
                CHECK
                    (VAL (SUBSTRING (FR13A, 1, 2)) < 24) "@R@BERROR!@B
                                                         @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
                CHECK
                    (VAL (SUBSTRING (FR13A, 3, 4)) < 60) "@R@BERROR!@B
                                                         @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
                FR13_fl
                FR13_st
                SIGNAL
                    (FR13_st < 11) "@G@BALERT!@B
                                   @/@/Are you sure there are more than @B10 meters@B betweeen the strips and the latrine?@G"
                FR15
                FR17B
            ENDIF                
        ENDIF
    ENDIF
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (BObserve [pli].FR12 = RESPONSE) AND (sc.visit = NO)) OR ((etimestamp = EMPTY) AND (C8052 = NO_TOILET))
    OR ((etimestamp = EMPTY) AND (FR17B = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF ((etimestamp = EMPTY) AND (edatestamp = EMPTY)) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
