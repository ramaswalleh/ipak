{3. DIARRHEA AND ILLNESS SYMPTOMS.}
{SYMPTOMS BLOCK}
BLOCK BlkC2
{TABLE ROW BLOCKS.}
{201}
BLOCK Blk201
FIELDS
    C201A "Did @B^C2_03A2@B have a @Bfever@B @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD A FEVER TODAY@R"
          "Je @B^C2_03A2@B alikuwa na @Bjoto@B @Uleo@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD A FEVER TODAY@R"
          : TYesNo, DK
    C201B "Did @B^C2_03A2@B have a @Bfever@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD A FEVER YESTERDAY@R"
          "Je @B^C2_03A2@B alikuwa na @Bjoto@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD A FEVER YESTERDAY@R"
          : TYesNo, DK
    C201C "Did @B^C2_03A2@B have a @Bfever@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD A FEVER THE DAY BEFORE YESTERDAY@R"
          "Je @B^C2_03A2@B alikuwa na @Bjoto@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD A FEVER THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C201D "Did @B^C2_03A2@B have a @Bfever@B in the @Ulast seven days (since this day last week)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD A FEVER IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          "Je @B^C2_03A2@B alikuwa na @Bjoto@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD A FEVER IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          : TYesNo, DK
RULES
    C201A
    C201B
    C201C
    IF (C201A = YES) OR (C201B = YES) OR (C201C = YES) THEN
        C201D:= YES
        C201D.SHOW
    ELSE
        C201D
    ENDIF
ENDBLOCK

{202}
BLOCK Blk202
FIELDS
    C202A "Did @B^C2_03A2@B @Bdiarrhea@B @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD DIARRHEA TODAY@R"
          "Je @B^C2_03A2@B ana @Bhara@B @Uleo@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD DIARRHEA TODAY@R"
          : TYesNo, DK
    C202B "Did @B^C2_03A2@B have @Bdiarrhea@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD DIARRHEA YESTERDAY@R"
          "Je @B^C2_03A2@B @Balihara@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD DIARRHEA YESTERDAY@R"
          : TYesNo, DK
    C202C "Did @B^C2_03A2@B have @Bdiarrhea@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD DIARRHEA THE DAY BEFORE YESTERDAY@R"
          "Je @B^C2_03A2@B @Balihara@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD DIARRHEA THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C202D "Did @B^C2_03A2@B have @Bdiarrhea@B in the @Ulast seven days (since this day last week)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD DIARRHEA IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          "Je @B^C2_03A2@B alikuwa ana @Bhara@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD DIARRHEA IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          : TYesNo, DK
RULES
    C202A
    C202B
    C202C
    IF (C202A = YES) OR (C202B = YES) OR (C202C = YES) THEN
        C202D:= YES
        C202D.SHOW
    ELSE
        C202D
    ENDIF
ENDBLOCK

{203}
BLOCK Blk203
FIELDS
    C203A "Did @B^C2_03A2@B have @Bthree or more defecation events@B @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS TODAY@R"
          "Je @B^C2_03A2@B amekuwa akienda choo @Bzaidi ya mara tatu@B @Uleo@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS TODAY@R"
          : TYesNo, DK
    C203B "Did @B^C2_03A2@B have @Bthree or more defecation events@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS YESTERDAY@R"
          "Je @B^C2_03A2@B alikuwa akienda choo @Bzaidi ya mara tatu@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS YESTERDAY@R"
          : TYesNo, DK
    C203C "Did @B^C2_03A2@B have @Bthree or more defecation events@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS THE DAY BEFORE YESTERDAY@R"
          "Je @B^C2_03A2@B alikuwa akienda choo @Bzaidi ya mara tatu@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C203D "Did @B^C2_03A2@B have @Bthree or more defecation events@B in the @Ulast seven days (since this day last week)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)?@R"
          "Je @B^C2_03A2@B alikuwa akienda choo @Bzaidi ya mara tatu kwa masaa ishirini na nne@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD THREE OR MORE DEFECATION EVENTS IN TWENTY-FOUR HOURS IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)?@R"
          : TYesNo, DK
RULES
    C203A
    C203B
    C203C
    IF (C203A = YES) OR (C203B = YES) OR (C203C = YES) THEN
        C203D:= YES
        C203D.SHOW
    ELSE
        C203D
    ENDIF
