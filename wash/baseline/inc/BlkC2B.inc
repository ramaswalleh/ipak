{3. DIARRHEA AND ILLNESS SYMPTOMS.}

{TABLE ROW BLOCKS.}
{4201}
BLOCK Blk4201
FIELDS
    C4201A "Did @B[NAME]@B have a @Bfever@B @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD A FEVER TODAY@R"
           "Je @B[NAME]@B ana @Bjoto@B @Uleo@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD A FEVER TODAY@R"
           : TYesNo, DK
    C4201B "Did @B[NAME]@B have a @Bfever@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD A FEVER YESTERDAY@R"
           "Je @B[NAME]@B ana @Bjoto@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD A FEVER YESTERDAY@R"
           : TYesNo, DK
    C4201C "Did @B[NAME]@B have a @Bfever@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD A FEVER THE DAY BEFORE YESTERDAY@R"
           "Je @B[NAME]@B alikuwa na @Bjoto@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD A FEVER THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4201D "Did @B[NAME]@B have a @Bfever@B in the @Ulast seven days (since this day last week)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD A FEVER IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           "Je @B[NAME]@B ana @Bjoto@B @Ujuzi (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD A FEVER IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           : TYesNo, DK
RULES
    C4201A
    C4201B
    C4201C
    IF (C4201A = YES) OR (C4201B = YES) OR (C4201C = YES) THEN
        C4201D:= YES
        C4201D.SHOW
    ELSE
        C4201D
    ENDIF
ENDBLOCK

{4202}
BLOCK Blk4202
FIELDS
    C4202A "Did @B[NAME]@B @Bdiarrhea@B @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD DIARRHEA TODAY@R"
           "Je @B[NAME]@B ana @Bhara@B @Uleo@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD DIARRHEA TODAY@R"
           : TYesNo, DK
    C4202B "Did @B[NAME]@B have @Bdiarrhea@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD DIARRHEA YESTERDAY@R"
           "Je @B[NAME]@B @Balihara@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD DIARRHEA YESTERDAY@R"
           : TYesNo, DK
    C4202C "Did @B[NAME]@B have @Bdiarrhea@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD DIARRHEA THE DAY BEFORE YESTERDAY@R"
           "Je @B[NAME]@B @Balihara@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD DIARRHEA THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4202D "Did @B[NAME]@B have @Bdiarrhea@B in the @Ulast seven days (since this day last week)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD DIARRHEA IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           "Je @B[NAME]@B alikuwa ana @Bhara@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD DIARRHEA IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           : TYesNo, DK
RULES
    C4202A
    C4202B
    C4202C
    IF (C4202A = YES) OR (C4202B = YES) OR (C4202C = YES) THEN
        C4202D:= YES
        C4202D.SHOW
    ELSE
        C4202D
    ENDIF
ENDBLOCK

{4203}
BLOCK Blk4203
FIELDS
    C4203A "Did @B[NAME]@B have @Bthree or more defecation events in twenty-four hours@B @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS TODAY@R"
           "Je @B[NAME]@B amekuwa akienda choo @Bzaidi ya mara tatu kwa masaa ishirini na nne@B @Uleo@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS TODAY@R"
           : TYesNo, DK
    C4203B "Did @B[NAME]@B have @Bthree or more defecation events in twenty-four hours@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS YESTERDAY@R"
           "Je @B[NAME]@B alikuwa akienda choo @Bzaidi ya mara tatu kwa masaa ishirini na nne@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS YESTERDAY@R"
           : TYesNo, DK
    C4203C "Did @B[NAME]@B have @Bthree or more defecation events in twenty-four hours@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS THE DAY BEFORE YESTERDAY@R"
           "Je @B[NAME]@B alikuwa akienda choo @Bzaidi ya mara tatu kwa masaa ishirini na nne@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4203D "Did @B[NAME]@B have @Bthree or more defecation events@B in the @Ulast seven days (since this day last week)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)?@R"
           "Je @B[NAME]@B alikuwa akienda choo @Bzaidi ya mara tatu kwa masaa ishirini na nne@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)?@R"
           : TYesNo, DK
RULES
    C4203A
    C4203B
    C4203C
    IF (C4203A = YES) OR (C4203B = YES) OR (C4203C = YES) THEN
        C4203D:= YES
        C4203D.SHOW
    ELSE
        C4203D
    ENDIF
ENDBLOCK

