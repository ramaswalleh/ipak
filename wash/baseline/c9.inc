BLOCK modc9

{TYPES}
TYPE
    TDone = (LEFT "Left there",
             TOILET "Put / rinsed into toilet / latrine",
             DRAIN "Put / rinsed into drain or ditch",
             BUSH "Thrown into bush / forest / field",
             GARBAGE "Thrown into garbage",
             PIT "Thrown into pit for child feces",
             BURIED "Buried",
             OTHER (77) "Other")

    THandle = (HANDS "Hands only / bare hands",
               CLOTH "Hands and cloth / paper / leaves",
               SCRAP "Scrap material to scoop feces",
               POTTY "Potty",
               JEMBE "Jembe",
               KIPUPUU "Kipupuu",
               NOTHING "Did nothing",
               OTHER (77) "Other")

    TWhere = (POTTY "Potty (in courtyard)",
              HOUSE "Potty (in house)",
              WITHOUT "In the courtyard (without potty)",
              INSIDE "Inside the house (without potty)",
              SPACE "Open space outside the front yard",
              BUSH "Bush / forest / field",
              TOILET "In toilet / latrine",
              NAPPY "In nappy / diaper",
              OTHER (77) "Other",
              NA (88) "Not Applicable")

    TDuration = (HOURS "Hours",
                 MINUTES "Minutes")

{YOUNGEST CHILD 0 - 36 MONTHS WHO IS NOT STUDY CHILD NAMES BLOCK}
BLOCK BlkC901A
FIELDS
    C901A_fname "Youngest child (0 - 36) months @Bfirst@B name:" : STRING [15]
    C901A_sname "Youngest child (0 - 36) months @Bsecond@B name:
                @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                : STRING [15]
    C901A_lname "Youngest child (0 - 36) months @Blast@B name:" : STRING [15]
RULES
    C901A_fname:= b.TB10.BB10 [young].B10_fname
    C901A_lname:= b.TB10.BB10 [young].B10_lname
    C901A_fname.SHOW
    C901A_sname
    C901A_lname.SHOW
ENDBLOCK

{OLDEST CHILD 3 - 7 YEARS OLD NAMES BLOCK}
BLOCK BlkC906A
FIELDS
    C906A_fname "Oldest child (3 - 7) years @Bfirst@B name:" : STRING [15]
    C906A_sname "Oldest child (3 - 7) years @Bsecond@B name:
                @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                : STRING [15]
    C906A_lname "Oldest child (3 - 7) years @Blast@B name:" : STRING [15]
RULES
    C906A_fname
    C906A_sname
    C906A_lname
ENDBLOCK

{YOUNGEST CHILD 0 - 36 MONTHS WHO IS NOT STUDY CHILD NAMES TABLE}
TABLE TblC901A
FIELDS
    BC901A : BlkC901A
RULES
    BC901A
ENDTABLE

{OLDEST CHILD 3 - 7 YEARS OLD NAMES TABLE}
TABLE TblC906A
FIELDS
    BC906A : BlkC906A
RULES
    BC906A
ENDTABLE


FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    TC901A : TblC901A
    C902 "When was the last time your youngest child / infant (< 3 years) @B^TC901A.BC901A.C901A_fname@B defecated?
         @/@/@RDO NOT READ RESPONSES.@R"
         "Ni lini mwisho mtoto wako mdogo / mchanga (chini ya miaka mitatu) @BAMBAYE HAZINGATIWI NA MRADI HUU@B alienda haja kubwa?
         @/@/@RDO NOT READ RESPONSES.@R"
         : (TODAY "Today",
            YESTERDAY "Yesterday",
            TWO_DAY "Two or more days ago",
            REMEMBER "Cannot remember exactly",
            REFUSED "Refused",
            NA "Not Applicable / no child < 3 years")
    C903 "Where did this child defecate the last time?
         @/@/@RDO NOT READ RESPONSES.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE THE CHILD DEFECATED THE LAST TIME@R"
         "Mara ya mwisho,  Mtoto huyu alienda haja kubwa wapi?
         @/@/@RDO NOT READ RESPONSES.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE THE CHILD DEFECATED THE LAST TIME@R"
         : SET [10] OF TWhere, DK
    C903_oth "Specify other place where the child defecated:" : STRING [100]
    C904 "Was anything done with the feces?
         @/@/@RDO NOT READ RESPONSES.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
         "Kinyesi hicho kilifanyiwa nini?
         @/@/@RDO NOT READ RESPONSES.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
         : TDone, DK
    C904_oth "Specify other action that was taken:" : STRING [100]
    C905 "How did you handle the feces?
         @/@/@RDO NOT READ RESPONSES.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW THEY HANDLED THE FECES@R"
         "Ulitoaje kinyesi hicho?
         @/@/@RDO NOT READ RESPONSES.
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW THEY HANDLED THE FECES@R"
         : SET [8] OF THandle, DK
    C905_oth "Specify other way the feces was handled:" : STRING [100]
    C905b "How long after defecation did you dispose of the feces?"
          "Baada ya mtoto kwenda haja kubwa, ilichukua muda gani kabla ya wewe kukitupa hicho kinyesi?"
          : SET [2] OF TDuration
    C905b_hr "Hours:" : 0..96
    C905b_min "Minutes": 0..60
    C906 "Are there any other children between the ages of 3 - 7 years in this household?"
         "Je kuna watoto wengine walio na umri wa kati ya miaka 3 - 7 katika hii nyumba?"
         : TYesNo
    TC906A : TblC906A
    C907 "RECORD THE AGE IN YEARS AND MONTHS OF THE @BOLDEST CHILD@B THAT HAS COMPLETED BETWEEN 3 AND 7 YEARS"
         : SET [2] OF (YEARS "Years",
                       MONTHS "Months")
    C907_yea "Years:" : 3..7
    C907_mon "Months:" : 0..36
    C908 "Where did this child < 7 years defecate the last time?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE THE CHILD DEFECATED THE LAST TIME@R"
         "Mtoto huyu aliye chini ya umri wa miaka 7 alienda haja kubwa wapi mara ya mwisho?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE THE CHILD DEFECATED THE LAST TIME@R"
         : (POTTY "Potty (in courtyard)",
            HOUSE "Potty (in house)",
            WITHOUT "In the courtyard (without potty)",
            INSIDE "Inside the house (without potty)",
            SPACE "Open space outside the front yard",
            BUSH "Bush / forest / field",
            TOILET "In toilet / latrine",
            NAPPY "In nappy / diaper",
            OTHER (77) "Other"), DK
    C908_oth "Specify other place where the child defecated:" : STRING [100]
    C909 "Was anything done with the feces?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
         "Nini kilifanyiwa kinyesi hicho?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE WHAT WAS DONE WITH THE FECES@R"
         : TDone, DK
    C909_oth "Specify other action that was taken:" : STRING [100]
    C910 "How did you handle the feces?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE THE CHILD DEFECATED THE LAST TIME@R"
         "Ulitoaje kinyesi hicho?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE THE CHILD DEFECATED THE LAST TIME@R"
         : SET [8] OF THandle, DK
    C910_oth "Specify other place where child defecated:" : STRING [100]
    C910B "How long after defecation did you dispose of the feces?"
          "Baada ya mtoto kwenda haja kubwa, ilichukua muda gani kabla ya wewe kukitupa hicho kinyesi?"
          : SET [2] OF TDuration
    C910B_hr "Hours:" : 0..96
    C910B_min "Minutes:" : 0..60
    C911 "Do children eventually start to use latrines?"
         "Je, baadaye watoto huanza kutumia choo?"
         : TYesNo
    C912 "At what age does a child start using a latrine (in months)?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW AT WHAT AGE A CHILD STARTS USING A LATRINE
         @/@/@BCODE:@B @R@B“88”@B@R IF THE ANSWER IS @B“NEVER”@B@R"
         "Mtoto huanza kutumia choo akiwa na umri gani (kwa miezi)?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW AT WHAT AGE A CHILD STARTS USING A LATRINE
         @/@/@BCODE:@B @R@B“88”@B@R IF THE ANSWER IS @B“NEVER”@B@R"
         : 0..96, DK

