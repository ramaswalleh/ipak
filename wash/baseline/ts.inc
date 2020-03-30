BLOCK modts
    EXTERNALS
        GetLocDetl : GetLocationDetails ('..\ext\LocDetail')

{TYPES}
TYPE
    TRelation = (SPOUSE (1) "Spouse",
                 MOTHER (2) "Mother",
                 FATHER (3) "Father",
                 SISTER (4) "Sister",
                 BROTHER (5) "Brother",
                 MOTHER_IN_LAW (6) "Mother-in-law",
                 FATHER_IN_LAW (7) "Father-in-law",
                 SISTER_IN_LAW (8) "Sister-in-law",
                 BROTHER_IN_LAW (9) "Brother-in-law",
                 CO_WIFE (10) "Co-wife",
                 OTHER_RELATIVE (11) "Other relative",
                 FRIEND (12) "Friend",
                 OTHER (77) "Other")

    TTown = (NAIROBI "Nairobi",
             MOMBASA "Mombasa",
             KISUMU "Kisumu",
             ELDORET "Eldoret",
             KAKAMEGA "Kakamega town",
             BUNGOMA "Bungoma town",
             OTHER "Other",
             UNLIKELY "Unlikely to move")

{COMPOUND HEAD'S FULL NAMES BLOCK}
BLOCK BlkB39d
FIELDS
    B39d_fname "Compound head's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE COMPOUND HEAD'S FIRST NAME@R"
               : STRING [15], DK
    B39d_sname "Compound head's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE COMPOUND HEAD'S SECOND NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
    B39d_lname "Compound head's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE COMPOUND HEAD'S LAST NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
RULES
    B39d_fname
    B39d_sname
    B39d_lname
ENDBLOCK

{OTHER PERSON'S FULL NAMES BLOCK}
BLOCK BlkB39d_oth
FIELDS
    B39d_oth_fname "Other person's @Bfirst@B name:
                   @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE OTHER PERSON'S FIRST NAME@R"
                   : STRING [15], DK
    B39d_oth_sname "Other person's @Bsecond@B name:
                   @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE OTHER PERSON'S SECOND NAME
                   @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                   : STRING [15], DK
    B39d_oth_lname "Other person's @Blast@B name:
                   @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE OTHER PERSON'S LAST NAME
                   @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                   : STRING [15], DK
RULES
    B39d_oth_fname
    B39d_oth_sname
    B39d_oth_lname
ENDBLOCK

{ANYONE THERE'S FULL NAMES BLOCK}
BLOCK BlkB39h
FIELDS
    B39h_fname "Anyone there's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW ANYONE THERE'S FIRST NAME@R"
               : STRING [15], DK
    B39h_sname "Anyone there's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW ANYONE THERE'S SECOND NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
    B39h_lname "Anyone there's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW ANYONE THERE'S LAST NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
RULES
    B39h_fname
    B39h_sname
    B39h_lname
ENDBLOCK

{PERSON LIKLEY TO STAY BEHIND'S FULL NAMES BLOCK}
BLOCK BlkB39i
FIELDS
    B39i_fname "Person likely to stay behind's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PERSON LIKELY TO STAY BEHIND'S FIRST NAME@R"
               : STRING [15], DK
    B39i_sname "Person likely to stay behind's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PERSON LIKELY TO STAY BEHIND'S SECOND NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
    B39i_lname "Person likely to stay behind's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE PERSON LIKELY TO STAY BEHIND'S LAST NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
RULES
    B39i_fname
    B39i_sname
    B39i_lname
ENDBLOCK

{RESPONDENT'S FATHER'S FULL NAMES BLOCK}
{BLOCK BlkB39j
FIELDS
    B39j_fname "Respondent's father's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER FATHER'S FIRST NAME@R"
               : STRING [15], DK
    B39j_sname "Respondent's father's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER FATHER'S SECOND NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
    B39j_lname "Respondent's father's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER FATHER'S LAST NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
RULES
    B39j_fname
    B39j_sname
    B39j_lname
ENDBLOCK

{RESPONDENT'S MOTHER'S FULL NAMES BLOCK}
BLOCK BlkB39M
FIELDS
    B39M_fname "Respondent's mother's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER MOTHER'S FIRST NAME@R"
               : STRING [15], DK
    B39M_sname "Respondent's mother's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER MOTHER'S SECOND NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
    B39M_lname "Respondent's mother's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER MOTHER'S LAST NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
RULES
    B39M_fname
    B39M_sname
    B39M_lname
ENDBLOCK}

{SOMEONE OTHER THAN RESPONDENT'S FULL NAMES BLOCK}
BLOCK BlkB39O
FIELDS
    B39O_fname "Someone other than respondent's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW SOMEONE OTHER THAN RESPONDENT'S FIRST NAME@R"
               : STRING [15], DK
    B39O_sname "Someone other than respondent's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW SOMEONE OTHER THAN RESPONDENT'S SECOND NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
    B39O_lname "Someone other than respondent's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW SOMEONE OTHER THAN RESPONDENT'S LAST NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
RULES
    B39O_fname
    B39O_sname
    B39O_lname
ENDBLOCK

{COLLEAGUE'S FULL NAMES BLOCK}
BLOCK BlkB39T
FIELDS
    B39T_fname "Colleague's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW COLLEAGUE'S FIRST NAME@R"
               : STRING [15], DK
    B39T_sname "Colleague's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW COLLEAGUE'S SECOND NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
    B39T_lname "Colleague's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW COLLEAGUE'S LAST NAME
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : STRING [15], DK
RULES
    B39T_fname
    B39T_sname
    B39T_lname
ENDBLOCK

{COMPOUND HEAD'S FULL NAMES TABLE}
TABLE TblB39d
FIELDS
    BB39d : BlkB39d
RULES
    BB39d
ENDTABLE

{OTHER PERSON'S FULL NAMES TABLE}
TABLE TblB39d_oth
FIELDS
    BB39d_oth : BlkB39d_oth
RULES
    BB39d_oth
ENDTABLE

{ANYONE THERE'S FULL NAMES TABLE}
TABLE TblB39h
FIELDS
    BB39h : BlkB39h
RULES
    BB39h
ENDTABLE

{PERSON LIKELY TO STAY BEHIND'S FULL NAMES TABLE}
TABLE TblB39i
FIELDS
    BB39i : BlkB39i
RULES
    BB39i
ENDTABLE

{RESPONDENT'S FATHER'S FULL NAMES TABLE}
{TABLE TblB39j
FIELDS
    BB39j : BlkB39j
RULES
    BB39j
ENDTABLE

{RESPONDENT'S MOTHER'S FULL NAMES TABLE}
TABLE TblB39M
FIELDS
    BB39M : BlkB39M
RULES
    BB39M
ENDTABLE}

{SOMEONE OTHER THAN RESPONDENT'S FULL NAMES TABLE}
TABLE TblB39O
FIELDS
    BB39O : BlkB39O
RULES
    BB39O
ENDTABLE

{COLLEAGUE'S FULL NAMES TABLE}
TABLE TblB39T
FIELDS
    BB39T : BlkB39T
RULES
    BB39T
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    B39C "Other than the village of your ancestral home and the village we are currently in, is there another village where your family lives, or where you visit frequently?"
         "Mbali na kijiji chako cha nyumbani na kile unachoishi sasa, je kuna kijiji kingine ambacho familia yako huishi au wewe hutembelea mara kwa mara?"
         : TYesNo
    B39d_N2A "Village Name:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF ANOTHER VILLAGE WHERE HER FAMILY LIVES OR WHERE SHE FREQUENTLY VISITS@R"
             : STRING [30], DK
    B39d_N2B "District:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DISTRICT OF ANOTHER VILLAGE WHERE HER FAMILY LIVES OR WHERE SHE FREQUENTLY VISITS@R"
             : STRING [30], DK
    B39d_N2C "Division:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DIVISION OF ANOTHER VILLAGE WHERE HER FAMILY LIVES OR WHERE SHE FREQUENTLY VISITS@R"
             : STRING [30], DK
    B39d_N2D "Location:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE LOCATION OF ANOTHER VILLAGE WHERE HER FAMILY LIVES OR WHERE SHE FREQUENTLY VISITS@R"
             : STRING [30], DK
    B39d_N2E "Sub-Location:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE SUB-LOCATION OF ANOTHER VILLAGE WHERE HER FAMILY LIVES OR WHERE SHE FREQUENTLY VISITS@R"
             : STRING [30], DK
    B39d_N2F "Village ID:
             @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT APPLICABLE / OR IF IT CANNOT BE FOUND@R"
             : TVillageID, DK
    TB39d : TblB39d
    B39d_who "Does the compound head or any other person there have a phone number?"
             : (HEAD "Compound head has a phone number",
                OTHER "Another person there has a phone number",
                NO "No one has a telephone number")
    B39d_phone "Phone number:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE CONTACT PHONE NUMBER
               @/@/IF NO PHONE IN COMPOUND, MARK @R@B“88”@B@R"
               : TPhone, DK
    TB39d_oth : TblB39d_oth
    B39d_rel "Relationship to respondent:" : TRelation
    B39d_othrel "Specify other relative:" : STRING [30]
    B39d_oth "Specify other relationship:" : STRING [30]
    B39f "Where are you likely to move to, if at all?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE SHE IS LIKELY TO MOVE TO@R"
         "Unatarajia kuhamia wapi?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE SHE IS LIKELY TO MOVE TO@R"
         : TTown, DK
    B39f_oth "Specify other town respondent is likely to move to:" : STRING [30]
    B39g "Is there anyone there that you already know?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW ANYONE THERE@R"
         "kuna myu yeyote kule ambaye tayari unamjua?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW ANYONE THERE@R"
         : TYesNo, DK
    TB39h : TblB39h
    B39h_phone "@B^TB39h.BB39h.B39h_fname@B's phone number:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE CONTACT PHONE NUMBER
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : TPhone, DK
    B39h_rel "@B^TB39h.BB39h.B39h_fname@B's relationship to respondent:" : TRelation
    B39h_othrel "Specify other relative:" : STRING [30]
    B39h_oth "Specify other relationship:" : STRING [30]
    TB39i : TblB39i
    B39i_phone "@B^TB39i.BB39i.B39i_fname@B's phone number:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE CONTACT PHONE NUMBER
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : TPhone, DK
    B39i_rel "@B^TB39i.BB39i.B39i_fname@B's relationship to respondent:" : TRelation
    B39i_othrel "Specify other relative:" : STRING [30]
    B39i_oth "Specify other relationship:" : STRING [30]
    {B39ii "Are your mother and father living?"
          "Je baba na mama wako wangali hai?"
          : (LIVING "Mother and Father living",
             MOTHER "Mother only",
             FATHER "Father only",
             NEITHER "Neither Mother or Father living")
    TB39j : TblB39j
    B39k "Where does your father live and how could we contact him?
         @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE@R"
         "Babako anaishi wapi na tunaweza kumpata kwa njia gani?
         @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE@R"
         : (COMPOUND "LIVES IN THIS COMPOUND",
            VILLAGE "LIVES IN THIS VILLAGE, DIFFERENT COMPOUND",
            OTHER "OTHER VILLAGE")
    B39k_N2A "Village Name:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF WHERE HER FATHER LIVES@R"
             : STRING [30], DK
    B39k_N2B "District:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DISTRICT OF WHERE HER FATHER LIVES@R"
             : STRING [30], DK
    B39k_N2C "Division:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DIVISION OF WHERE HER FATHER LIVES@R"
             : STRING [30], DK
    B39k_N2D "Location:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE LOCATION OF WHERE HER FATHER LIVES@R"
             : STRING [30], DK
    B39k_N2E "Sub-Location:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE SUB-LOCATION OF WHERE HER FATHER LIVES@R"
             : STRING [30], DK
    B39k_N2F "Village ID:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT APPLICABLE / OR IF IT CANNOT BE FOUND@R"
             : TVillageID, DK
    B39k_phone "Respondent's father's contact number:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE CONTACT PHONE NUMBER
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : TPhone, DK
    B39L "Does your mother live with your father?"
         "Je, mamako anaishi na babako?"
         : TYesNo
    B39M "If not where does she @B(YOUR MOTHER)@B live and how could we contact her?"
         "Ikiwa sivyo yeye @B(MAMAKO)@B anaishi wapi na tunaweza kumpata vipi?"
         : (COMPOUND "LIVES IN THIS COMPOUND",
            VILLAGE "LIVES IN THIS VILLAGE, DIFFERENT COMPOUND",
            OTHER "OTHER VILLAGE")
    B39M_N2A "Village Name:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF WHERE HER MOTHER LIVES@R"
             : STRING [30], DK
    B39M_N2B "District:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DISTRICT OF WHERE HER MOTHER LIVES@R"
             : STRING [30], DK
    B39M_N2C "Division:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DIVISION OF WHERE HER MOTHER LIVES@R"
             : STRING [30], DK
    B39M_N2D "Location:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE LOCATION OF WHERE HER MOTHER LIVES@R"
             : STRING [30], DK
    B39M_N2E "Sub-Location:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE SUB-LOCATION OF WHERE HER MOTHER LIVES@R"
             : STRING [30], DK
    B39M_N2F "Village ID:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT APPLICABLE / OR IF IT CANNOT BE FOUND@R"
             : TVillageID, DK
    TB39M : TblB39M
    B39M_phone "Respondent's Mother's contact number:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE CONTACT PHONE NUMBER
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : TPhone, DK}
    B39N "Is there someone other than you [RESPONDENT] or your parents who has taken care of your previous children?"
         "Je kuna mtu yeyote kando nawe au wazazi wako ambaye amewashughulikia watoto wako wengine?"
         : (YES "Yes",
            NO "No",
            NA (88) "Not Applicable")
    TB39O : TblB39O
    B39O_phone "@B^TB39O.BB39O.B39O_fname@B's phone number:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE CONTACT PHONE NUMBER
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
               : TPhone, DK
    B39O_vill "Please specify the village where @B^TB39O.BB39O.B39O_fname@B lives:" : STRING [30]
    B39O_rel "@B^TB39O.BB39O.B39O_fname@B's relationship to respondent:" : TRelation
    B39O_othrel "Specify other relative:" : STRING [30]
    B39O_oth "Specify other relationship:" : STRING [30]
    {B39P "Does an adult (18+ years old) in your household work for an employer or attend any school?"
         "Je kuna mtu yeyote mzima kwa nyumba yako ambaye ameandikwa kazi au anasoma?"
         : TYesNo
    B39Q "Name and description of workplace / employer / school:
         @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE NAME AND DESCRIPTION@R"
         "Jina na maelezo la mahali pa kazi / mwajiri / shule:
         @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE
         @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE NAME AND DESCRIPTION@R"
         : STRING [30], DK
    B39R "Location of workplace / employer / school:
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE LOCATION INFORMATION@R"
         "Eneo hilo la mahali pa kazi / mwajiri / shule
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE LOCATION INFORMATION@R"
         : (IN_VILLAGE "In village",
            OTHER "Other village"), DK
    B39R_oth "Specify other village:" : STRING [30]
    B39S "What is the phone number of a colleague?
         @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE CONTACT PHONE NUMBER
         @/@/IF THE COLLEAGUE HAS NO PHONE, WRITE @R@B“88”@B@R"
         : TPhone, DK
    TB39T : TblB39T
    B39T_rel "Colleague's relationship to respondent:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B THE RESPONDENT DOES NOT KNOW THE COLLEAGUE'S RELATIONSHIP TO THE RESPONDENT@R"
             : (BOSS "Boss",
                CO_WORKER "Co-worker",
                FRIEND "Friend",
                WORKER "Other worker nearby",
                OTHER "Other"), DK
    B39T_oth "Specify other relationship:" : STRING [30]}

AUXFIELDS
    aux_ts "@G@BTRACKING SECTION@B@G" : (ENTER), EMPTY
    aux_intro "@GNow I am going to ask you about some of the places where people you know live and work.@G"
              "@GSasa naenda kukuuliza kuhusu baadhi ya mahali ambapo watu ambao unawajua wanaishi na kufanya kazi.@G" : (ENTER), EMPTY
    aux_B39d "@GPlease describe where it is located.@G
             @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE
             @/@/USE VILLAGE ID IF POSSIBLE@R"
             "@GTafadhali eleza mahali kinapatikana.@G
             @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE
             @/@/USE VILLAGE ID IF POSSIBLE@R"
             : (ENTER), EMPTY
    aux_B39d_ch "@GCompound head name:@G" : (ENTER), EMPTY
    aux_B39d_oth "@GWho's phone number does this belong?@G" : (ENTER), EMPTY
    aux_B39h "@GWhat is their name, relationship and contact number?@G
             @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE@R"
             "@GMajina yao ni nani,uhusiano na nambari ya simu?@G
             @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE@R"
             : (ENTER), EMPTY
    aux_B39h_at "@GAnyone there's names:@G" : (ENTER), EMPTY
    aux_B39i "@GWho is likely to stay behind if you were to move?@G"
             "@GNi nani anaweza kubaki nyuma ikiwa utahama?@G"
             : (ENTER), EMPTY
    aux_B39j "@GWhat is the name of your [RESPONDENT'S] @Bfather@B?@G"
             "@GJina la @Bbabako@B [RESPONDENT'S] ni nani?@G"
             : (ENTER), EMPTY
    aux_B39O "@GWhat is their name, phone number, and relationship?@G
             @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE@R"
             "@GMajina yao ni yapi, nambari ya simu na uhusiano wao nao?@G
             @/@/@RINCLUDE AS MANY DETAILS AS POSSIBLE@R"
             : (ENTER), EMPTY
    aux_B39T "@GWho's phone?@G"
             "@GSimu ya nani?@G"
             : (ENTER), EMPTY
    aux_etimestamp : TIMETYPE

LAYOUT
    BEFORE aux_ts NEWPAGE
    AFTER aux_ts NEWPAGE

    AFTER aux_intro NEWPAGE
RULES
    aux_ts
    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    IF ((stimestamp = EMPTY) AND (B39C = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    aux_intro
    B39C
    IF (B39C = YES) THEN
        aux_B39d
        B39d_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
        IF NOT (B39d_N2A = DK) THEN
            IF (B39d_N2A = RESPONSE) THEN
                IF GetLocDetl.SEARCH (B39d_N2A) THEN
                    GetLocDetl.READ
                    B39d_N2B:= GetLocDetl.DISTRICT
                    B39d_N2C:= GetLocDetl.DIVISION
                    B39d_N2D:= GetLocDetl.LOCATION
                    B39d_N2E:= GetLocDetl.SUBLOCATION
                    B39d_N2F:= GetLocDetl.VILLAGEID
                ELSE
                    B39d_N2B.KEEP
                    B39d_N2C.KEEP
                    B39d_N2D.KEEP
                    B39d_N2E.KEEP
                    B39d_N2F.KEEP
                ENDIF
            ENDIF
            B39d_N2B
            B39d_N2C
            B39d_N2D
            B39d_N2E
            B39d_N2F
        ENDIF
        aux_B39d_ch
        TB39d
        B39d_who
        IF NOT (B39d_who = NO) THEN
            B39d_phone
            IF NOT ((B39d_phone = DK) OR (B39d_phone = '88')) THEN
                IF NOT (LEN (B39d_phone) = 10) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
                ENDIF
                IF NOT ((SUBSTRING (B39d_phone, 1, 2) = '07') OR (SUBSTRING (B39d_phone, 1, 2) = '02')) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                ENDIF
            ENDIF
            IF (B39d_who = OTHER) THEN
                aux_B39d_oth
                TB39d_oth
            ENDIF
            B39d_rel
            IF (B39d_rel = OTHER_RELATIVE) THEN
                B39d_othrel
            ELSEIF (B39d_rel = OTHER) THEN
                B39d_oth
            ENDIF
        ENDIF
    ENDIF
    B39f
    IF NOT ((B39f = UNLIKELY) OR (B39f = DK)) THEN
        IF (B39f = OTHER) THEN
            B39f_oth
        ENDIF
        B39g
        IF (B39g = YES) THEN
            aux_B39h
            aux_B39h_at
            TB39h
            B39h_phone
            IF NOT ((B39h_phone = DK) OR (B39h_phone = '88')) THEN
                IF NOT (LEN (B39h_phone) = 10) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
                ENDIF
                IF NOT ((SUBSTRING (B39h_phone, 1, 2) = '07') OR (SUBSTRING (B39h_phone, 1, 2) = '02')) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                ENDIF
            ENDIF
            B39h_rel
            IF (B39h_rel = OTHER_RELATIVE) THEN
                B39h_othrel
            ELSEIF (B39h_rel = OTHER) THEN
                B39h_oth
            ENDIF
        ENDIF
    ENDIF
    aux_B39i
    TB39i
    IF NOT ((TB39i.BB39i.B39i_lname = '88') AND (TB39i.BB39i.B39i_fname = '88') AND (TB39i.BB39i.B39i_sname = '88') OR
           (TB39i.BB39i.B39i_lname = DK) AND (TB39i.BB39i.B39i_fname = DK) AND (TB39i.BB39i.B39i_sname = DK)) THEN
        B39i_phone
        IF NOT ((B39i_phone = DK) OR (B39i_phone = '88')) THEN
            IF NOT (LEN (B39i_phone) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
            ENDIF
            IF NOT ((SUBSTRING (B39i_phone, 1, 2) = '07') OR (SUBSTRING (B39i_phone, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
        ENDIF
        B39i_rel
        IF (B39i_rel = OTHER_RELATIVE) THEN
            B39i_othrel
        ELSEIF (B39i_rel = OTHER) THEN
            B39i_oth
        ENDIF
    ENDIF
    {B39ii
    IF (B39ii = LIVING) THEN
        aux_B39j
        TB39j
        B39k
        IF (B39k = OTHER) THEN
            B39k_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
            IF NOT (B39k_N2A = DK) THEN
                IF (B39k_N2A = RESPONSE) THEN
                    IF GetLocDetl.SEARCH (B39k_N2A) THEN
                        GetLocDetl.READ
                        B39k_N2B:= GetLocDetl.DISTRICT
                        B39k_N2C:= GetLocDetl.DIVISION
                        B39k_N2D:= GetLocDetl.LOCATION
                        B39k_N2E:= GetLocDetl.SUBLOCATION
                        B39k_N2F:= GetLocDetl.VILLAGEID
                    ELSE
                        B39k_N2B.KEEP
                        B39k_N2C.KEEP
                        B39k_N2D.KEEP
                        B39k_N2E.KEEP
                        B39k_N2F.KEEP
                    ENDIF
                ENDIF
                B39k_N2B.SHOW
                B39k_N2C.SHOW
                B39k_N2D.SHOW
                B39k_N2E.SHOW
                B39k_N2F.SHOW
            ENDIF
        ENDIF
        B39k_phone
        IF NOT ((B39k_phone = DK) OR (B39k_phone = '88')) THEN
            IF NOT (LEN (B39k_phone) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
            ENDIF
            IF NOT ((SUBSTRING (B39k_phone, 1, 2) = '07') OR (SUBSTRING (B39k_phone, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
        ENDIF
        B39L
        IF (B39L = NO) THEN
            B39M
            IF (B39M = OTHER) THEN
                B39M_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
                IF NOT (B39M_N2A = DK) THEN
                    IF (B39M_N2A = RESPONSE) THEN
                        IF GetLocDetl.SEARCH (B39M_N2A) THEN
                            GetLocDetl.READ
                            B39M_N2B:= GetLocDetl.DISTRICT
                            B39M_N2C:= GetLocDetl.DIVISION
                            B39M_N2D:= GetLocDetl.LOCATION
                            B39M_N2E:= GetLocDetl.SUBLOCATION
                            B39M_N2F:= GetLocDetl.VILLAGEID
                        ELSE
                            B39M_N2B.KEEP
                            B39M_N2C.KEEP
                            B39M_N2D.KEEP
                            B39M_N2E.KEEP
                            B39M_N2F.KEEP
                        ENDIF
                    ENDIF
                    B39M_N2B.SHOW
                    B39M_N2C.SHOW
                    B39M_N2D.SHOW
                    B39M_N2E.SHOW
                    B39M_N2F.SHOW
                ENDIF
            ENDIF
            TB39M
            B39M_phone
            IF NOT ((B39k_phone = DK) OR (B39k_phone = '88')) THEN
                IF NOT (LEN (B39k_phone) = 10) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
                ENDIF
                IF NOT ((SUBSTRING (B39k_phone, 1, 2) = '07') OR (SUBSTRING (B39k_phone, 1, 2) = '02')) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                ENDIF
            ENDIF
        ENDIF
    ELSEIF (B39ii = FATHER) THEN
        aux_B39j
        TB39j
        B39k
        IF (B39k = OTHER) THEN
            B39k_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
            IF NOT (B39k_N2A = DK) THEN
                IF (B39k_N2A = RESPONSE) THEN
                    IF GetLocDetl.SEARCH (B39k_N2A) THEN
                        GetLocDetl.READ
                        B39k_N2B:= GetLocDetl.DISTRICT
                        B39k_N2C:= GetLocDetl.DIVISION
                        B39k_N2D:= GetLocDetl.LOCATION
                        B39k_N2E:= GetLocDetl.SUBLOCATION
                        B39k_N2F:= GetLocDetl.VILLAGEID
                    ELSE
                        B39k_N2B.KEEP
                        B39k_N2C.KEEP
                        B39k_N2D.KEEP
                        B39k_N2E.KEEP
                        B39k_N2F.KEEP
                    ENDIF
                ENDIF
                B39k_N2B.SHOW
                B39k_N2C.SHOW
                B39k_N2D.SHOW
                B39k_N2E.SHOW
                B39k_N2F.SHOW
            ENDIF
        ENDIF
        B39k_phone
        IF NOT ((B39k_phone = DK) OR (B39k_phone = '88')) THEN
            IF NOT (LEN (B39k_phone) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
            ENDIF
            IF NOT ((SUBSTRING (B39k_phone, 1, 2) = '07') OR (SUBSTRING (B39k_phone, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
        ENDIF
    ELSEIF (B39ii = MOTHER) THEN
        B39M
        IF (B39M = OTHER) THEN
            B39M_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
            IF NOT (B39M_N2A = DK) THEN
                IF (B39M_N2A = RESPONSE) THEN
                    IF GetLocDetl.SEARCH (B39M_N2A) THEN
                        GetLocDetl.READ
                        B39M_N2B:= GetLocDetl.DISTRICT
                        B39M_N2C:= GetLocDetl.DIVISION
                        B39M_N2D:= GetLocDetl.LOCATION
                        B39M_N2E:= GetLocDetl.SUBLOCATION
                        B39M_N2F:= GetLocDetl.VILLAGEID
                    ELSE
                        B39M_N2B.KEEP
                        B39M_N2C.KEEP
                        B39M_N2D.KEEP
                        B39M_N2E.KEEP
                        B39M_N2F.KEEP
                    ENDIF
                ENDIF
                B39M_N2B.SHOW
                B39M_N2C.SHOW
                B39M_N2D.SHOW
                B39M_N2E.SHOW
                B39M_N2F.SHOW
            ENDIF
        ENDIF
        TB39M
        B39M_phone
        IF NOT ((B39k_phone = DK) OR (B39k_phone = '88')) THEN
            IF NOT (LEN (B39k_phone) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
            ENDIF
            IF NOT ((SUBSTRING (B39k_phone, 1, 2) = '07') OR (SUBSTRING (B39k_phone, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
        ENDIF
    ENDIF}
    B39N
    IF (B39N = YES) THEN
        aux_B39O
        TB39O
        B39O_phone
        IF NOT ((B39O_phone = DK) OR (B39O_phone = '88')) THEN
            IF NOT (LEN (B39O_phone) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
            ENDIF
            IF NOT ((SUBSTRING (B39O_phone, 1, 2) = '07') OR (SUBSTRING (B39O_phone, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
        ENDIF
        B39O_vill
        B39O_rel
        IF (B39O_rel = OTHER_RELATIVE) THEN
            B39O_othrel
        ELSEIF (B39O_rel = OTHER) THEN
            B39O_oth
        ENDIF
    ENDIF
    {B39P
    IF (B39P = YES) THEN
        B39Q
        B39R
        IF (B39R = OTHER) THEN
            B39R_oth
        ENDIF
        B39S
        IF NOT ((B39S = DK) OR (B39S = '88')) THEN
            IF NOT (LEN (B39S) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry has the correct number of digits!@R"
            ENDIF
            IF NOT ((SUBSTRING (B39S, 1, 2) = '07') OR (SUBSTRING (B39S, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcontact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
            aux_B39T
            TB39T
            IF NOT ((TB39T.BB39T.B39T_fname = DK) AND (TB39T.BB39T.B39T_sname = DK) AND (TB39T.BB39T.B39T_lname = DK)) THEN
                B39T_rel
                IF (B39T_rel = OTHER) THEN
                    B39T_oth
                ENDIF
            ENDIF
        ENDIF
    ENDIF}

    {FINISH}

    {END TIME AND DATE STAMPS}
    aux_etimestamp:= SYSTIME
    etimestamp.KEEP
    {IF ((etimestamp <> aux_etimestamp) AND (B39T_oth = RESPONSE)) OR ((etimestamp <> aux_etimestamp) AND (B39T_oth = RESPONSE))
    OR ((etimestamp <> aux_etimestamp) AND (B39T_rel = RESPONSE)) OR ((etimestamp <> aux_etimestamp) AND (B39P = RESPONSE)) THEN}
    IF ((B39N = RESPONSE) AND (etimestamp = EMPTY)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