{4204}
BLOCK Blk4204
FIELDS
    C4204A "What is the @Bnumber of defecation events@B @B[NAME]@B have @Utoday@U? @B(NO CODE)@B
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NUMBER OF DEFECATIONS @B[NAME]@B HAD TODAY@R"
           "@B[NAME]@B alienda @Bhaja kubwa@B @Uleo@U mara ngapi? @B(NO CODE)@B
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NUMBER OF DEFECATIONS @B[NAME]@B HAD TODAY@R"
           : 0..20, DK
    C4204B "What is the @Bnumber of defecation events@B @B[NAME]@B had @Uyesterday@U? @B(NO CODE)@B
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NUMBER OF DEFECATIONS @B[NAME]@B HAD YESTERDAY@R"
           "@B[NAME]@B alienda @Bhaja kubwa@B @Ujana@U mara ngapi? @B(NO CODE)@B
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NUMBER OF DEFECATIONS @B[NAME]@B HAD YESTERDAY@R"
           : 0..20, DK
RULES
    {NO CODE FIELDS. USER ENTERS VALUES HERE}
    IF (BC2B.TC2.B4203.C4203A = YES) THEN
        C4204A
    ELSE
        C4204A
    ENDIF
    C4204B
ENDBLOCK

{4205}
BLOCK Blk4205
FIELDS
    C4205A "Did @B[NAME]@B have @Bwatery or soft stool (unformed)@B @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD WATERY OR SOFT STOOL (UNFORMED) TODAY@R"
           "@B[NAME]@B alikuwa na @Bchoo chepesi au majimaji@B @Uleo@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD WATERY OR SOFT STOOL (UNFORMED) TODAY@R"
           : TYesNo, DK
    C4205B "Did @B[NAME]@B have @Bwatery or soft stool (unformed)@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD WATERY OR SOFT STOOL (UNFORMED) YESTERDAY@R"
           "@B[NAME]@B alikuwa na @Bchoo chepesi au majimaji@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD WATERY OR SOFT STOOL (UNFORMED) YESTERDAY@R"
           : TYesNo, DK
    C4205C "Did @B[NAME]@B have @Bwatery or soft stool (unformed)@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD WATERY OR SOFT STOOL (UNFORMED) THE DAY BEFORE YESTERDAY@R"
           "@B[NAME]@B alikuwa na @Bchoo chepesi au majimaji@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD WATERY OR SOFT STOOL (UNFORMED) THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4205D "Did @B[NAME]@B have @Bwatery or soft stool (unformed)@B in the @Ulast seven days (since this day last week)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD WATERY OR SOFT STOOL (UNFORMED) IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           "@B[NAME]@B alikuwa na @Bchoo chepesi au majimaji@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD WATERY OR SOFT STOOL (UNFORMED) IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           : TYesNo, DK
RULES
    C4205A
    C4205B
    C4205C
    IF (C4205A = YES) OR (C4205B = YES) OR (C4205C = YES) THEN
        C4205D:= YES
        C4205D.SHOW
    ELSE
        C4205D
    ENDIF
ENDBLOCK

{4206}
BLOCK Blk4206
FIELDS
    C4206A "Did @B[NAME]@B have @Bblood in their stool@B @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD BLOOD IN THEIR STOOL TODAY@R"
           "@B[NAME]@B alikuwa na @Bkinyesi kilicho na damu@B @Uleo@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD BLOOD IN THEIR STOOL TODAY@R"
           : TYesNo, DK
    C4206B "Did @B[NAME]@B have @Bblood in their stool@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD BLOOD IN THEIR STOOL YESTERDAY@R"
           "@B[NAME]@B alikuwa na @Bkinyesi kilicho na damu@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD BLOOD IN THEIR STOOL YESTERDAY@R"
           : TYesNo, DK
    C4206C "Did @B[NAME]@B have @Bblood in their stool@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD BLOOD IN THEIR STOOL THE DAY BEFORE YESTERDAY@R"
           "@B[NAME]@B alikuwa na @Bkinyesi kilicho na damu@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD BLOOD IN THEIR STOOL THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4206D "Did @B[NAME]@B have @Bblood in their stool@B in the @Ulast seven days (since this day last week)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD BLOOD IN THEIR STOOL IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           "@B[NAME]@B alikuwa na @Bkinyesi kilicho na damu@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD BLOOD IN THEIR STOOL IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           : TYesNo, DK
RULES
    C4206A
    C4206B
    C4206C
    IF (C4206A = YES) OR (C4206B = YES) OR (C4206C = YES) THEN
        C4206D:= YES
        C4206D.SHOW
    ELSE
        C4206D
    ENDIF