ENDBLOCK

{204}
BLOCK Blk204
FIELDS
    C204A "What is the @Bnumber of defecation events@B @B^C2_03A2@B have @Utoday@U? @B(NO CODE)@B
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NUMBER OF DEFECATIONS @B^C2_03A2@B HAD TODAY@R"
          "@B^C2_03A2@B alienda @Bhaja kubwa@B @Uleo@U mara ngapi? @B(NO CODE)@B
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NUMBER OF DEFECATIONS @B^C2_03A2@B HAD TODAY@R"
          : 0..20, DK
    C204B "What is the @Bnumber of defecation events@B @B^C2_03A2@B had @Uyesterday@U? @B(NO CODE)@B
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NUMBER OF DEFECATIONS @B^C2_03A2@B HAD YESTERDAY@R"
          "@B^C2_03A2@B alienda @Bhaja kubwa@B @Ujana@U mara ngapi? @B(NO CODE)@B
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NUMBER OF DEFECATIONS @B^C2_03A2@B HAD YESTERDAY@R"
          : 0..20, DK
RULES
    {NO CODE FIELDS. USER ENTERS VALUES HERE}
    IF (BC2 [I].TC2.B203.C203A = YES) THEN
        C204A
    ELSE
        C204A
    ENDIF
    C204B
ENDBLOCK

{205}
BLOCK Blk205
FIELDS
    C205A "Did @B^C2_03A2@B have @Bwatery or soft stool (unformed)@B @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD WATERY OR SOFT STOOL (UNFORMED) TODAY@R"
          "@B^C2_03A2@B alikuwa na @Bchoo chepesi au majimaji@B @Uleo@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD WATERY OR SOFT STOOL (UNFORMED) TODAY@R"
          : TYesNo, DK
    C205B "Did @B^C2_03A2@B have @Bwatery or soft stool (unformed)@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD WATERY OR SOFT STOOL (UNFORMED) YESTERDAY@R"
          "@B^C2_03A2@B alikuwa na @Bchoo chepesi au majimaji@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD WATERY OR SOFT STOOL (UNFORMED) YESTERDAY@R"
          : TYesNo, DK
    C205C "Did @B^C2_03A2@B have @Bwatery or soft stool (unformed)@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD WATERY OR SOFT STOOL (UNFORMED) THE DAY BEFORE YESTERDAY@R"
          "@B^C2_03A2@B alikuwa na @Bchoo chepesi au majimaji@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD WATERY OR SOFT STOOL (UNFORMED) THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C205D "Did @B^C2_03A2@B have @Bwatery or soft stool (unformed)@B in the @Ulast seven days (since this day last week)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD WATERY OR SOFT STOOL (UNFORMED) IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          "@B^C2_03A2@B alikuwa na @Bchoo chepesi au majimaji@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD WATERY OR SOFT STOOL (UNFORMED) IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          : TYesNo, DK
RULES
    C205A
    C205B
    C205C
    IF (C205A = YES) OR (C205B = YES) OR (C205C = YES) THEN
        C205D:= YES
        C205D.SHOW
    ELSE
        C205D
    ENDIF
ENDBLOCK

{206}
BLOCK Blk206
FIELDS
    C206A "Did @B^C2_03A2@B have @Bblood in their stool@B @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD BLOOD IN THEIR STOOL TODAY@R"
          "@B^C2_03A2@B alikuwa na @Bkinyesi kilicho na damu@B @Uleo@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD BLOOD IN THEIR STOOL TODAY@R"
          : TYesNo, DK
    C206B "Did @B^C2_03A2@B have @Bblood in their stool@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD BLOOD IN THEIR STOOL YESTERDAY@R"
          "@B^C2_03A2@B alikuwa na @Bkinyesi kilicho na damu@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD BLOOD IN THEIR STOOL YESTERDAY@R"
          : TYesNo, DK
    C206C "Did @B^C2_03A2@B have @Bblood in their stool@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD BLOOD IN THEIR STOOL THE DAY BEFORE YESTERDAY@R"
          "@B^C2_03A2@B alikuwa na @Bkinyesi kilicho na damu@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD BLOOD IN THEIR STOOL THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C206D "Did @B^C2_03A2@B have @Bblood in their stool@B in the @Ulast seven days (since this day last week)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD BLOOD IN THEIR STOOL IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          "@B^C2_03A2@B alikuwa na @Bkinyesi kilicho na damu@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD BLOOD IN THEIR STOOL IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          : TYesNo, DK