LOCALS
    c9 : INTEGER
AUXFIELDS
    aux_c9 "@G@BC9.@|@UCHILD DEFECATION AND FECES DISPOSAL@U@B@G" : (ENTER), EMPTY
    aux_say "@GThank you.
            @/@/Now I would like to ask you some questions about where your youngest child 0 - 36 months who is not the study child defecates and how you dispose of the feces@G"
            "@GAsante.
            @/@/Sasa, ningependa kukuuliza baadhi ya maswali kuhusu mahali ambapo mtoto wako mdogo mwenye umri wa miezi 0 - 36 ambaye sio mtoto anayezingatiwa katika mradi huu, huenda haja kubwa na jinsi ambavyo wewe hutupa kinyesi hicho.@G"
            : (ENTER), EMPTY
    aux_C901A "@G@BYOUNGEST CHILD@B 0 - 36 MONTHS WHO IS NOT STUDY CHILD@G
              @/@/@RPLEASE ENTER THE CHILD'S FULL NAMES:@R"
              : (ENTER), EMPTY
    aux_C903 "@RPROBE TO SEE IF SOMEONE IN HOUSEHOLD KNOWS@R" : (ENTER)
    aux_C906A "@G@BOLDEST CHILD@B 3 - 7 YEARS WHO IS NOT STUDY CHILD@G
              @/@/@RPLEASE ENTER THE CHILD'S FULL NAMES:@R"
              : (ENTER), EMPTY

LAYOUT
    BEFORE aux_c9 NEWPAGE
    AFTER aux_c9 NEWPAGE

    AFTER aux_say NEWPAGE

    BEFORE C906 NEWPAGE
    AFTER C906 NEWPAGE