ENDBLOCK

{207}
BLOCK Blk4207
FIELDS
    C4207A "Does @B[NAME]@ have @Bskin rash (anywhere on the body)@B @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS SKIN RASH (ANYWHERE ON THE BODY) TODAY@R"
           "@B[NAME]@ ana @Uupele (popote mwilini)@B @Uleo@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS SKIN RASH (ANYWHERE ON THE BODY) TODAY@R"
           : TYesNo, DK
    C4207B "Did @B[NAME]@ have @Bskin rash (anywhere on the body)@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAVE SKIN RASH (ANYWHERE ON THE BODY) YESTERDAY@R"
           "@B[NAME]@ alikuwa na @Uupele (popote mwilini)@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAVE SKIN RASH (ANYWHERE ON THE BODY) YESTERDAY@R"
           : TYesNo, DK
    C4207C "Did @B[NAME]@ have @Bskin rash (anywhere on the body)@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAVE SKIN RASH (ANYWHERE ON THE BODY) THE DAY BEFORE YESTERDAY@R"
           "@B[NAME]@ alikuwa na @Uupele (popote mwilini)@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAVE SKIN RASH (ANYWHERE ON THE BODY) THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4207D "Did @B[NAME]@ have @Bskin rash (anywhere on the body)@B in the @Ulast seven days (since this day last week) @U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAVE SKIN RASH (ANYWHERE ON THE BODY) IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           "@B[NAME]@ alikuwa na @Uupele (popote mwilini)@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAVE SKIN RASH (ANYWHERE ON THE BODY) IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           : TYesNo, DK
RULES
    C4207A
    C4207B
    C4207C
    IF (C4207A = YES) OR (C4207B = YES) OR (C4207C = YES) THEN
        C4207D:= YES
        C4207D.SHOW
    ELSE
        C4207D
    ENDIF
ENDBLOCK

{4208}
BLOCK Blk4208
FIELDS
    C4208A "Has @B[NAME]@B been experiencing a @Bconstant cough@B in the course of the day @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING A CONSTANT COUGH TODAY@R"
           "@B[NAME]@B ameshinda @Bakikohoa kila mara@B @Uleo hii@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING A CONSTANT COUGH TODAY@R"
           : TYesNo, DK
    C4208B "Has @B[NAME]@B been experiencing a @Bconstant cough@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING A CONSTANT COUGH YESTERDAY@R"
           "Wajuwa kama @B[NAME]@B alishinda @Bakikohoa kila mara@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING A CONSTANT COUGH YESTERDAY@R"
           : TYesNo, DK
    C4208C "Has @B[NAME]@B been experiencing a @Bconstant cough@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING A CONSTANT COUGH THE DAY BEFORE YESTERDAY@R"
           "Wajuwa kama @B[NAME]@B alishinda @Bakikohoa kila mara@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING A CONSTANT COUGH THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4208D "Has @B[NAME]@B been experiencing a @Bconstant cough@B in the @Ulast seven days (since this day last week)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING A CONSTANT COUGH IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           "Wajuwa kama @B[NAME]@B alishinda @Bakikohoa kila mara@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING A CONSTANT COUGH IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           : TYesNo, DK
RULES
    C4208A
    C4208B
    C4208C
    IF (C4208A = YES) OR (C4208B = YES) OR (C4208C = YES) THEN
        C4208D:= YES
        C4208D.SHOW
    ELSE
        C4208D
    ENDIF
ENDBLOCK

{4209}
BLOCK Blk4209
FIELDS
    C4209A "Has @B[NAME]@B been experiencing @Bcongestion / runny nose@B in the course of the day @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE TODAY@R"
           "@B[NAME]@B ameshikwa na @Bhoma / kuzibwa pua@B @Uleo hii@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE TODAY@R"
           : TYesNo, DK
    C4209B "Would you know if @B[NAME]@B experienced @Bcongestion / runny nose@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE YESTERDAY@R"
           "Wajuwa kama @B[NAME]@B alishikwa na @Bhoma / kuzibwa pua@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE YESTERDAY@R"
           : TYesNo, DK
    C4209C "Would you know if @B[NAME]@B experienced @Bcongestion / runny nose@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE THE DAY BEFORE YESTERDAY@R"
           "Wajuwa kama @B[NAME]@B alishikwa na @Bhoma / kuzibwa pua@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4209D "Would you know if @B[NAME]@B experienced @Bcongestion / runny nose@B
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)?@R"
           "Wajuwa kama @B[NAME]@B alishikwa na @Bhoma / kuzibwa pua@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)?@R"
           : TYesNo, DK
