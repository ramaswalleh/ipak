BLOCK blkt
    FIELDS
        c8052 "Does your household have access to a toilet facility that is in use?
              @/@/Can I see it?
              @/@/@R@BNOTE:@B ACCESSBILITY, NOT OWNERSHIP@R"
              "Je nyumba yako ina choo inayotumika?
              @/@/Je naweza kuitazama?
              @/@/@R@BNOTE:@B ACCESSBILITY, NOT OWNERSHIP@R"
              : (YES_CAN "YES HAVE A TOILET, CAN OBSERVE",
                 YES_REF "YES HAVE A TOILET, REFUSED OBSERVATION",
                 YES_CANT "YES HAVE A TOILET, CANNOT OBSERVE",
                 NO_IN "NO TOILET FACILITY IN USE")
        to1b "@BOBSERVATION:@B
             @/@/CAN YOU OBSERVE THIS LATRINE?"
             : (YES "YES @R(@BNOTE:@B OBTAIN VERBAL CONSENT BEFORE CONTINUING OBSERVATION)@R",
                NO "NO, REFUSED OBSERVATION",
                NOT_POSS "NO, OBSERVATION / NOT POSSIBLE")
        c813 "Who owns the toilet?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHO OWNS THE TOILET@R"
             "Ni nani mwenye choo hii?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHO OWNS THE TOILET@R"
             : (ONLY "Household only",
                SHARE "Household shared",
                IN_COM "Someone else who lives in compound",
                OUT_COM "Someone else who lives outside of compound",
                PUBLIC "Public"), DK
        to2 "Who in the household uses this latrine?
            @/@/@RCHECK ALL THAT APPLY@R"
            "Nani katika nyumba hutumia hii choo?
            @/@/@RCHECK ALL THAT APPLY@R"
            : SET [6] OF (RESPONDENT,
                          COMPOUND "COMPOUND HEAD",
                          CHILDREN "CHILDREN WHO LIVE IN COMPOUND",
                          OTHER "OTHER ADULTS WHO LIVE IN COMPOUND",
                          CHILDREN_NOT "CHILDREN WHO DO NOT LIVE IN COMPOUND",
                          ADULTS_NOT "ADULTS WHO DO NOT LIVE IN COMPOUND")
        c806_7 "TOILET HAS A SLAB (PLASTIC OR CEMENT)
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THE TOILET HAS A SLAB (PLASTIC OR CEMENT)@R"
               : TYesNo, DK
        c806_8 "RAISED FOOTINGS AROUND THE HOLE
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF THE TOILET HAS RAISED FOOTINGS AROUND THE HOLE@R"
               : TYesNo, DK
        c806_17 "DROP HOLE IS COVERED
                @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF DROP HOLE IS COVERED@R"
                : TYesNo, DK
        c806_17a "COVER IS CORRECTLY PLACED OVER THE DROP HOLE SO THAT FLIES CANNOT ENTER / EXIT
                 @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE / CANNOT TELL IF COVER IS CORRECTLY PLACED OVER THE DROP HOLE SO THAT FLIES CANNOT ENTER / EXIT@R"
                 : TYesNo, DK
        c806_19 "@BOBSERVATION:@B
                @/@/SINGLE OR DOUBLE PIT LATRINE?"
                : (SINGLE "SINGLE PIT",
                   DOUBLE "DOUBLE PIT",
                   NA (88) "Not Applicable")
        c806_10 "@BOBSERVATION:@B
                @/@/WHICH BEST DESCRIBES THE MATERIAL OF THE @UFLOOR@U?"
                : (MUD "MOSTLY MUD",
                   WOOD "MOSTLY WOOD",
                   CONCRETE "ALL CONCRETE",
                   SLAB "CONCRETE SLAB ON MUD / WOOD",
                   PLASTIC "PLASTIC SLAB ON MUD / WOOD",
                   OTHER (77) "OTHER")
        c806_10_oth "Specify other material on the floor:" : STRING [30]
        c807 "@BOBSERVATION:@B
             @/@/FULLNESS OF THE LATRINE
             @/@/@RDROP WEIGHTED STRING TO DETERMINE IF SOLID WASTE IS WITHIN 2 METERS FROM THE SURFACE@R"
             : (FAR "VERY FAR FROM THE SURFACE (GREATER THAN 2 METERS)",
                BETWEEN "BETWEEN 1 METER AND 2 METERS FROM THE SURFACE",
                LESS "LESS THAN 1 METER FROM THE SURFACE",
                CLOSE "VERY CLOSE TO SURFACE OR FULL",
                NA (88) "WATER SEAL LATRINE / NON DIRECT LATRINE / COULD NOT OBSERVE")
        s807a "IS THIS FUNCTIONAL?
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU DO NOT KNOW@R"
              : TYesNo, DK


    AUXFIELDS
        aux_t "@G@BTOILET OBSERVATIONS@G
              @/@/@R[*DO OBSERVATIONS WHILE AT TOILET*]@B@R"
              : (ENTER), EMPTY
        aux_lo "@G@BLATRINE OBSERVATIONS@B@G" : (ENTER), EMPTY
        aux_in "@G@BINTERIOR OBSERVATIONS@B@G" : (ENTER), EMPTY

    LAYOUT
        BEFORE aux_t NEWPAGE
        AFTER aux_t NEWPAGE
        BEFORE aux_lo NEWPAGE
        AFTER aux_lo NEWPAGE
        BEFORE aux_in NEWPAGE
        AFTER aux_in NEWPAGE
    RULES
        aux_t
        c8052
        IF NOT (c8052 = NO_IN) THEN
            aux_lo
            to1b
            IF NOT ((to1b = NO) OR (to1b = NOT_POSS)) THEN
                c813
                to2
                aux_in
                c806_7
                c806_8
                c806_17
                IF (c806_17 = YES) THEN
                    c806_17a
                ENDIF                    
                c806_19
                c806_10
                IF (c806_10 = OTHER) THEN
                    c806_10_oth
                ENDIF
                c807
                IF (c807 = NA) THEN
                    s807a
                ENDIF
            ENDIF
        ENDIF
ENDBLOCK