RULES
    C206A
    C206B
    C206C
    IF (C206A = YES) OR (C206B = YES) OR (C206C = YES) THEN
        C206D:= YES
        C206D.SHOW
    ELSE
        C206D
    ENDIF
ENDBLOCK

{207}
BLOCK Blk207
FIELDS
    C207A "Does @B^C2_03A2@B have @Bskin rash (anywhere on the body)@B @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS SKIN RASH (ANYWHERE ON THE BODY) TODAY@R"
          "@B^C2_03A2@B ana @Uupele (popote mwilini)@B @Uleo@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS SKIN RASH (ANYWHERE ON THE BODY) TODAY@R"
          : TYesNo, DK
    C207B "Did @B^C2_03A2@B have @Bskin rash (anywhere on the body)@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAVE SKIN RASH (ANYWHERE ON THE BODY) YESTERDAY@R"
          "@B^C2_03A2@B alikuwa na @Uupele (popote mwilini)@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAVE SKIN RASH (ANYWHERE ON THE BODY) YESTERDAY@R"
          : TYesNo, DK
    C207C "Did @B^C2_03A2@B have @Bskin rash (anywhere on the body)@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAVE SKIN RASH (ANYWHERE ON THE BODY) THE DAY BEFORE YESTERDAY@R"
          "@B^C2_03A2@B alikuwa na @Uupele (popote mwilini)@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAVE SKIN RASH (ANYWHERE ON THE BODY) THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C207D "Did @B^C2_03A2@B have @Bskin rash (anywhere on the body)@B in the @Ulast seven days (since this day last week) @U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAVE SKIN RASH (ANYWHERE ON THE BODY) IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          "@B^C2_03A2@B alikuwa na @Uupele (popote mwilini)@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAVE SKIN RASH (ANYWHERE ON THE BODY) IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          : TYesNo, DK
RULES
    C207A
    C207B
    C207C
    IF (C207A = YES) OR (C207B = YES) OR (C207C = YES) THEN
        C207D:= YES
        C207D.SHOW
    ELSE
        C207D
    ENDIF
ENDBLOCK

{208}
BLOCK Blk208
FIELDS
    C208A "Has @B^C2_03A2@B been experiencing a @Bconstant cough@B in the course of the day @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING A CONSTANT COUGH TODAY@R"
          "@B^C2_03A2@B ameshinda @Bakikohoa kila mara@B @Uleo hii@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING A CONSTANT COUGH TODAY@R"
          : TYesNo, DK
    C208B "Has @B^C2_03A2@B been experiencing a @Bconstant cough@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING A CONSTANT COUGH YESTERDAY@R"
          "Wajuwa kama @B^C2_03A2@B alishinda @Bakikohoa kila mara@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING A CONSTANT COUGH YESTERDAY@R"
          : TYesNo, DK
    C208C "Has @B^C2_03A2@B been experiencing a @Bconstant cough@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING A CONSTANT COUGH THE DAY BEFORE YESTERDAY@R"
          "Wajuwa kama @B^C2_03A2@B alishinda @Bakikohoa kila mara@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING A CONSTANT COUGH THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C208D "Has @B^C2_03A2@B been experiencing a @Bconstant cough@B in the @Ulast seven days (since this day last week)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING A CONSTANT COUGH IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          "Wajuwa kama @B^C2_03A2@B alishinda @Bakikohoa kila mara@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING A CONSTANT COUGH IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          : TYesNo, DK
RULES
    C208A
    C208B
    C208C
    IF (C208A = YES) OR (C208B = YES) OR (C208C = YES) THEN
        C208D:= YES
        C208D.SHOW
    ELSE
        C208D
    ENDIF
ENDBLOCK