RULES
    C4209A
    C4209B
    C4209C
    IF (C4209A = YES) OR (C4209B = YES) OR (C4209C = YES) THEN
        C4209D:= YES
        C4209D.SHOW
    ELSE
        C4209D
    ENDIF
ENDBLOCK

{4210}
BLOCK Blk4210
FIELDS
    C4210A "Has @B[NAME]@B been experiencing @Bpanting / wheezing / difficulty breathing@B in the course of the day @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING TODAY@R"
           "@B[NAME]@B ameshikwa na @Bkupungukiwa pumzi/kupumua kwa sauti finyu/kushindwa kupumua@B @Uleo hii@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING TODAY@R"
           : TYesNo, DK
    C4210B "Has @B[NAME]@B been experiencing @Bpanting / wheezing / difficulty breathing@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING YESTERDAY@R"
           "@B[NAME]@B alishikwa na @Bkupungukiwa pumzi/kupumua kwa sauti finyu/kushindwa kupumua@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING YESTERDAY@R"
           : TYesNo, DK
    C4210C "Has @B[NAME]@B been experiencing @Bpanting / wheezing / difficulty breathing@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING THE DAY BEFORE YESTERDAY@R"
           "@B[NAME]@B alishikwa na @Bkupungukiwa pumzi/kupumua kwa sauti finyu/kushindwa kupumua@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4210D "Has @B[NAME]@B been experiencing @Bpanting / wheezing / difficulty breathing@B in the @Ulast seven days (since this day last week)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           "@B[NAME]@B alishikwa na @Bkupungukiwa pumzi/kupumua kwa sauti finyu/kushindwa kupumua@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           : TYesNo, DK
RULES
    C4210A
    C4210B
    C4210C
    IF (C4210A = YES) OR (C4210B = YES) OR (C4210C = YES) THEN
        C4210D:=YES
        C4210D.SHOW
    ELSE
        C4210D
    ENDIF
ENDBLOCK

{4211}
BLOCK Blk4211
FIELDS
    C4211A "Does @B[NAME]@B have any @Bbruising, scrapes or cuts@B @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BRUISING, SCRAPES OR CUTS TODAY@R"
           "@B[NAME]@B ana @Bmakwaruzo, kuchibuka, au kujikata@B @Uleo hii@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BRUISING, SCRAPES OR CUTS TODAY@R"
           : TYesNo, DK
    C4211B "Did @B[NAME]@B get any @Bbruising, scrapes or cuts@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BRUISING, SCRAPES OR CUTS YESTERDAY@R"
           "@B[NAME]@B alipata @Bmakwaruzo, kuchibuka, au kujikata@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BRUISING, SCRAPES OR CUTS YESTERDAY@R"
           : TYesNo, DK
    C4211C "Did @B[NAME]@B get any @Bbruising, scrapes or cuts@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BRUISING, SCRAPES OR CUTS THE DAY BEFORE YESTERDAY@R"
           "@B[NAME]@B alipata @Bmakwaruzo, kuchibuka, au kujikata@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BRUISING, SCRAPES OR CUTS THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4211D "Did @B[NAME]@B get any @Bbruising, scrapes or cuts@B in the @Ulast seven days (since this day last week)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BRUISING, SCRAPES OR CUTS IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           "@B[NAME]@B alipata @Bmakwaruzo, kuchibuka, au kujikata@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS BRUISING, SCRAPES OR CUTS IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           : TYesNo, DK
RULES
    C4211A
    C4211B
    C4211C
    IF (C4211A = YES) OR (C4211B = YES) OR (C4211C = YES) THEN
        C4211D:= YES
        C4211D.SHOW
    ELSE
        C4211D
    ENDIF
ENDBLOCK

