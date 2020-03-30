BLOCK BlkS83
FIELDS
    S833 "How satisfied are you with the cleanliness of this compound?
         @/@/@RREAD RESPONSES@R"
         "Wewe umetosheka vipi na usafi wa boma hili?
         @/@/@RREAD RESPONSES@R"
         : (VERY "VERY SATISFIED" "UMETOSHEKA KABISA",
            SOMEWHAT "SOMEWHAT SATISFIED" "UMETOSHEKA KIASI",
            NOT_VERY "NOT VERY SATISFIED" "HUJATOSHEKA",
            NOT_AT_ALL "NOT AT ALL SATISFIED" "HUJATOSHEKA HATA KIDOGO ")
    S834 "Does contact with children's feces pose a risk to your health?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF CONTACT WITH CHILD'S FECES POSES A RISK TO YOUR HEALTH@R"
         "Je kushika kinyesi cha watoto kunahatarisha afya yako?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF CONTACT WITH CHILD'S FECES POSES A RISK TO YOUR HEALTH@R"
         : TYesNo, DK
    S835 "Does contact with animal feces ever pose a risk to your health?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF CONTACT WITH ANIMAL FECES POSES A RISK TO YOUR HEALTH@R"
         "Je kushika kinyesi cha wanyama kunahatarisha afya yako?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF CONTACT WITH ANIMAL FECES POSES A RISK TO YOUR HEALTH@R"
         : TYesNo, DK
    S836 "Do any other households in this community practice open defecation?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF ANY OTHER HOUSEHOLDS IN THIS COMMUNITY PRACTICE OPEN DEFECATION@R"
         "Kijijini humu, nyumba zingine huenda haja mahali pa wazi?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF ANY OTHER HOUSEHOLDS IN THIS COMMUNITY PRACTICE OPEN DEFECATION@R"
         : TYesNo, DK
    {S837 "When other people practice open defecation, does it pose a risk to your health?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF ANY OPEN DEFECATION PRACTICED BY OTHER PEOPLE POSES A HEALTH RISK@R"
         "Wakati watu wengine wanapoenda haja kubwa mahali ambapo ni wazi, je inahatarisha afya yako?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF ANY OPEN DEFECATION PRACTICED BY OTHER PEOPLE POSES A HEALTH RISK@R"
         : TYesNo, DK}
RULES
    S833
    S834
    S835
    S836
    {S837}
ENDBLOCK