{209}
BLOCK Blk209
FIELDS
    C209A "Has @B^C2_03A2@B been experiencing @Bcongestion / runny nose@B in the course of the day @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE TODAY@R"
          "@B^C2_03A2@B ameshikwa na @Bhoma / kuzibwa pua@B @Uleo hii@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE TODAY@R"
          : TYesNo, DK
    C209B "Would you know if @B^C2_03A2@B experienced @Bcongestion / runny nose@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE YESTERDAY@R"
          "Wajuwa kama @B^C2_03A2@B alishikwa na @Bhoma / kuzibwa pua@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE YESTERDAY@R"
          : TYesNo, DK
    C209C "Would you know if @B^C2_03A2@B experienced @Bcongestion / runny nose@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE THE DAY BEFORE YESTERDAY@R"
          "Wajuwa kama @B^C2_03A2@B alishikwa na @Bhoma / kuzibwa pua@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C209D "Would you know if @B^C2_03A2@B experienced @Bcongestion / runny nose@B
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)?@R"
          "Wajuwa kama @B^C2_03A2@B alishikwa na @Bhoma / kuzibwa pua@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING CONGESTION / RUNNY NOSE IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)?@R"
          : TYesNo, DK
RULES
    C209A
    C209B
    C209C
    IF (C209A = YES) OR (C209B = YES) OR (C209C = YES) THEN
        C209D:= YES
        C209D.SHOW
    ELSE
        C209D
    ENDIF
ENDBLOCK

{210}
BLOCK Blk210
FIELDS
    C210A "Has @B^C2_03A2@B been experiencing @Bpanting / wheezing / difficulty breathing@B in the course of the day @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING TODAY@R"
          "@B^C2_03A2@B ameshikwa na @Bkupungukiwa pumzi/kupumua kwa sauti finyu/kushindwa kupumua@B @Uleo hii@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING TODAY@R"
          : TYesNo, DK
    C210B "Has @B^C2_03A2@B been experiencing @Bpanting / wheezing / difficulty breathing@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING YESTERDAY@R"
          "@B^C2_03A2@B alishikwa na @Bkupungukiwa pumzi/kupumua kwa sauti finyu/kushindwa kupumua@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING YESTERDAY@R"
          : TYesNo, DK
    C210C "Has @B^C2_03A2@B been experiencing @Bpanting / wheezing / difficulty breathing@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING THE DAY BEFORE YESTERDAY@R"
          "@B^C2_03A2@B alishikwa na @Bkupungukiwa pumzi/kupumua kwa sauti finyu/kushindwa kupumua@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C210D "Has @B^C2_03A2@B been experiencing @Bpanting / wheezing / difficulty breathing@B in the @Ulast seven days (since this day last week)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          "@B^C2_03A2@B alishikwa na @Bkupungukiwa pumzi/kupumua kwa sauti finyu/kushindwa kupumua@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BEEN EXPERIENCING PANTING / WHEEZING / DIFFICULTY BREATHING IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          : TYesNo, DK
RULES
    C210A
    C210B
    C210C
    IF (C210A = YES) OR (C210B = YES) OR (C210C = YES) THEN
        C210D:=YES
        C210D.SHOW
    ELSE
        C210D
    ENDIF
ENDBLOCK

{211}
BLOCK Blk211
FIELDS
    C211A "Does @B^C2_03A2@B have any @Bbruising, scrapes or cuts@B @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BRUISING, SCRAPES OR CUTS TODAY@R"
          "@B^C2_03A2@B ana @Bmakwaruzo, kuchibuka, au kujikata@B @Uleo hii@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BRUISING, SCRAPES OR CUTS TODAY@R"
          : TYesNo, DK
    C211B "Did @B^C2_03A2@B get any @Bbruising, scrapes or cuts@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BRUISING, SCRAPES OR CUTS YESTERDAY@R"
          "@B^C2_03A2@B alipata @Bmakwaruzo, kuchibuka, au kujikata@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BRUISING, SCRAPES OR CUTS YESTERDAY@R"
          : TYesNo, DK
    C211C "Did @B^C2_03A2@B get any @Bbruising, scrapes or cuts@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BRUISING, SCRAPES OR CUTS THE DAY BEFORE YESTERDAY@R"
          "@B^C2_03A2@B alipata @Bmakwaruzo, kuchibuka, au kujikata@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BRUISING, SCRAPES OR CUTS THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C211D "Did @B^C2_03A2@B get any @Bbruising, scrapes or cuts@B in the @Ulast seven days (since this day last week)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BRUISING, SCRAPES OR CUTS IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          "@B^C2_03A2@B alipata @Bmakwaruzo, kuchibuka, au kujikata@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS BRUISING, SCRAPES OR CUTS IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          : TYesNo, DK
