BLOCK blka
    {VILLAGE DETAILS BLOCK}
    BLOCK blka1
        EXTERNALS
            getVilNme : getVillageName ('..\ext\LocDetailC0')

        FIELDS
            a1ID "Village ID:
                 @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT KNOWN / NOT APPLICABLE@R"
                 : TVillageID, DK
            a1_n "Village Name:" : STRING [20]
        AUXFIELDS
            aux_OK "@GOK@G" : (ENTER), EMPTY
        RULES
            a1ID
            IF NOT (a1ID = DK) THEN
                CHECK (LEN (a1ID) > 3)
                      "@R@BERROR!@B
                      @/@/The @BVillage ID@B entered as @R@B^a1ID@B@R is @Ulower@U than @Bfour@B, which is the minimun number of digits required!
                      @/@/Please check your digits and try again.@R"
                IF (getVilNme.SEARCH (a1ID)) THEN
                    getVilNme.READ
                    a1_n:= getVilNme.VILLAGENAME
                    a1_n.SHOW
                ELSE
                    ERROR "@R@BERROR!@B
                          @/@/The @BVillage ID@B entered as @R@B^a1ID@B@R cannot be found!
                          @/@/Please check your entry and try again.@R"
                ENDIF
            ELSE
                a1_n.ASK
            ENDIF
            aux_OK
    ENDBLOCK

    {INTERVIEWER DETAILS BLOCK}
    BLOCK  blka3
        EXTERNALS
            getStffNme : getStaffName ('..\ext\stffnme')

        FIELDS
            a3ID "Interviewer ID:" : TStaffID
            a3_n "Interviewer Name:" : STRING [30]
        AUXFIELDS
            aux_OK "@GOK@G" : (ENTER), EMPTY
        RULES
            a3ID
            CHECK (LEN (a3ID) > 2)
                "@R@BERROR!@B
                @/@/The @BIPA Staff ID@B entered as @R@B^a3ID@B@R is @Ulower@U than @Bthree@B, which is the minimun number of digits required!
                @/@/Please check your digits and try again.@R"
            IF (getStffNme.SEARCH (a3ID)) THEN
                getStffNme.READ
                a3_n:= (getStffNme.IPASTAFFFIRSTNAME + ' ' +  getStffNme.IPASTAFFSECONDNAME + ' ' + getStffNme.IPASTAFFLASTNAME)
                a3_n.SHOW
            ELSE
                ERROR "@R@BERROR!@B
                      @/@/The @BIPA Staff ID@B entered as @R@B^a3ID@B@R cannot be found!
                      @/@/Please check your entry and try again.@R"
            ENDIF
            aux_OK
    ENDBLOCK

    {OTHER INTERVIEWER DETAILS BLOCK}
    BLOCK  blka4
        EXTERNALS
            getStffNme : getStaffName ('..\ext\stffnme')

        FIELDS
            a4ID "Other interviewer ID:" : TStaffID
            a4_n "Other interviewer Name:" : STRING [30]
        AUXFIELDS
            aux_OK "@GOK@G" : (ENTER), EMPTY
        RULES
            a4ID
            CHECK (LEN (a4ID) > 2)
                "@R@BERROR!@B
                @/@/The @BIPA Staff ID@B entered as @R@B^a4ID@B@R is @Ulower@U than @Bthree@B, which is the minimun number of digits required!
                @/@/Please check your digits and try again.@R"
            IF (getStffNme.SEARCH (a4ID)) THEN
                getStffNme.READ
                a4_n:= (getStffNme.IPASTAFFFIRSTNAME + ' ' +  getStffNme.IPASTAFFSECONDNAME + ' ' + getStffNme.IPASTAFFLASTNAME)
                a4_n.SHOW
            ELSE
                ERROR "@R@BERROR!@B
                      @/@/The @BIPA Staff ID@B entered as @R@B^a4ID@B@R cannot be found!
                      @/@/Please check your entry and try again.@R"
            ENDIF
            aux_OK
    ENDBLOCK

    {GPS COORDINATES BLOCK}
    BLOCK blka8
        FIELDS
            a8_GPSN "Northerly Coordinates:" : TNCoordinate
            a8_GPSE "Easterly Coordinates:" : TECoordinate
        RULES
            a8_GPSN
            IF NOT (LEN (a8_GPSN) = 7) THEN
                ERROR "@R@BERROR!@B
                      @/@/The @BNortherly Coordinate@B entered as @R@B^a8_GPSN@B@R is @Ulower@U than the minimum number of digits required!
                      @/@/Please check your digits and try again.@R"
            ENDIF
            CHECK (SUBSTRING (a8_GPSN, 1, 2) = '00')
                "@R@BERROR!@B
                @/@/The @BNortherly Coordinate@B entered as @R@B^a8_GPSN@B@R does not @Ubegin@U with the values @B00@B!
                @/@/Please check your entry and try again.@R"
            a8_GPSE
            IF NOT (LEN (a8_GPSE) = 8) THEN
                ERROR "@R@BERROR!@B
                      @/@/The @BEasterly Coordinate@B entered as @R@B^a8_GPSE@B@R is @Ulower@U than the minimum number of digits required!
                      @/@/Please check your digits and try again.@R"
            ENDIF
            CHECK (SUBSTRING (a8_GPSE, 1, 3) = '034') OR (SUBSTRING (a8_GPSE, 1, 3) = '035')
                "@R@BERROR!@B
                @/@/The @BEasterly Coordinate@B entered as @R@B^a8_GPSE@B@R does not @Ubegin@U with the values @B034@B or @B035@B!
                @/@/Please check your entry and try again.@R"
    ENDBLOCK

    {VILLAGE DETAILS TABLE}
    TABLE tbla1
        FIELDS
            ba1 : blka1
        RULES
            ba1
    ENDTABLE
    {INTERVIEWER DETAILS TABLE}
    TABLE tbla3
        FIELDS
            ba3 : blka3
        RULES
            ba3
    ENDTABLE
    {OTHER INTERVIEWER DETAILS TABLE}
    TABLE tbla4
        FIELDS
            ba4 : blka4
        RULES
            ba4
    ENDTABLE
    {GPS COORDINATES TABLE}
    TABLE tbla8
        FIELDS
            ba8 : blka8
        RULES
            ba8
    ENDTABLE

    FIELDS
        ta1 : tbla1
        a2 "Cluster ID:" : TClusterID
        ta3 : tbla3
        a4 "Any other IPA officer present?" : TYesNo
        ta4 : tbla4
        a6 : DATETYPE
        a7 "Survey Start Time:
           @/@/@R(24 hour clock)@R"
           : T24HRClock
        ta8 : tbla8
        a8WP "Waypoint ID:" : 1..999
        a9 "IPAA Candidate ID:" : TIPAAID

    AUXFIELDS
        aux_intro "@G@BInnovations for Poverty Action-WASH Benefits Project
                  @/IPA Assistant Main Baseline Survey
                  @/@/Part 1 (Administered at the Baseline Survey Visit)@B@G"
                  : (ENTER), EMPTY
        aux_a "@G@BA. IDENTIFICATION SECTION@B@G" : (ENTER), EMPTY
        aux_a6 "@GSURVEY DATE:@G @B^a6@B" : (OK)

    LAYOUT
        AFTER aux_intro NEWPAGE
        AFTER aux_a NEWPAGE

    RULES
        aux_intro
        aux_a
        ta1
        a2
        ta3
        a4
        IF (a4 = YES) THEN
            ta4
        ENDIF
        a6:= SYSDATE
        aux_a6
        a7
        CHECK
            (LEN (a7) > 3) "@R@BERROR!@B
                           @/@/Please check that your @B24 hour time@B entry has the @Ucorrect number of digits@U!@R"
        CHECK
            (VAL (SUBSTRING (a7, 1, 2)) < 24) "@R@BERROR!@B
                                              @/@/Please check that your @Uhour@U entry is within @B24@B!@R"
        CHECK
            (VAL (SUBSTRING (a7, 3, 4)) < 60) "@R@BERROR!@B
                                              @/@/Please check that your @Uminute@U entry is within @B60@B!@R"
        ta8
        a8WP
        a9
        CHECK (LEN (a9) > 5)
             "@R@BERROR!@B
             @/@/The @BIPAA ID@B entered as @R@B^a9@B@R is @Ulower@U than @Bsix@B, which is the minimun number of digits required!
             @/@/Please check your digits and try again.@R"

ENDBLOCK