{212}
BLOCK Blk4212
FIELDS
    C4212A "Does @B[NAME]@B have any @Btoothache / teething@B @Utoday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS TOOTHACHE / TEETHING TODAY@R"
           "@B[NAME]@B @Banauumwa / kuota meno@B @Uleo hii@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS TOOTHACHE / TEETHING TODAY@R"
           : TYesNo, DK
    C4212B "Did @B[NAME]@B get any @Btoothache / teething@B @Uyesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B GOT ANY TOOTHACHE / TEETHING YESTERDAY@R"
           "@B[NAME]@B @Baliuumwa / kuota meno@B @Ujana@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B GOT ANY TOOTHACHE / TEETHING YESTERDAY@R"
           : TYesNo, DK
    C4212C "Did @B[NAME]@B get any @Btoothache / teething@B the @Uday before yesterday@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B GOT ANY TOOTHACHE / TEETHING THE DAY BEFORE YESTERDAY@R"
           "@B[NAME]@B @Baliuumwa / kuota meno@B @Ujuzi@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B GOT ANY TOOTHACHE / TEETHING THE DAY BEFORE YESTERDAY@R"
           : TYesNo, DK
    C4212D "Did @B[NAME]@B get any @Btoothache / teething@B in the @Ulast seven days (since this day last week)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B GOT ANY TOOTHACHE / TEETHING IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           "@B[NAME]@B @Baliuumwa / kuota meno@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B GOT ANY TOOTHACHE / TEETHING IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
           : TYesNo, DK
RULES
    C4212A
    C4212B
    C4212C
    IF (C4212A = YES) OR (C4212B = YES) OR (C4212C = YES) THEN
        C4212D:= YES
        C4212D.SHOW
    ELSE
        C4212D
    ENDIF
ENDBLOCK

{213}
BLOCK Blk4213
FIELDS
    C4213_day "Days:" : 0..97
    C4213_wks "Weeks:" : 0..97
RULES
    C4213_day
    CHECK
        (C4213_day < 15) "@R@BERROR!@B
                         @/@/The number of days entered as @B^C4213_day@B is @Igreater@I than @B14@B.
                         @/@/Please select @BWeeks@B and enter the equivalent.@R"
    C4213_wks
    CHECK
        (C4213_wks < 5) "@R@BERROR!@B
                        @/@/The number of weeks entered as @B^C4213_wks@B is @Igreater@I than @B4@B.
                        @/@/This number of weeks is equivallent in months that an entry for has not been facilitated because that frequency is erronious or too high.@R"
ENDBLOCK

{SYMPTOMS TABLE}
TABLE TblC2
FIELDS
    B4201 : Blk4201
    B4202 : Blk4202
    B4203 : Blk4203
    B4204 : Blk4204
    B4205 : Blk4205
    B4206 : Blk4206
    B4207 : Blk4207
    B4208 : Blk4208
    B4209 : Blk4209
    B4210 : Blk4210
    B4211 : Blk4211
    B4212 : Blk4212
RULES
    B4201
    B4202
    B4203
    B4204
    B4205
    B4206
    B4207
    B4208
    B4209
    B4210
    B4211
    B4212
ENDTABLE

{TABLE 4213}
TABLE Tbl4213
FIELDS
    B4213 : Blk4213
RULES
    B4213
ENDTABLE

{SYMPTOMS BLOCK}
BLOCK BlkC2B
FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    C23A1 "Please enter the child's first name:" : STRING [15]
    PCid "Parasite child ID:" : TIndividualID
    C4200A "Is @B^C23A1@B currently breastfeeding?"
          "Je @B^C23A1@B bado ananyonya?"
            : TYesNo
    C4200B "Did you feed your baby any water, milk, or other food or liquid in addition to breast milk yesterday?"
           "Je, ulimpatia mtoto wako maji, maziwa, kinywaji au kumlisha chakula kingine kwa kuongezea maziwa ya mama jana?"
           : TYesNo
    TC2 : TblC2
    T4213 : Tbl4213
    C4214 "Has this child had malaria in the last 1 month?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD MALARIA IN THE LAST ONE MONTH@R"
          "Je mtoto huyu ameugua malaria kwa mwezi mmoja uliopita?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAD MALARIA IN THE LAST ONE MONTH@R"
          : TYesNo, DK
    C4214A "Diagnosed positive in clinic in the last 1 month?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B WAS DIAGNOSED POSITIVE IN CLINIC IN THE LAST ONE MONTH@R"
           "Alipimwa na kupatikana kuwa na malaria kwenye kliniki mwezi moja iliyopita?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B WAS DIAGNOSED POSITIVE IN CLINIC IN THE LAST ONE MONTH@R"
           : TYesNo, DK
    C4214B "Was a blood sample taken for this diagnosis?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF A BLOOD SAMPLE WAS TAKEN FOR THIS DIAGNOSIS@R"
           "Je sampuli ya damu ilichukuliwa wakati wa kupumwa huku?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF A BLOOD SAMPLE WAS TAKEN FOR THIS DIAGNOSIS@R"
           : TYesNo, DK
    C4215 "Has this child had malaria in the last 3 months?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS HAD MALARIA IN THE LAST THREE MONTHS@R"
          "Je mtoto huyu ameugua malaria kwa miezi tatu iliyopita?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B HAS HAD MALARIA IN THE LAST THREE MONTHS@R"
          : TYesNo, DK
    C4215AA "How many cases of malaria has this child had in the last 3 months?"
            "Kwa miezi mitatu iliyopita, mtoto huyu amekuwa na malaria marangapi?"
            : 0..99
    C4215A "Diagnosed positive in clinic in the last 3 months?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B WAS DIAGNOSED POSITIVE IN CLINIC IN THE LAST THREE MONTHS@R"
           "Alipimwa na kupatikana kuwa na malaria kwenye kliniki miezi tatu iliyopita?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B[NAME]@B WAS DIAGNOSED POSITIVE IN CLINIC IN THE LAST THREE MONTHS@R"
           : TYesNo, DK
    C4215B "Was a blood sample taken for this diagnosis?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF A BLOOD SAMPLE WAS TAKEN FOR THIS DIAGNOSIS@R"
           "Je sampuli ya damu ilichukuliwa wakati wa kupumwa huku?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF A BLOOD SAMPLE WAS TAKEN FOR THIS DIAGNOSIS@R"
           : TYesNo, DK
    gift "Was gift given?" : TYesNo
    why "Why?
        @/@/@RPLEASE EXPLAIN:@R" : STRING [244]