RULES
    C211A
    C211B
    C211C
    IF (C211A = YES) OR (C211B = YES) OR (C211C = YES) THEN
        C211D:= YES
        C211D.SHOW
    ELSE
        C211D
    ENDIF
ENDBLOCK

{212}
BLOCK Blk212
FIELDS
    C212A "Does @B^C2_03A2@B have any @Btoothache / teething@B @Utoday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS TOOTHACHE / TEETHING TODAY@R"
          "@B^C2_03A2@B @Banauumwa / kuota meno@B @Uleo hii@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS TOOTHACHE / TEETHING TODAY@R"
          : TYesNo, DK
    C212B "Did @B^C2_03A2@B get any @Btoothache / teething@B @Uyesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B GOT ANY TOOTHACHE / TEETHING YESTERDAY@R"
          "@B^C2_03A2@B @Baliuumwa / kuota meno@B @Ujana@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B GOT ANY TOOTHACHE / TEETHING YESTERDAY@R"
          : TYesNo, DK
    C212C "Did @B^C2_03A2@B get any @Btoothache / teething@B the @Uday before yesterday@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B GOT ANY TOOTHACHE / TEETHING THE DAY BEFORE YESTERDAY@R"
          "@B^C2_03A2@B @Baliuumwa / kuota meno@B @Ujuzi@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B GOT ANY TOOTHACHE / TEETHING THE DAY BEFORE YESTERDAY@R"
          : TYesNo, DK
    C212D "Did @B^C2_03A2@B get any @Btoothache / teething@B in the @Ulast seven days (since this day last week)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B GOT ANY TOOTHACHE / TEETHING IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          "@B^C2_03A2@B @Baliuumwa / kuota meno@B @Usiku saba zilizopita (tangu leo wiki iliyopita)@U?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B GOT ANY TOOTHACHE / TEETHING IN THE LAST SEVEN DAYS (SINCE THIS DAY LAST WEEK)@R"
          : TYesNo, DK
RULES
    C212A
    C212B
    C212C
    IF (C212A = YES) OR (C212B = YES) OR (C212C = YES) THEN
        C212D:= YES
        C212D.SHOW
    ELSE
        C212D
    ENDIF
ENDBLOCK

{213}
BLOCK Blk213
FIELDS
    C213_day "Days:" : 0..97
    C213_wks "Weeks:" : 0..97
RULES
    C213_day
    CHECK
        (C213_day < 15) "@R@BERROR!@B
                        @/@/The number of days entered as @B^C213_day@B is @Igreater@I than @B14@B.
                        @/@/Please select @BWeeks@B and enter the equivalent.@R"
    C213_wks
    CHECK
        (C213_wks < 5) "@R@BERROR!@B
                       @/@/The number of weeks entered as @B^C213_wks@B is @Igreater@I than @B4@B.
                       @/@/This number of weeks is equivalent in months that an entry for has not been facilitated because that frequency is erronious or too high.@R"
ENDBLOCK

{SYMPTOMS TABLE}
TABLE TblC2
FIELDS
    B201 : Blk201
    B202 : Blk202
    B203 : Blk203
    B204 : Blk204
    B205 : Blk205
    B206 : Blk206
    B207 : Blk207
    B208 : Blk208
    B209 : Blk209
    B210 : Blk210
    B211 : Blk211
    B212 : Blk212
RULES
    B201
    B202
    B203
    B204
    B205
    B206
    B207
    B208
    B209
    B210
    B211
    B212
ENDTABLE

{TABLE 213}
TABLE Tbl213
FIELDS
    B213 : Blk213
RULES
    B213
ENDTABLE