RULES
    aux_c9

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
    IF (a.Thh [1].BA01.A5_0t3 > 1) OR ((c1.C102_status = UNBORN) AND (a.Thh [1].BA01.A5_0t3 > 0)) THEN
        aux_say
        aux_C901A
        TC901A
        C902
        IF (C902 = TODAY) OR (C902 = YESTERDAY) OR (C902 = TWO_DAY) THEN
            C903
            IF (NA IN C903) THEN
                FOR c9:= 1 TO 10 DO
                    IF (C903 [c9] = POTTY) OR (C903 [c9] = HOUSE) OR (C903 [c9] = WITHOUT) OR (C903 [c9] = INSIDE) OR (C903 [c9] = SPACE)
                    OR (C903 [c9] = BUSH) OR (C903 [c9] = TOILET) OR (C903 [c9] = NAPPY) OR (C903 [c9] = OTHER) THEN
                        ERROR "@R@BERROR!@B
                              @/@/You cannot select @R@BNot Applicable@B@R and at the same time select other options!
                              @/@/Please check your entry and try again.@R"
                    ENDIF
                ENDDO
            ENDIF
            IF NOT ((NAPPY IN C903) OR (NA IN C903) OR (C903 = DK) OR (TOILET IN C903)) THEN
                IF (OTHER IN C903) THEN
                    C903_oth
                ENDIF
                C904
                IF NOT (C904 = LEFT) THEN
                    IF (C904 = OTHER) THEN
                        C904_oth
                    ENDIF
                    C905
                    IF (NOTHING IN C905) THEN
                        FOR c9:= 1 TO 8 DO
                            IF (C905 [c9] = HANDS) OR (C905 [c9] = CLOTH) OR (C905 [c9] = SCRAP) OR (C905 [c9] = POTTY)
                            OR (C905 [c9] = JEMBE) OR (C905 [c9] = KIPUPUU) OR (C905 [c9] = OTHER) THEN
                                ERROR "@R@BERROR!@B
                                      @/@/You cannot select @R@BNot Applicable@B@R and at the same time select other options!
                                      @/@/Please check your entry and try again.@R"
                            ENDIF
                        ENDDO
                    ENDIF
                    IF (OTHER IN C905) THEN
                        C905_oth
                    ENDIF
                    C905b
                    IF (HOURS IN C905b) THEN
                        C905b_hr
                    ENDIF
                    IF (MINUTES IN C905b) THEN
                        C905b_min
                    ENDIF
                ENDIF
            ELSEIF NOT (TOILET IN C903) THEN
                IF (C903 = DK) THEN
                    aux_C903
                ENDIF
                C905
                IF (NOTHING IN C905) THEN
                    FOR c9:= 1 TO 8 DO
                        IF (C905 [c9] = HANDS) OR (C905 [c9] = CLOTH) OR (C905 [c9] = SCRAP) OR (C905 [c9] = POTTY)
                        OR (C905 [c9] = JEMBE) OR (C905 [c9] = KIPUPUU) OR (C905 [c9] = OTHER) THEN
                            ERROR "@R@BERROR!@B
                                  @/@/You cannot select @R@BNot Applicable@B@R and at the same time select other options!
                                  @/@/Please check your entry and try again.@R"
                        ENDIF
                    ENDDO
                 ENDIF
                IF (OTHER IN C905) THEN
                    C905_oth
                ENDIF
                C905b
                IF (HOURS IN C905b) THEN
                    C905b_hr
                ENDIF
                IF (MINUTES IN C905b) THEN
                    C905b_min
                ENDIF
            ENDIF
        ENDIF
    ENDIF
    C906
    IF (C906 = YES) THEN
        IF (C906 = YES) THEN
            aux_C906A
            TC906A
            C907
            IF (YEARS IN C907) THEN
                C907_yea
            ENDIF
            IF (C907_yea < 7) THEN
                IF (MONTHS IN C907) THEN
                    C907_mon
                ENDIF
            ENDIF
            C908
            IF NOT ((C908 = TOILET) OR (C908 = DK)) THEN
                IF (C908 = OTHER) THEN
                    C908_oth
                ENDIF
                C909
                IF NOT (C909 = LEFT) THEN
                    IF (C909 = OTHER) THEN
                        C909_oth
                    ENDIF
                    C910
                    IF (NOTHING IN C910) THEN
                        FOR c9:= 1 TO 8 DO
                            IF (C910 [c9] = HANDS) OR (C910 [c9] = CLOTH) OR (C910 [c9] = SCRAP) OR (C910 [c9] = POTTY)
                            OR (C910 [c9] = JEMBE) OR (C910 [c9] = KIPUPUU) OR (C910 [c9] = OTHER) THEN
                                ERROR "@R@BERROR!@B
                                      @/@/You cannot select @R@BNot Applicable@B@R and at the same time select other options!
                                      @/@/Please check your entry and try again.@R"
                            ENDIF
                        ENDDO
                    ENDIF
                    IF (OTHER IN C910) THEN
                        C910_oth
                    ENDIF
                    C910B
                    IF (HOURS IN C910B) THEN
                        C910B_hr
                    ENDIF
                    IF (MINUTES IN C910B) THEN
                        C910B_min
                    ENDIF
                ENDIF
            ENDIF
        ENDIF
    ENDIF
    C911
    IF (C911 = YES) THEN
        C912
        SIGNAL (C912 > 11) "@G@BALERT!@B
                           @/@/Are you sure children start using a latrine before 1 year old?
                           @/@/Remember to give the answer in @Bmonths@B, not years.@G"
    ENDIF
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (C906 = RESPONSE)) OR ((C911 = RESPONSE) OR (C912 = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