AUXFIELDS
    aux_c2b "@G@BC.2B@|@UDIARRHEA AND ILLNESS SYMPTOMS@U@B@G" : (ENTER), EMPTY
    aux_read "@GThank you.
             @/@/Now I am going to ask you some questions about the health of your [child / children].
             @/@/Please answer each question as accurately as you can.
             @/@/If you don't know the answer to a question, say “@G@B@II don't know@I@B@G”."
             "@GAsante.
             @/@/Sasa ningependa kukuuliza maswali kuhusu afya ya [mwanao / wanao].
             @/@/Tafadhali jibu kila swali kwa usahihi jinsi uwezavyo.
             @/@/Ikiwa hujui jibu la swali, sema “@G@B@Isijui@I@B@G”."
             : (ENTER), EMPTY
    aux_C4213 "@GFor how many days did @G@B^C23A1@B@G have diarrhea?@G
             @/@/@RRECORD LENGTH OF TIME IN DAYS OR WEEKS FOR THE MOST RECENT EPISODE.
             @/@/IF < 14 DAYS, RECORD THE RESPONSE IN DAYS.@R"
             "@GJe, @G@B^C23A1@B@G aliendesha kwa siku ngapi?@G
             @/@/@RRECORD LENGTH OF TIME IN DAYS OR WEEKS FOR THE MOST RECENT EPISODE.
             @/@/IF < 14 DAYS, RECORD THE RESPONSE IN DAYS.@R"
             : (ENTER), EMPTY
    aux_say "@GThank you very much for your time.@G
            @/@/@RPRESENT SECONDARY RESPONDENT WITH A SMALL GIFT OF APPRECIATION@R"
            "@GNimeshukuru sana kwa wakati wako.@G
            @/@/@RPRESENT SECONDARY RESPONDENT WITH A SMALL GIFT OF APPRECIATION@R"
            : (ENTER)

LAYOUT
    BEFORE aux_c2b NEWPAGE
    AFTER aux_c2b NEWPAGE

    AFTER aux_read NEWPAGE

RULES
    aux_c2b

    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    aux_read
    C23A1
    IF ((stimestamp = EMPTY) AND (C23A1 = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    PCid.SHOW
    C4200A
    IF (C4200A = YES) THEN
        C4200B
    ENDIF
    TC2
    IF (TC2.B4202.C4202A = YES) OR (TC2.B4202.C4202B = YES) OR (TC2.B4202.C4202C = YES) OR (TC2.B4202.C4202D = YES) THEN
        aux_C4213
        T4213
    ENDIF
    C4214
    IF (C4214 = YES) THEN
        C4214A
        IF (C4214A = YES) THEN
            C4214B
        ENDIF
        C4215AA
        C4215A
        IF (C4215A = YES) THEN
            C4215B
        ENDIF
    ELSE
        C4215
        IF (C4215 = YES) THEN
            C4215AA
            C4215A
            IF (C4215A = YES) THEN
                C4215B
            ENDIF
        ENDIF
    ENDIF
    aux_say
    gift
    IF (gift = NO) THEN
        why
    ENDIF

    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (gift = YES)) OR ((etimestamp = EMPTY) AND (why = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