FIELDS
    C2_03A2 "Please enter @B^loc_label@B's first name:" : STRING [15]
    Childid "Child ID:" : TIndividualID
    C200A "Is @B^C2_03A2@B currently breastfeeding?"
          "Je @B^C2_03A2@B bado ananyonya?"
            : TYesNo
    C200B "Did you feed @B^C2_03A2@B any water, milk, or other food or liquid in addition to breast milk yesterday?"
          "Je, ulimpatia @B^C2_03A2@B maji, maziwa, kinywaji au kumlisha chakula kingine kwa kuongezea maziwa ya mama jana?"
          : TYesNo
    TC2 : TblC2
    T213 : Tbl213
    C214 "Has this child had malaria in the last 1 month?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD MALARIA IN THE LAST ONE MONTH@R"
         "Je mtoto huyu ameugua malaria kwa mwezi mmoja uliopita?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAD MALARIA IN THE LAST ONE MONTH@R"
         : TYesNo, DK
    C214A "Diagnosed positive in clinic in the last 1 month?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B WAS DIAGNOSED POSITIVE IN CLINIC IN THE LAST ONE MONTH@R"
          "Alipimwa na kupatikana kuwa na malaria kwenye kliniki mwezi moja iliyopita?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B WAS DIAGNOSED POSITIVE IN CLINIC IN THE LAST ONE MONTH@R"
          : TYesNo, DK
    C214B "Was a blood sample taken for this diagnosis?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF A BLOOD SAMPLE WAS TAKEN FOR THIS DIAGNOSIS@R"
          "Je sampuli ya damu ilichukuliwa wakati wa kupimwa huku?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF A BLOOD SAMPLE WAS TAKEN FOR THIS DIAGNOSIS@R"
          : TYesNo, DK
    C215 "Has this child had malaria in the last 3 months?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS HAD MALARIA IN THE LAST THREE MONTHS@R"
         "Je mtoto huyu ameugua malaria kwa miezi tatu iliyopita?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B HAS HAD MALARIA IN THE LAST THREE MONTHS@R"
         : TYesNo, DK
    C215AA "How many cases of malaria has this child had in the last 3 months?"
           "Kwa miezi mitatu iliyopita, mtoto huyu amekuwa na malaria mara ngapi?"
           : INTEGER [2]
    C215A "Diagnosed positive in clinic in the last 3 months?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B WAS DIAGNOSED POSITIVE IN CLINIC IN THE LAST THREE MONTHS@R"
          "Alipimwa na kupatikana kuwa na malaria kwenye kliniki miezi tatu iliyopita?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF @B^C2_03A2@B WAS DIAGNOSED POSITIVE IN CLINIC IN THE LAST THREE MONTHS@R"
          : TYesNo, DK
    C215B "Was a blood sample taken for this diagnosis?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF A BLOOD SAMPLE WAS TAKEN FOR THIS DIAGNOSIS@R"
          "Je sampuli ya damu ilichukuliwa wakati wa kupimwa huku?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF A BLOOD SAMPLE WAS TAKEN FOR THIS DIAGNOSIS@R"
          : TYesNo, DK
AUXFIELDS
    aux_oth "@RPlease remember to enter the @Byoungest other child 0 - 36 months@B in the study household.@R" : (ENTER)
    aux_C213 "@GFor how many days did @B^C2_03A2@B have diarrhea?@G
             @/@/@RRECORD LENGTH OF TIME IN DAYS OR WEEKS FOR THE MOST RECENT EPISODE.
             @/@/IF < 14 DAYS, RECORD THE RESPONSE IN DAYS.@R"
             "@GJe, @B^C2_03A2@B aliendesha kwa siku ngapi?@G
             @/@/@RRECORD LENGTH OF TIME IN DAYS OR WEEKS FOR THE MOST RECENT EPISODE.
             @/@/IF < 14 DAYS, RECORD THE RESPONSE IN DAYS.@R"
             : (ENTER), EMPTY
LAYOUT
    AFTER aux_oth NEWPAGE
    BEFORE C2_03A2 NEWPAGE

RULES
    IF (loc_label = 'Other Youngest Child') THEN
        aux_oth
    ENDIF
    C2_03A2.SHOW
    Childid.SHOW
    C200A
    IF (C200A = YES) THEN
        C200B
    ENDIF
    TC2
    IF (TC2.B202.C202A = YES) OR (TC2.B202.C202B = YES) OR (TC2.B202.C202C = YES) OR (TC2.B202.C202D = YES) THEN
        aux_C213
        T213
    ENDIF
    C214
    IF (C214 = YES) THEN
        C214A
        IF (C214A = YES) THEN
            C214B
        ENDIF
        C215AA
        C215A
        IF (C215A = YES) THEN
            C215B
        ENDIF
    ELSE
        C215
        IF (C215 = YES) THEN
            C215AA
            C215A
            IF (C215A = YES) THEN
                C215B
            ENDIF
        ENDIF
    ENDIF
ENDBLOCK
