BLOCK modb
    EXTERNALS
        GetLocDetl : GetLocationDetails ('..\ext\LocDetail')

{TYPES}
TYPE
    TTribe = (NYALA_NDOMBI "Luhya - Nyala Ndombi",
              WANGA "Luhya - Wanga",
              TSO_TSO "Luhya - Tso Tso",
              TACHONI "Luhya - Tachoni",
              BUKUSU "Luhya – Bukusu",
              KABRAS "Luhya – Kabras",
              MARAGOLI "Luhya - Maragoli",
              SAMIA "Luhya – Samia",
              NYALA "Luhya – Nyala",
              KHAYO  "Luhya – Khayo",
              MARACHI "Luhya – Marachi",
              IDHAKO "Luhya - Idhako",
              ISUKHA "Luhya - Isukha",
              TIRIKI "Luhya - Tiriki",
              KISA "Luhya - Kisa",
              MARAMA "Luhya - Marama",
              WANYORE "Luhya - Wanyore",
              TES0 "Teso",
              KIKUYU "Kikuyu",
              KALENJIN "Kalenjin",
              LUO "Luo",
              OTHER (77) "Other")

    TSchool = (NO_FORMAL_SCHOOLING "No formal schooling",
               PRIMARY_INCOMPLETE "Primary, incomplete",
               PRIMARY_COMPLETE "Primary, complete",
               SECONDARY_INCOMPLETE "Secondary, incomplete",
               SECONDARY_COMPLETE "Secondary, complete",
               SECONDARY_PROFESSIONAL_LEVEL "Secondary, professional level",
               COLLEGE_UNIVERSITY_INCOMPLETE "College / university, incomplete",
               COLLEGE_UNIVERSITY_COMPLETE "College / university")

    TReligion = (NO (0) "No religion",
                 TRADITIONAL (1) "Traditional / Tribal religion",
                 MUSLIM (2) "Muslim",
                 CATHOLIC (3) "Catholic",
                 ANGLICAN (4) "Anglican",
                 APOSTOLIC (5) "Apostolic or New Apostolic Church",
                 ASSEMBLY (6) "Assembly of God Church",
                 BAPTIST (7) "Baptist church",
                 CHURCH_OF_CHRIST (8) "Church of Christ",
                 CHURCH_OF_GOD (9) "Church of God",
                 DINA (22) "Dina ya Musambwa",
                 DIVINE (25) "Divine Church",
                 FRIENDS (18) "Friends Church (changed from @IRoho@I)",
                 GOSPEL (10) "Gospel / New Testament / Injili Church",
                 HARVEST (11) "Harvest Church / Center / Revival",
                 HOLY_SPIRIT (23) "Holy Spirit",
                 HOSANA (12) "Hosana Church",
                 JEHOVAH_WITNESS (13) "Jehovah’s Witnesses",
                 LEGIO (14) "Legio Maria Church",
                 MIRACLE (15) "Miracle Church / Center / Revival",
                 NENO (16) "Neno or Local Believers Church",
                 PENTECOSTAL (17) "Pentecostal Church",
                 PRINCE (24) "Prince of Peace",
                 SALVATION_ARMY (19) "Salvation Army Church",
                 SEVENTH_DAY (20) "Seventh Day Adventists",
                 VOICE (21) "Voice of Salvation Church",
                 OTHER (77) "Other")

    TOccupation = (NO (0) "No job",
                   FARMER "Farmer",
                   LABOUR "Agricultural laborer",
                   SHEPHARD "Livestock / Shephard",
                   FISH "Fishing",
                   SELL "Sell own agricultural products in market",
                   HAWK "Hawking clothes, food, other items",
                   SHOP "Own shop (retail)",
                   RETAIL "Work in other person’s shop (retail)",
                   OWN "Own other commercial or financial business",
                   WORK "Work in other person’s business",
                   DOMESTIC "Domestic work (house boy / girl)",
                   HOTEL "Hotel, restaurant or tourism job",
                   WATCHMAN "Watchman",
                   DRIVER "Vehicle taxi work (driver)",
                   BODA "Bicycle or motorbike taxi work (boda boda, piki piki)",
                   UNSKILL "Unskilled construction laborer",
                   BARBER "Barber or hairdresser",
                   TAILOR "Tailor or seamstress",
                   BUTCHER "Butcher",
                   MECHANIC "Mechanic",
                   WELDER "Welder",
                   SKILL "Skilled construction work (carpenter, electrician, etc)",
                   FACTORY "Factory job",
                   TEACHER "Teacher",
                   CLERK "Clerical or secretarial work",
                   SALARY "Salaried professional (manager, accountant, etc)",
                   NGO "NGO field worker",
                   NURSE "Nurse or health technician",
                   DOCTOR "Doctor",
                   POLICE "Police officer / Military officer",
                   GOV "Other Government job",
                   TECHIE "Computer / electronics technician or repair",
                   STUDENT (66) "Student",
                   OTHER (77) "Other")

    TLiteracy = (CAN_READ_AND_WRITE "Can read and write",
                 CAN_WRITE_ONLY "Can write only",
                 CAN_READ_ONLY "Can read only",
                 CANNOT_READ_WRITE "Cannot read or write")

    TTalk = (EVERYDAY "EVERY DAY" "KILA SIKU",
             WEEK "ONCE OR TWICE A WEEK" "MARA MOJA AU MBILI KWA WIKI",
             MONTH "ONCE OR TWICE A MONTH" "MARA MOJA AU MBILI KWA MWEZI",
             LESS "LESS THAN ONCE A MONTH" "CHINI YA MARA MOJA KWA MWEZI",
             NEVER "NEVER" "SIJAWAHI")

    TRelationship = (SPOUSE (1) "Spouse",
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

    TOften = (NEVER (0) "Never",
              EVERYDAY (1) "Every day",
              ONCE_WEEK (2) "Once per week or more",
              ONCE_TWO (3) "Once every 2 weeks",
              ONCE_THREE (4) "Once every 3 weeks",
              ONCE_FOUR (5) "Once every 4 weeks (every month)",
              LESS (6) "Less than once every month")

{INCLUDE}
    INCLUDE "inc\BlkB10.inc"
    INCLUDE "inc\BlkB24.inc"
    INCLUDE "inc\BlkB35.inc"

{UNBORN CHILD'S BIOLOGICAL FATHER'S NAMES BLOCK}
BLOCK BlkB5B
FIELDS
    B5B_fname "Biological father / mother @Bfirst@B name:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE BIOLOGICAL FATHER'S LAST NAME
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              "Jina la @Bkwanza@B la baba / mama mzazi:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE BIOLOGICAL FATHER'S LAST NAME
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              : STRING [15], DK
    B5B_sname "Biological father / mother @Bsecond@B name:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE BIOLOGICAL FATHER'S LAST NAME
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              "Jina la @Bpili@B la baba / mama mzazi:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE BIOLOGICAL FATHER'S LAST NAME
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              : STRING [15], DK
    B5B_lname "Biological father / mother @Blast@B name:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE BIOLOGICAL FATHER'S LAST NAME
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              "Jina la @Bmwisho@B la baba / mama mzazi:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE BIOLOGICAL FATHER'S LAST NAME
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              : STRING [15], DK
RULES
    B5B_fname
    B5B_sname
    B5B_lname
ENDBLOCK

{RESPONDENT'S SPOUSE OR PARTNER'S NAMES BLOCK}
BLOCK BlkB5H
FIELDS
    B5H_fname "Respondent's spouse or partner's @Bfirst@B name:"
              : STRING [15]
    B5H_sname "Respondent's spouse or partner's @Bsecond@B name:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE RESPONDENT'S SPOUSE OR PARTNER'S SECOND NAME
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              : STRING [15], DK
    B5H_lname "Respondent's spouse or partner's @Blast@B name:"
              : STRING [15]
RULES
    B5H_fname
    B5H_sname
    B5H_lname
ENDBLOCK

{RESPONDENT'S DATE OF BIRTH BLOCK DEFINATION}
BLOCK BlkB6
FIELDS
    B6_day "Respondent's @BDAY@B of birth:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER DAY OF BIRTH@R"
           : 1..31, DK
    B6_month "Respondent's @BMONTH@B of birth:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER MONTH OF BIRTH@R"
             : 1..12, DK
    B6_year "Respondent's @BYEAR@B of birth:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER YEAR OF BIRTH@R"
            : 1932..1998, DK
    B6_dob : STRING [10]
AUXFIELDS
    aux_B6 : DATETYPE
RULES
    B6_day
    B6_month
    B6_year
    B6_dob.KEEP
    IF NOT ((B6_year = DK) OR (B6_month = DK) OR (B6_day = DK)) THEN
        aux_B6:= TODATE (B6_year, B6_month, B6_day)
    ENDIF
    CHECK
        ((B6_month <> 2) OR (B6_day < 30))
            "@R@BERROR!@B
            @/@/Month of February input day impossible!
            @/@/Please check your entry and try again.@R"
    SIGNAL
        (B6_year = DK) OR (B6_year > 1959) "@G@BWARNING!@B
                                           @/@/The @Brespondent's year of birth@B entered as @G@B^B6_year@B@G is @Ubefore@U @B1960@B.
                                           @/@/Are you sure this entry is correct?@G"
    CHECK
        (B6_year = DK) OR (B6_year < (sdatestamp.YEAR - 8)) "@R@BERROR!@B
                                                            @/@/The @Brespondent's year of birth@B entered as @R@B^B6_year@B@R would make her @Uless@U than @Bnine years old@B!
                                                            @/@/Please check your entry and try again.@R"
    SIGNAL
        (B6_year = DK) OR (B6_year < 1995) "@G@BWARNING!@B
                                           @/@/The @Brespondent's year of birth@B entered as @G@B^B6_year@B@G is @Uafter@U @B1994@B.
                                           @/@/Are you sure this entry is correct?@G"
    IF (B6_year > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/The @Brespondent's year of birth@B entered as @R@B^B6_year@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (B6_year = sdatestamp.YEAR) AND (B6_month > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Brespondent's month of birth@B entered as @R@B^B6_month@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF (B6_year = sdatestamp.YEAR) AND (B6_month = sdatestamp.MONTH) AND (B6_day > sdatestamp.DAY) THEN
                ERROR "@R@BERROR!@B
                      @/@/The @Brespondent's day of birth@B entered as @R@B^B6_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSE
                IF (B6_day <> DK) THEN
                    IF (B6_day < 10) THEN
                        B6_dob:= '0' + STR (B6_day) + '/'
                    ELSE
                        B6_dob:= STR (B6_day) + '/'
                    ENDIF
                ELSE
                    B6_dob:= '99/'
                ENDIF
                IF (B6_month <> DK) THEN
                    IF (B6_month < 10) THEN
                        B6_dob:= B6_dob + '0' + STR (B6_month) + '/'
                    ELSE
                        B6_dob:= B6_dob + STR (B6_month) + '/'
                    ENDIF
                ELSE
                    B6_dob:= B6_dob + '99/'
                ENDIF
                IF (B6_year <> DK) THEN
                    B6_dob:= B6_dob + STR (B6_year)
                ELSE
                    B6_dob:= B6_dob + '9999'
                ENDIF
            ENDIF
        ENDIF
    ENDIF
ENDBLOCK

{GROUP MEMBERSHIP BLOCK}
{BLOCK BlkB21
FIELDS
    B21a "Women's group?"
         "Vikundi vya akina mama?"
         : TYesNo
    B21b "Credit, savings or insurance group?"
         "Vikundi vya mikopo, uwekezaji au bima?"
         : TYesNo
    B21c "Prayer or bible study group?"
         "Vikundi vya maombi au mafunzo ya bibilia?"
         : TYesNo
    B21d "Burial committee?"
         "Kamati ya mazishi?"
         : TYesNo
    B21e "Any other community group?"
         "Kikundi kingine cha jamii?"
         : TYesNo
    B21e_desc "Describe other community or group:"
              "Eleza kikundi nyingine:"
              : STRING [30]
LAYOUT
    AFTER B21e_desc NEWPAGE
RULES
    B21a
    B21b
    B21c
    B21d
    B21e
    IF (B21e = YES) THEN
        B21e_desc
    ENDIF
ENDBLOCK
}
{WEALTH OWNERSHIP BLOCK}
BLOCK BlkB22
FIELDS
    B22a "Electricity?
         @/@/(includes solar panels or other private sources of electricity)"
         "Stima?
         @/@/(panel solar au vipengee vya stima)"
         : TYesNo
    B22b "A radio?"
         "Redio?"
         : TYesNo
    B22c "A television?"
         "Televisheni?"
         : TYesNo
    B22d "A mobile phone?"
         "Simu ya rununu?"
         : TYesNo
    B22e "A clock?"
         "Saa ya ukuta?"
         : TYesNo
    B22f "A bicycle?"
         "Baisikeli?"
         : TYesNo
    B22g "A motorcycle?"
         "Pikipiki?"
         : TYesNo
    B22h "A stove @I(jiko)@I?"
         "Stovu au jiko?"
         : TYesNo
    B22i "A gas cooker?"
         "Gesi ya kupikia?"
         : TYesNo
    B22j "A car?"
         "Gari?"
         : TYesNo
LAYOUT
    AFTER B22i NEWPAGE
RULES
    B22a
    B22b
    B22c
    B22d
    B22e
    B22F
    B22g
    B22h
    B22i
    B22j
ENDBLOCK

{COMPOUND HEAD'S FULL NAMES BLOCK}
BLOCK BlkB39B
FIELDS
    B39B_fname "Compound head's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE COMPOUND HEAD'S FIRST NAME@R"
               : STRING [15], DK
    B39B_sname "Compound head's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE COMPOUND HEAD'S SECOND NAME@R"
               : STRING [15], DK
    B39B_lname "Compound head's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE COMPOUND HEAD'S LAST NAME@R"
               : STRING [15], DK
RULES
    B39B_fname
    B39B_sname
    B39B_lname
ENDBLOCK

{ANY OTHER PERSON'S FULL NAMES BLOCK}
BLOCK BlkB39Bao
FIELDS
    B39Bao_fname "Other person's @Bfirst@B name:
                 @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW OTHER PERSON'S FIRST NAME@R"
                 : STRING [15], DK
    B39Bao_sname "Other person's @Bsecond@B name:
                 @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW OTHER PERSON'S SECOND NAME
                 @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                 : STRING [15], DK
    B39Bao_lname "Other person's @Blast@B name:
                 @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW OTHER PERSON'S LAST NAME
                 @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                 : STRING [15], DK
RULES
    B39Bao_fname
    B39Bao_sname
    B39Bao_lname
ENDBLOCK

{MOTHER'S FULL NAMES BLOCK}
BLOCK BlkB39B_moth
FIELDS
    B39B_fname "Mother's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER MOTHER'S FIRST NAME
               @/@/MARK @R@B“88”@B@R IF DECEASED, MARK @R@B“66”@B@R IF COMPOUND HEAD IS MOTHER@R"
               : STRING [15], DK
    B39B_sname "Mother's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER MOTHER'S SECOND NAME
               @/@/MARK @R@B“88”@B@R IF DECEASED, MARK @R@B“66”@B@R IF COMPOUND HEAD IS MOTHER@R
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE IF MOTHER IS NOT DECEASED BUT DOES NOT HAVE A SECOND NAME@R"
               : STRING [15], DK
    B39B_lname "Mother's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER MOTHER'S LAST NAME
               @/@/MARK @R@B“88”@B@R IF DECEASED, MARK @R@B“66”@B@R IF COMPOUND HEAD IS MOTHER@R
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE IF MOTHER IS NOT DECEASED BUT DOES NOT HAVE A LAST NAME@R"
               : STRING [15], DK
RULES
    B39B_fname
    B39B_sname
    B39B_lname
ENDBLOCK

{FATHER'S FULL NAMES BLOCK}
BLOCK BlkB39B_fath
FIELDS
    B39B_fname "Father's @Bfirst@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER FATHER'S FIRST NAME
               @/@/MARK @R@B“88”@B@R IF DECEASED, MARK @R@B“66”@B@R IF COMPOUND HEAD IS FATHER@R"
               : STRING [15], DK
    B39B_sname "Father's @Bsecond@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER FATHER'S SECOND NAME
               @/@/MARK @R@B“88”@B@R IF DECEASED, MARK @R@B“66”@B@R IF COMPOUND HEAD IS FATHER@R
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE IF FATHER IS NOT DECEASED BUT DOES NOT HAVE A SECOND NAME@R"
               : STRING [15], DK
    B39B_lname "Father's @Blast@B name:
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER FATHER'S LAST NAME
               @/@/MARK @R@B“88”@B@R IF DECEASED, MARK @R@B“66”@B@R IF COMPOUND HEAD IS FATHER@R
               @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE IF FATHER IS NOT DECEASED BUT DOES NOT HAVE A LAST NAME@R"
               : STRING [15], DK
RULES
    B39B_fname
    B39B_sname
    B39B_lname
ENDBLOCK

{FIRST CONTACT'S NAMES BLOCK}
BLOCK BlkB39e_cont1A
FIELDS
    B39e_cont1A_fn "First contact's @Bfirst@B name:
                   @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE FIRST CONTACT'S FIRST NAME@R"
                   : STRING [15], DK
    B39e_cont1A_sn "First contact's @Bsecond@B name:
                   @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE FIRST CONTACT'S SECOND NAME@R"
                   : STRING [15], DK
    B39e_cont1A_ln "First contact's @Blast@B name:
                   @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE FIRST CONTACT'S LAST NAME@R"
                   : STRING [15], DK
RULES
    B39e_cont1A_fn
    B39e_cont1A_sn
    B39e_cont1A_ln
ENDBLOCK

{SECOND CONTACT'S NAMES BLOCK}
BLOCK BlkB39e_cont2A
FIELDS
    B39e_cont2A_fn "Second contact's @Bfirst@B name:
                   @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE SECOND CONTACT'S FIRST NAME@R"
                   : STRING [15], DK
    B39e_cont2A_sn "Second contact's @Bsecond@B name:
                   @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE SECOND CONTACT'S SECOND NAME@R"
                   : STRING [15], DK
    B39e_cont2A_ln "Second contact's @Blast@B name:
                   @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE SECOND CONTACT'S LAST NAME@R"
                   : STRING [15], DK
RULES
    B39e_cont2A_fn
    B39e_cont2A_sn
    B39e_cont2A_ln
ENDBLOCK

{UNBORN CHILD'S BIOLOGICAL FATHER'S NAMES TABLE}
TABLE TblB5B
FIELDS
    BB5B : BlkB5B
RULES
    BB5B
ENDTABLE

{RESPONDENT'S SPOUSE OR PARTNER'S NAMES TABLE}
TABLE TblB5H
FIELDS
    BB5H : BlkB5H
RULES
    BB5H
ENDTABLE

{RESPONDENT'S DATE OF BIRTH TABLE}
TABLE TblB6
FIELDS
    BB6 : BlkB6
RULES
    BB6
ENDTABLE

{TABLE B10}
TABLE TblB10
FIELDS
    BB10 : ARRAY [1..40] OF BlkB10
AUXFIELDS
    aux_clear : STRING
LOCALS
    b10, m : INTEGER
RULES

    FOR b10:= 1 TO aux_A4_A5 DO
        BB10 [b10].B10_fname:= aux_clear
        BB10 [b10].B10_lname:= aux_clear
        BB10 [b10].Childid:= aux_clear
    ENDDO

    FOR b10:= 1 TO aux_A4_A5 DO
        b:= b10
        IF (intParSH > 0) THEN
            IF (c.RI006_eli = LESS_THAN_SIX_WEEKS_OLD) OR (c.RI006_eli = PRIMARY_CARETAKER_STUDY_CHILD) THEN
                IF (b10 <= (aux_A4_A5 - intParSH - 1)) THEN
                    BB10 [b10].Childid:= hhid + STR (12 + b10)
                ELSEIF (b10 = aux_A4_A5) THEN
                    BB10 [b10].B10_fname:= c.TRI008.BRI008.RI008_fname
                    BB10 [b10].B10_lname:= c.TRI008.BRI008.RI008_lname
                    BB10 [b10].Childid:= c.SCid
                ELSE
                    m:= (m + 1)
                    BB10 [b10].B10_fname:= sc.BPC [index [m]].TSC2.BSC2.SC2_fname
                    BB10 [b10].B10_lname:= sc.BPC [index [m]].TSC2.BSC2.SC2_lname
                    BB10 [b10].Childid:= sc.BPC [index [m]].SC1
                ENDIF
            ELSE
                IF (b10 <= (aux_A4_A5 - intParSH)) THEN
                    BB10 [b10].Childid:= hhid + STR (12 + b10)
                ELSE
                    m:= (m + 1)
                    BB10 [b10].B10_fname:= sc.BPC [index [m]].TSC2.BSC2.SC2_fname
                    BB10 [b10].B10_lname:= sc.BPC [index [m]].TSC2.BSC2.SC2_lname
                    BB10 [b10].Childid:= sc.BPC [index [m]].SC1
                ENDIF
            ENDIF
        ELSE
            IF (c.RI006_eli = LESS_THAN_SIX_WEEKS_OLD) OR (c.RI006_eli = PRIMARY_CARETAKER_STUDY_CHILD) THEN
                IF (b10 = aux_A4_A5) THEN
                    BB10 [b10].B10_fname:= c.TRI008.BRI008.RI008_fname
                    BB10 [b10].B10_lname:= c.TRI008.BRI008.RI008_lname
                    BB10 [b10].Childid:= c.SCid
                ELSE
                    BB10 [b10].Childid:= hhid + STR (12 + b10)
                ENDIF
            ELSE
                BB10 [b10].Childid:= hhid + STR (12 + b10)
            ENDIF
        ENDIF
        BB10 [b10]
    ENDDO
    {FIND THE YOUNGEST CHILD}
    FOR b10:= 1 TO aux_A4_A5 DO
        IF (intParSH > 0) THEN
            IF (c.RI006_eli = LESS_THAN_SIX_WEEKS_OLD) OR (c.RI006_eli = PRIMARY_CARETAKER_STUDY_CHILD) THEN
                IF (b10 <= (aux_A4_A5 - 1)) THEN
                    IF (b10 = 1) THEN
                        young:= b10
                    ELSE
                        IF (SYSDATE - BB10 [young].BDOB.aux_DOB) < (SYSDATE - BB10 [b10].BDOB.aux_DOB) THEN
                            young:= young
                        ELSE
                            young:= b10
                        ENDIF
                    ENDIF
                ENDIF
            ELSE
                IF (b10 <= aux_A4_A5) THEN
                    IF (b10 = 1) THEN
                        young:= b10
                    ELSE
                        IF (SYSDATE - BB10 [young].BDOB.aux_DOB) < (SYSDATE - BB10 [b10].BDOB.aux_DOB) THEN
                            young:= young
                        ELSE
                            young:= b10
                        ENDIF
                    ENDIF
                ENDIF
            ENDIF
        ELSE
            IF (c.RI006_eli = LESS_THAN_SIX_WEEKS_OLD) OR (c.RI006_eli = PRIMARY_CARETAKER_STUDY_CHILD) THEN
                IF (b10 <= (aux_A4_A5 - 1)) THEN
                    IF (b10 = 1) THEN
                        young:= b10
                    ELSE
                        IF (SYSDATE - BB10 [young].BDOB.aux_DOB) < (SYSDATE - BB10 [b10].BDOB.aux_DOB) THEN
                            young:= young
                        ELSE
                            young:= b10
                        ENDIF
                    ENDIF
                ENDIF
            ELSE
                IF (b10 <= aux_A4_A5) THEN
                    IF (b10 = 1) THEN
                        young:= b10
                    ELSE
                        IF (SYSDATE - BB10 [young].BDOB.aux_DOB) < (SYSDATE - BB10 [b10].BDOB.aux_DOB) THEN
                            young:= young
                        ELSE
                            young:= b10
                        ENDIF
                    ENDIF
                ENDIF
            ENDIF
        ENDIF
    ENDDO
ENDTABLE

{LIVESTOCK OWNERSHIP TABLE}
TABLE TblB24
FIELDS
    BB24a : BlkB24a
    BB24b : BlkB24b
    BB24c : BlkB24c
    BB24d : BlkB24d
    BB24e : BlkB24e
    BB24f : BlkB24f
    BB24g : BlkB24g
    B24h_oth "Specify other domestic animals:" : STRING [30]
    BB24h : BlkB24h
    B24h "Do you own any other kind of domestic animal (e.g rabbits) other than those listed above?"
         "Kuna wanyama weingine isipokuwa hawa niliowataja (k.v sungura) ambao unawafuga?"
         : TYesNo
RULES
    BB24a
    BB24b
    BB24c
    BB24d
    BB24e
    IF NOT ((B15_reli = MUSLIM) OR (B16_reli = MUSLIM)) THEN
        BB24f
    ENDIF
    BB24g
    B24h
    IF (B24h = YES) THEN
        B24h_oth
        BB24h
    ENDIF
ENDTABLE

{TABLE B35}
TABLE TblB35
FIELDS
    BB35_L : BlkB35_L
    BB35_I : ARRAY [1..10] OF BlkB35_I
    {BB35_R : ARRAY [1..25] OF BlkB35_R}
    B35_I_many "@RHOW MANY POTENTIAL IPA-ASSISTANTS ARE AVAILABLE ON YOUR LIST?@R"
               : 0..10
    {B35_R_many "@RHOW MANY RESPONDENTS ARE AVAILABLE ON YOUR LIST?@R"
               : 1..25}
    {SELF : 1..25}

LOCALS
    b35, loc_SELF : INTEGER
RULES
    BB35_L
    B35_I_many
    IF (B35_I_many > 0) THEN
        FOR b35:= 1 TO B35_I_many DO
            b:= b35
            BB35_I [b35]
        ENDDO
    ENDIF
    {B35_R_many
    FOR b35:= 1 TO B35_R_many DO
        b:= b35
        BB35_R [b35]
        IF (BB35_R [b35].B35_know = SELF) AND (b35 > 1) THEN
            SELF:= b35 - 1
            FOR loc_SELF:= 1 TO SELF DO
                IF (BB35_R [loc_SELF].B35_know = SELF) THEN
                    ERROR "@R@BERROR!@B
                          @/@/The @Bvillage respondent ^loc_SELF@B was @Ualready selected@U as the @BSELF@B!
                          @/@/Please check your entry and try again.@R"
                ENDIF
            ENDDO
        ENDIF
    ENDDO}
ENDTABLE

{COMPOUND HEAD'S FULL NAMES TABLE}
TABLE TblB39B
FIELDS
    B39B : BlkB39B
RULES
    B39B
ENDTABLE

{ANY OTHER PERSON'S FULL NAMES TABLE}
TABLE TblB39Bao
FIELDS
    B39Bao : BlkB39Bao
RULES
    B39Bao
ENDTABLE

{MOTHER'S FULL NAMES TABLE}
TABLE TblB39B_moth
FIELDS
    B39B_moth : BlkB39B_moth
RULES
    B39B_moth
ENDTABLE

{FATHER'S FULL NAMES TABLE}
TABLE TblB39B_fath
FIELDS
    B39B_fath : BlkB39B_fath
RULES
    B39B_fath
ENDTABLE

{FIRST CONTACT'S NAMES TABLE}
TABLE TblB39e_cont1A
FIELDS
    BB39e_cont1A : BlkB39e_cont1A
RULES
    BB39e_cont1A
ENDTABLE

{SECOND CONTACT'S NAMES TABLE}
TABLE TblB39e_cont2A
FIELDS
    BB39e_cont2A : BlkB39e_cont2A
RULES
    BB39e_cont2A
ENDTABLE

PROCEDURE InClearFields
PARAMETERS
    IMPORT f_n : STRING
    IMPORT l_n : STRING
    IMPORT c_id : STRING
    ALIEN ('baseline.msu', 'proInClearFields')
ENDPROCEDURE

PROCEDURE ExClearFields
PARAMETERS
    EXPORT frst : STRING
    EXPORT lst : STRING
    EXPORT chid : STRING
    ALIEN ('baseline.msu', 'proExClearFields')
ENDPROCEDURE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    admin "WHERE ARE YOU ADMINISTERING THE SURVEY?"
          : (HOUSE "INSIDE RESPONDENT'S HOUSE",
             COMPOUND "INSIDE OTHER HOUSE IN COMPOUND",
             OUTSIDE "OUTSIDE WITHIN COMPOUND")
    look "Can I take a look inside your house?"
         "Naweza angalia ndani ya nyumba yako?"
         : TYesNo
    B1_floor "@BOBSERVE:@B
             @/@/MAIN MATERIAL OF THE FLOOR"
             : (EARTH (1) "EARTH",
                EARTH_DUNG (2) "EARTH / DUNG",
                CONCRETE (3) "CONCRETE",
                OTHER (77) "OTHER")
    B1_other "Specify other floor material:" : STRING [30]
    B2_roof "@BOBSERVE:@B
            @/@/MAIN MATERIAL OF THE ROOF"
            : (THATCH_PALM_LEAF (1) "THATCH / PALM LEAF",
               CORREGATED_IRON (2) "CORREGATED IRON (MABATI)",
               OTHER (77) "OTHER")
    B2_other "Specify other roof material:" : STRING [30]
    B3_wall "@BOBSERVE:@B
            @/@/MAIN MATERIAL OF THE WALLS"
            : (MUD (1) "MUD",
               CANE_PALM_BAMBOO (2) "CANE / PALM / BAMBOO with MUD",
               CONCRETE (3) "CONCRETE",
               OTHER (77) "OTHER")
    B3_other "Specify other wall material:" : STRING [30]
    B4_spouse "Do you have a living spouse or a partner?"
              "Je una mchumba au mme au mke au mpenzi anaye ishi?"
              : TYesNo
    B5_stay "Do you stay with your spouse or partner in the same household?"
            "Wewe na mchumba mme au mke au au mpenzi wako mnaishi katika nyumba moja?"
            : TYesNo
    B5A_live "Where does the biological father / mother of your child live?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE THE BIOLOGICAL FATHER HER CHILD LIVES@R"
             "Baba / mama mzazi wa mtoto wako anaishi wapi?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE THE BIOLOGICAL FATHER HER CHILD LIVES@R"
             : (THIS_VILLAGE (1) "In this village",
                KAKAMEGA (2) "Kakamega town",
                BUNGOMA (3) "Bungoma town",
                KISUMU (4) "Kisumu",
                ELDORET (5) "Eldoret",
                MOMBASA (6) "Mombasa",
                NAIROBI (7) "Nairobi",
                OTHER_VILLAGE (8) "Other village",
                DIED (10) "Died",
                DIVORCE (12) "Divorced",
                OTHER (11) "Other"), DK
    B5A_other "Specify other:" : STRING [30]
    B5A_N2A "Village Name:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF WHERE THE BIOLOGICAL FATHER OF THE CHILD LIVES@R"
            : STRING [30], DK
    B5A_N2B "District:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DISTRICT OF WHERE THE BIOLOGICAL FATHER OF THE CHILD LIVES@R"
            : STRING [30], DK
    B5A_N2C "Division:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DIVISION OF WHERE THE BIOLOGICAL FATHER OF THE CHILD LIVES@R"
            : STRING [30], DK
    B5A_N2D "Location:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE LOCATION OF WHERE THE BIOLOGICAL FATHER OF THE CHILD LIVES@R"
            : STRING [30], DK
    B5A_N2E "Sub-Location:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE SUB-LOCATION OF WHERE THE BIOLOGICAL FATHER OF THE CHILD LIVES@R"
            : STRING [30], DK
    B5A_N2F "Village ID:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT APPLICABLE / OR IF IT CANNOT BE FOUND@R"
            : TVillageID, DK
    TB5B : TblB5B
    B5C "If you are comfortable, could you provide us with a contact number of the biological father / mother of child?"
        "Ikiwa ni sawa, waweza kutusaidia na nambari ya simu ya baba / mama mzazi wa mtoto?"
        : TYesNo
    B5C_phone "@RPLEASE ENTER THE PHONE NUMBER HERE:
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE BIOLOGICAL FATHER'S CONTACT PHONE NUMBER
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              "@RPLEASE ENTER THE PHONE NUMBER HERE:
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE BIOLOGICAL FATHER'S CONTACT PHONE NUMBER
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              : TPhone, DK
    B5G_live "Where does your @Bspouse@B or @Bpartner@B live?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE HER SPOUSE OR PARTNER LIVES@R"
             "Mme au mke au mpenzi wako anaishi wapi?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW WHERE HER SPOUSE OR PARTNER LIVES@R"
             : (THIS_VILLAGE (1) "In this village",
                KAKAMEGA (2) "Kakamega town",
                BUNGOMA (3) "Bungoma town",
                KISUMU (4) "Kisumu",
                ELDORET (5) "Eldoret",
                MOMBASA (6) "Mombasa",
                NAIROBI (7) "Nairobi",
                OTHER_VILLAGE (8) "Other village",
                OTHER (11) "Other"), DK
    B5G_other "Specify other:" : STRING [30]
    B5G_N2A "Village Name:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF WHERE HER SPOUSE OR PARTNER LIVES@R"
            : STRING [30], DK
    B5G_N2B "District:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DISTRICT OF WHERE HER SPOUSE OR PARTNER LIVES@R"
            : STRING [30], DK
    B5G_N2C "Division:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE DIVISION OF WHERE HER SPOUSE OR PARTNER LIVES@R"
            : STRING [30], DK
    B5G_N2D "Location:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE LOCATION OF WHERE HER SPOUSE OR PARTNER LIVES@R"
            : STRING [30], DK
    B5G_N2E "Sub-Location:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE SUB-LOCATION OF WHERE HER SPOUSE OR PARTNER LIVES@R"
            : STRING [30], DK
    B5G_N2F "Village ID:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT APPLICABLE / OR IF IT CANNOT BE FOUND@R"
            : TVillageID, DK
    TB5H : TblB5H
    B5I_phone "@BSpouse@B or @Bpartner@B's contact number:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER SPOUSE OR PARTNER'S CONTACT PHONE NUMBER
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              "Nambari ya simu ya mme au mke au mpenzi wako?:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER SPOUSE OR PARTNER'S CONTACT PHONE NUMBER
              @/@/ENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              : TPhone, DK
    TB6 : TblB6
    B7B_born "In what year was your @Bspouse@B or @Bpartner@B born?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THEIR PARTNER'S YEAR OF BIRTH@R"
             "Mme au mke au mpenzi wako alizaliwa mwaka gani?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THEIR PARTNER'S YEAR OF BIRTH@R"
             : 1932..1999, DK
    B8_pass "How many of the children you have cared for as a primary caretaker have died?
            @/@/@RENTER “@R@B0@B@R” IF NONE@R"
            "Ni watoto wangapi umewahi walea kimsingi wameaga?
            @/@/@RENTER “@R@B0@B@R” IF NONE@R"
            : 0..20
    B9_care "For how many children 0 - 18 years are you the @Uprimary caregiver@U (i.e. you feed them and care for them in your household regularly during the majority of the month)?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY CHILDREN SHE PRIMARILY TAKES CARE OF@R"
            "Ni watoto wangapi walio na miaka 0 - 18 ambao @Uunaowahudumia kimsingi@U (yaani, unawalisha na kuwashughulikia nyumbani mwako kila mara wakati mingi kwa mwaka)?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HOW MANY CHILDREN SHE PRIMARILY TAKES CARE OF@R"
            : 0..20, DK
    B10_conf "Can you confirm that the total number of children (0 - 18 years) in your household (not just the children you care for) is @B^aux_A4_A5@B?"
             "Unaweza kuhakikisha kuwa watoto wote walio na miaka 0 - 18 kwa nyumba yako (sio wale tu unaowalea) ni @B^aux_A4_A5@B?"
             : TYesNo
    TB10 : TblB10
    B11_resp "What is @Byour@B tribe (mother tongue) @B^young@B?
             @/@/@RNOT PARTNER'S TRIBE@R"
             "@BWewe@B ni kabila gani (lugha ya mama)?
             @/@/@RNOT PARTNER'S TRIBE@R"
             : TTribe
    B11_other "Specify respondent's other mother tounge:" : STRING [30]
    B12_spouse "What is the tribe or mother tongue of your @Bspouse@B or @Bpartner@B?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE TRIBE OR MOTHER TOUNGE OF HER SPOUSE OR PARTNER@R"
               "@BMchumba@B au @Bmwenzako@B ni kabila gani?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE TRIBE OR MOTHER TOUNGE OF HER SPOUSE OR PARTNER@R"
               : TTribe, DK
    B12_other "Specify respondent's spouse or partner's other mother tounge:" : STRING [30]
    B13_school "What was the highest level of schooling @Byou@B completed?"
               "Umehitimu kiwango kipi cha juu cha elimu?"
               : TSchool
    B14_spouse "What was the highest level of schooling your @Bspouse@B or @Bpartner@B completed?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE HIGHEST LEVEL OF SCHOOLING OF HER SPOUSE OR PARTNER@R"
               "@BMchumba@B au @Bmwenzako@B amehitimu kiwango kipi cha juu cha elimu?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE HIGHEST LEVEL OF SCHOOLING OF HER SPOUSE OR PARTNER@R"
               : TSchool, DK
    B15_reli "What is @Byour@B current religion or denomination?
             @/@/@RYOU CAN SCROLL TO THE RIGHT TO VIEW MORE OPTIONS@R"
             "Sasa hivi, dini au kanisa @Blako@B ni lipi?
             @/@/@RYOU CAN SCROLL TO THE RIGHT TO VIEW MORE OPTIONS@R"
             : TReligion
    B15_other "Specify respondent's other religion:" : STRING [30]
    B16_reli "What is the current religion or denomination of your @Bspouse@B or @Bpartner@B?
             @/@/@RYOU CAN SCROLL TO THE RIGHT TO VIEW MORE OPTIONS
             @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER SPOUSE OR PARTNER'S RELIGION OR DENOMINATION@R"
             "Sasa hivi, dini au kanisa la @Bmchumba@B au @Bmwenzako@B ni lipi?
             @/@/@RYOU CAN SCROLL TO THE RIGHT TO VIEW MORE OPTIONS
             @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER SPOUSE OR PARTNER'S RELIGION OR DENOMINATION@R"
             : TReligion, DK
    B16_other "Specify respondent's spouse or partner's other religion or denomination:" : STRING [30]
    B17_occ "What is @Byour@B current occupation?
            @/@/@RYOU CAN SCROLL TO THE RIGHT TO VIEW MORE OPTIONS@R"
            "Kwa sasa, @Bunafanya@B kazi / kitu gani?
            @/@/@RYOU CAN SCROLL TO THE RIGHT TO VIEW MORE OPTIONS@R"
            : TOccupation
    B17_other "Specify respondent's other occupation:" : STRING [30]
    B18_occ "What is the current occupation of your @Bspouse@B or @Bpartner@B?
            @/@/@RYOU CAN SCROLL TO THE RIGHT TO VIEW MORE OPTIONS
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER SPOUSE OR PARTNER'S OCCUPATION@R"
            "Kwa sasa, @Bmchumba@B au @Bmwenzako@B anafanya kazi / kitu gani?
            @/@/@RYOU CAN SCROLL TO THE RIGHT TO VIEW MORE OPTIONS
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW HER SPOUSE OR PARTNER'S OCCUPATION@R"
            : TOccupation , DK
    B18_other "Specify respondent's spouse or partner's other occupation:" : STRING [30]
    B19_swa "Can you read, write, or both in @BSwahili@B?
            @/@/@RBE SURE TO ASK ABOUT READING AND WRITING IN SWAHILI SEPARATELY@R"
            "Waweza kusoma, kuandika au vyote kwa @BKiswahili@B?
            @/@/@RBE SURE TO ASK ABOUT READING AND WRITING IN SWAHILI SEPARATELY@R"
            : TLiteracy
    B20_eng "Can you read, write, or both in @BEnglish@B?
            @/@/@RBE SURE TO ASK ABOUT READING AND WRITING IN ENGLISH SEPARATELY@R"
            "Waweza kusoma, kuandika au vyote kwa @BKimombo@B / @BKingereza@B?
            @/@/@RBE SURE TO ASK ABOUT READING AND WRITING IN ENGLISH SEPARATELY@R"
            : TLiteracy
    {BB21 : BlkB21}
    B21g_OAF "Are there any people in @Byour household@B who participate in a @BOne Acre Fund (OAF)@B group or project?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF ANY PEOPLE IN HER HOUSEHOLD PARTICIPATES IN A ONE ACRE FUND GROUP OR PROJCET@R"
             "Kunao watu wowote katika @Bnyumba yako@B wanaoshiriki kwenye kikundi cha @BOne Acre Fund (OAF)@B au kwenye mradi wao?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF ANY PEOPLE IN HER HOUSEHOLD PARTICIPATES IN A ONE ACRE FUND GROUP OR PROJCET@R"
             : TYesNo, DK
    B21h_OAF "Are there any people in @Byour compound@B who participate in a @BOne Acre Fund (OAF)@B group or project?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF ANY PEOPLE IN HER COMPOUND PARTICIPATES IN A ONE ACRE FUND GROUP OR PROJCET@R"
             "Kunao watu wowote katika @Bboma lako@B wanashiriki kikundi cha @BOne Acre Fund (OAF)@B au kwenye mradi wao?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF ANY PEOPLE IN HER COMPOUND PARTICIPATES IN A ONE ACRE FUND GROUP OR PROJCET@R"
             : TYesNo, DK
    BB22 : BlkB22
    TB24 : TblB24
    B26_in "Do chicken or other poultry ever go inside your main house?
           @/@/@RREAD RESPONSES@R"
           "Je kuku au ndege wengine wa kufugwa huwa wanaingia katika nyumba yako kubwa?
           @/@/@RREAD RESPONSES@R"
           : (ALWAYS "ALWAYS" "KILA MARA",
              SOMETIMES "SOMETIMES" "WAKATI MWINGINE",
              NEVER "NEVER" "HAWAJAWAHI",
              NA (88) "Not Applicable / NO CHICKEN" "Not Applicable / HAKUNA KUKU")
    B30_fuel "What is your main type of fuel for cooking?"
             "Sana sana unapika kutumia moto wa aina gani?"
             : (CHARCOAL "Charcoal" "Makaa",
                WOOD "Wood" "Kuni",
                KEROSENE "Kerosene" "Mafuta ya taa",
                OTHER (77) "Other" "Ingine")
    B30_other "Specify respondent's other type of fuel for cooking:" : STRING [30]
    B31_year "In what year did you start staying in this compound?"
             "Ulianza kuishi katika boma hili mwaka gani?"
             : (BIRTH "Birth",
                OTHER "Other")
    B31_other "Please specify year respondent started staying in this compound:"
             : 1932..2015
    B39A_home "Is this your ancestral home?"
              "Hapa ni nyumbani kwenu?"
              : TYesNo
    B39B_N2A "Village Name:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF HER PERMANANT HOME@R"
             : STRING [30], DK
    B39B_N2B "District:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF HER PERMANANT HOME@R"
             : STRING [30], DK
    B39B_N2C "Division:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF HER PERMANANT HOME@R"
             : STRING [30], DK
    B39B_N2D "Location:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF HER PERMANANT HOME@R"
             : STRING [30], DK
    B39B_N2E "Sub-Location:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE VILLAGE NAME OF HER PERMANANT HOME@R"
             : STRING [30], DK
    B39B_N2F "Village ID:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE VILLAGE ID IS NOT APPLICABLE / OR IF IT CANNOT BE FOUND@R"
             : TVillageID, DK
    TB39B : TblB39B
    B39B_phone "What is the phone number of the Compound Head at your permanent home?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE COMPOUND HEAD'S PHONE NUMBER
               @/@/ENTER @R@B“88”@B@R IF NO PHONE@R"
               : TPhone, DK
    B39B_ao "Is there any phone at your permanent home?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE COMPOUND HEAD'S PHONE NUMBER
            @/@/ENTER @R@B“88”@B@R IF NO PHONE@R"
            : TPhone, DK

    B39B_who "Who does this phone belong to?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THERE IS ANY OTHER PERSON AT HER PERMANENT HOME@R"
             : TRelationship, DK
    B39B_who_rel "Specify other relative:" : STRING [30]
    B39B_who_oth "Specify other relationship:" : STRING [30]

    TB39Bao : TblB39Bao
    TB39B_moth : TblB39B_moth
    TB39B_fath : TblB39B_fath
    B39e_cont2 "Is there a second contact available?"
               : TYesNo
    B39e "@GIn case you are not at your current address, please tell us the names of two friends or family members who are sure to know where you are, and how to contact you.
         @/@/These should be friends or family that would stay in their current residence if you moved away.@G"
         "@GIwapo hauko kwenye boma lako la sasa, tafadhali tuambie majina ya marafiki wako wawili au watu wa familia wawili ambao wanajua mahali utakuwa.@G"
         : (HAVE "I @Bhave@B contacts",
            DONT_HAVE "I @Bdon't have@B contacts")
    TB39e_cont1A : TblB39e_cont1A
    B39e_cont1B "Respondent's relationship to this contact person?"
                "Uhusiano wako na yeye ni upi?"
                : TRelationship
    B39e_othrel1B "Specify other relative:" : STRING [30]
    B39e_oth1B "Specify other relationship:" : STRING [30]
    B39e_cont1C "First contact's primary phone number:
                @/@/@RENTER @R@B“88”@B@R IF THE FIRST CONTACT HAS NO PHONE
                @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE FIRST CONTACT'S PRIMARY PHONE NUMBER@R"
                : TPhone, DK
    B39e_cont1D "First contact's secondary phone number:
                @/@/@RENTER @R@B“88”@B@R IF THE FIRST CONTACT HAS NO PHONE
                @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE FIRST CONTACT'S SECONDARY PHONE NUMBER@R"
                : TPhone, DK
    TB39e_cont2A : TblB39e_cont2A
    B39e_cont2B "Respondent's relationship to this contact person?"
                "Uhusiano wako na yeye ni upi?"
                : TRelationship
    B39e_othrel2B "Specify other relative:" : STRING [30]
    B39e_oth2B "Specify other relationship:" : STRING [30]
    B39e_cont2C "Second contact's primary phone number:
                @/@/@RENTER @R@B“88”@B@R IF THE SECOND CONTACT HAS NO PHONE
                @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE SECOND CONTACT'S PRIMARY PHONE NUMBER@R"
                : TPhone, DK
    B39e_cont2D "Second contact's secondary phone number:
                @/@/@RENTER @R@B“88”@B@R IF THE SECOND CONTACT HAS NO PHONE
                @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE SECOND CONTACT'S SECONDARY PHONE NUMBER@R"
                : TPhone, DK
    C1304A_go "How often do you go to the market [that you most often go to when you buy or sell things]?
              @/@/@RDO NOT READ RESPONSES
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW OFTEN THE RESPONDENT GOES TO THE MARKET@R"
              "Ni mara ngapi wewe huenda sokoni [ambayo huwa unaenda mara nyingi kununua au kuuza vitu]?
              @/@/@RDO NOT READ RESPONSES
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW OFTEN THE RESPONDENT GOES TO THE MARKET@R"
              : TOften, DK
    C1305A_go "How often do you go to the mosque / church / temple?
              @/@/@RDO NOT READ RESPONSES
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW OFTEN THE RESPONDENT GOES TO THE CHURCH / MOSQUE / TEMPLE@R"
              "Wewe huenda mara ngapi mskitini / kanisani / hekaluni?
              @/@/@RDO NOT READ RESPONSES
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW OFTEN THE RESPONDENT GOES TO THE CHURCH / MOSQUE / TEMPLE@R"
              : TOften, DK
    {B33_info "What are the ways you usually receive information about health?
             @/@/@RDO NOT READ RESPONSES
             @/@/PROBE UNTIL RESPONDENT HAS FINISHED@R"
             "Kwa kawaida wewe hupata wapi habari kuhusu afya?
             @/@/@RDO NOT READ RESPONSES
             @/@/PROBE UNTIL RESPONDENT HAS FINISHED@R"
             : SET [12] OF (RADIO (1) "RADIO" "REDIO",
                            SCHOOL (2) "SCHOOL (THROUGH KIDS)" "SHULE (KUPITIA KWA WANAFUNZI)",
                            HOSPITAL (3) "HOSPITAL / CLINIC" "HOSPITALI / KLINIKI",
                            FRIENDS (4) "FRIENDS / NEIGHBOURS" "MARAFIKI / MAJIRANI",
                            COMMUNITY_HEALTH_WORKERS (5) "COMMUNITY HEALTH WORKERS" "WAHUDUMU WA AFYA KWA KIJIJI",
                            BARAZAS (6) "COMMUNITY MEETINGS / BARAZAS" "MIKUTANO YA KIJIJI / BARAZA",
                            TELEVISION (7) "TELEVISION" "TELEVISHENI",
                            NEWSPAPER (8) "NEWSPAPER" "GAZETI",
                            ROAD_SHOW (9) "ROAD SHOW" "MAONYESHO YA BARABARANI",
                            WOMENS_GROUP (10) "WOMEN'S GROUP" "VIKUNDI VYA KINA MAMA",
                            CHURCH (11) "CHURCH" "KANISA",
                            OTHER (77) "OTHER" "MENGINE (ELEZA)")
    B33_other "Specify other social and information networks:" : STRING [30]
    B34_info "Which source of health information do you trust @Uthe most@U?
             @/@/@RREAD RESPONSES@R"
             "Ni njia ipi ya ujumbe wa kiafya ambayo unaamini @Uzaidi@U?
             @/@/@RREAD RESPONSES@R"
             : (RADIO (1) "RADIO" "REDIO",
                SCHOOL (2) "SCHOOL (THROUGH KIDS)" "SHULE (KUPITIA KWA WANAFUNZI)",
                HOSPITAL (3) "HOSPITAL / CLINIC" "HOSPITALI / KLINIKI",
                FRIENDS (4) "FRIENDS / NEIGHBOURS" "MARAFIKI / MAJIRANI",
                COMMUNITY_HEALTH_WORKERS (5) "COMMUNITY HEALTH WORKERS" "WAHUDUMU WA AFYA KWA KIJIJI",
                BARAZAS (6) "COMMUNITY MEETINGS / BARAZAS" "MIKUTANO YA KIJIJI / BARAZA",
                TELEVISION (7) "TELEVISION" "TELEVISHENI",
                NEWSPAPER (8) "NEWSPAPER" "GAZETI",
                ROAD_SHOW (9) "ROAD SHOW" "MAONYESHO YA BARABARANI",
                WOMENS_GROUP (10) "WOMEN'S GROUP" "VIKUNDI VYA KINA MAMA",
                CHURCH (11) "CHURCH" "KANISA",
                OTHER (77) "OTHER" "MENGINE (ELEZA)")
    B34_other "Specify other social and information networks:" : STRING [30]}
    TB35 : TblB35
LOCALS
    b : INTEGER
AUXFIELDS
    aux_b "@G@BB.@|@UHOUSEHOLD CHARACTERISTICS@U@B@G" : (ENTER), EMPTY
    aux_intro "Thank you.
              @/@/Now I would talk about @Uthe house that you live in@U.
              @/@/First, I would like to observe the material your house is made of."
              "Asante.
              @/@/Sasa ningependa kuongea kuhusu @Unyumba unamoishi@U.
              @/@/Kwanza ningependa kujua nyumba yako imetengenezwa kutumia nini."
              : (ENTER)
    aux_main "@G@BOBSERVE:@B
             @/@/MAIN MATERIAL OF THE HOUSE:@G" : (ENTER), EMPTY
    aux_hh "@GThank you.
           @/@/Now I would like to ask you some questions about yourself and the people who live in your household.@G"
           "@GAsante.
           @/@/Sasa ningependa kukuuliza maswali kuhusu wewe mwenyewe na watu wanaoishi nyumbani mwako.@G"
           : (ENTER), EMPTY
    aux_B5A_vill "@GSpecify other village.@G" : (ENTER), EMPTY
    aux_B5G_vill "@GSpecify other village.@G" : (ENTER), EMPTY
    aux_B5B "@GName of biological father / mother of child?@G"
            "@GJina la baba / mama mzazi wa mtoto ni?@G"
            : (ENTER), EMPTY
    aux_B5H "@GWhat are the full names of your spouse or partner?@G"
            "@GJina la mme au mke au mpenzi wako@G"
            : (ENTER), EMPTY
    aux_B6 "@GWhat is your birth date?@G"
           "@GTarehe yako ya kuzaliwa ni lini?@G"
           : (ENTER), EMPTY
    aux_A4_A5 : 0..40
    aux_B10 "@GFor each child (0 - 18 years old) in your household, please tell me his / her first name, year of birth and level of school enrollment (if any).
            @/@/Begin with the oldest child.@G"
            "@GKwa kila mtoto aliye na miaka (0 - 18), katika nyumba yako, tafadhali niambie jina la kwanza, mwaka wa kuzaliwa na kiwango cha elimu walichofika (kama kuna yeyote).
            @/@/Anza na mtoto mkubwa.@G"
            : (ENTER), EMPTY
    {aux_B21 "@GAre you a member of any of the following groups?@G
            @/@/@RREAD RESPONSES@R"
            "@GJe wewe ni mwanachama wa vikundi vifwatavyo?@G
            @/@/@RREAD RESPONSES@R"
            : (ENTER), EMPTY}
    aux_B22 "@GDoes your household have any of the following things?@G"
            "@GJe nyumba yako ina baadhi ya vitu vifwatavyo?@G"
            : (ENTER), EMPTY
    aux_B24 "@GI'm going to read you a list of animals.
            @/@/Please tell me how many of each stays in @Byour compound@B and how many belong to @Byour household@B.@G
            @/@/@RIF NONE, ENTER “@R@B0@B@R”@R"
            "@GNitakusomea orodha ya mifugo.
            @/@/Tafadhali niambie ni wangapi wanaoishi kwenye @Bboma lako@B na niwangapi ni wa @Bnyumba yako@B.@G
            @/@/@RIF NONE, ENTER “@R@B0@B@R”@R"
            : (ENTER), EMPTY
    aux_B39e_cont1A "@GWhat are the first contact's names?@G"
                    "@GMajina kamili ya mtu wa kwanza?@G"
                    : (ENTER), EMPTY
    aux_B39e_cont2A "@GWhat are the second contact's names?@G"
                    "@GMajina kamili ya mtu wa pili?@G" : (ENTER), EMPTY
    aux_B39B "@GWhere is your ancestral home?@G"
             "@GNyumbani kwenu ni wapi?@G"
             : (ENTER), EMPTY
    aux_B39B_name "@GWhat is the name of the compound head at your ancestral home?@G" : (ENTER), EMPTY
    aux_B39Bwho_name "@GWhat are this person's full names?@G" : (ENTER), EMPTY
    aux_B39B_mother "@GMother's name if living:@G
                    @/@/@RMARK “@R@B88@B@R” IF DECEASED
                    @/@/MARK “@R@B66@B@R” IF COMPOUND HEAD IS MOTHER@R"
                    : (ENTER), EMPTY
    aux_B39B_father "@GFather's name if living:@G
                    @/@/@RMARK “@R@B88@B@R” IF DECEASED
                    @/@/MARK “@R@B66@B@R” IF COMPOUND HEAD IS FATHER@R"
                    : (ENTER), EMPTY
    aux_B35 "@GNow I'm going to read to you the names of other people in your community.
            @/@/For each person, please tell me whether you know this person and if so, how often you talk to him or her (more than just a greeting).@G
            @/@/@RREAD THE NAMES OF THE POTENTIAL IPA ASSISTANT(S) IN THE SAME ORDER AS THEY APPEAR ON YOUR LIST.@R"
            "@GSasa nitakusomea majina ya watu wanaoishi katika kijiji hii.
            @/@/Kwa kila nitayemtaja, tafadhali niambie kama wamjua huyu mtu na kama kweli wamjua, ni mara ngapi wewe humwongelesha (kuzidi salamu tu).@G
            @/@/@RREAD THE NAMES OF THE POTENTIAL IPA ASSISTANT(S) IN THE SAME ORDER AS THEY APPEAR ON YOUR LIST.@R"
            : (ENTER), EMPTY

LAYOUT
    BEFORE aux_b NEWPAGE
    AFTER aux_b NEWPAGE

    {BEFORE aux_B21 NEWPAGE
    BEFORE aux_B22 NEWPAGE}
RULES
    aux_b

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
    aux_intro
    admin
    IF (admin = HOUSE) THEN
        aux_main
        B1_floor
        IF (B1_floor = OTHER) THEN
            B1_other
        ENDIF
    ELSE
        look
        IF (look = YES) THEN
            aux_main
            B1_floor
            IF (B1_floor = OTHER) THEN
                B1_other
            ENDIF
        ENDIF
    ENDIF
    B2_roof
    IF (B2_roof = OTHER) THEN
        B2_other
    ENDIF
    B3_wall
    IF (B3_wall = OTHER) THEN
        B3_other
    ENDIF
    aux_hh
    B4_spouse
    IF (B4_spouse = YES) THEN
        B5_stay
        IF (B5_stay = NO) THEN
            B5G_live
            IF (B5G_live = OTHER_VILLAGE) THEN
                aux_B5G_vill
                B5G_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
                IF NOT (B5G_N2A = DK) THEN
                    IF (B5G_N2A = RESPONSE) THEN
                        IF GetLocDetl.SEARCH (B5G_N2A) THEN
                            GetLocDetl.READ
                            B5G_N2B:= GetLocDetl.DISTRICT
                            B5G_N2C:= GetLocDetl.DIVISION
                            B5G_N2D:= GetLocDetl.LOCATION
                            B5G_N2E:= GetLocDetl.SUBLOCATION
                            B5G_N2F:= GetLocDetl.VILLAGEID
                        ELSE
                            B5G_N2B.KEEP
                            B5G_N2C.KEEP
                            B5G_N2D.KEEP
                            B5G_N2E.KEEP
                            B5G_N2F.KEEP
                        ENDIF
                    ENDIF
                    B5G_N2B
                    B5G_N2C
                    B5G_N2D
                    B5G_N2E
                    B5G_N2F
                ENDIF
            ELSEIF (B5G_live = OTHER) THEN
                B5G_other
            ENDIF
        ENDIF
        aux_B5H
        TB5H
        B5I_phone
        IF NOT ((B5I_phone = DK) OR (B5I_phone = '88')) THEN
            IF NOT (LEN (B5I_phone) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bspouse or partner's contact number@B entry has the correct number of digits!@R"
            ENDIF
            IF NOT ((SUBSTRING (B5I_phone, 1, 2) = '07') OR (SUBSTRING (B5I_phone, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bspouse or partner's contact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
        ENDIF
    ELSE
        B5A_live
        IF (B5A_live = THIS_VILLAGE) OR (B5A_live = KAKAMEGA) OR (B5A_live = BUNGOMA)
        OR (B5A_live = KISUMU) OR (B5A_live = ELDORET) OR (B5A_live = MOMBASA) OR (B5A_live = NAIROBI) THEN
            aux_B5B
            TB5B
            B5C
            IF (B5C = YES) THEN
                B5C_phone
                IF NOT ((B5C_phone = DK) OR (B5C_phone = '88')) THEN
                    IF NOT (LEN (B5C_phone) = 10) THEN
                        ERROR "@R@BERROR!@B
                              @/@/Please check that your @Bbiological father's contact number@B entry has the @Ucorrect number of digits@U!@R"
                    ENDIF
                    IF NOT ((SUBSTRING (B5C_phone, 1, 2) = '07') OR (SUBSTRING (B5C_phone, 1, 2) = '02')) THEN
                        ERROR "@R@BERROR!@B
                              @/@/Please check that your @Bbiological father's contact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                    ENDIF
                ENDIF
            ELSE
                B5G_live
                IF (B5G_live = OTHER_VILLAGE) THEN
                    aux_B5G_vill
                    B5G_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
                    IF NOT (B5G_N2A = DK) THEN
                        IF (B5G_N2A = RESPONSE) THEN
                            IF GetLocDetl.SEARCH (B5G_N2A) THEN
                                GetLocDetl.READ
                                B5G_N2B:= GetLocDetl.DISTRICT
                                B5G_N2C:= GetLocDetl.DIVISION
                                B5G_N2D:= GetLocDetl.LOCATION
                                B5G_N2E:= GetLocDetl.SUBLOCATION
                                B5G_N2F:= GetLocDetl.VILLAGEID
                            ELSE
                                B5G_N2B.KEEP
                                B5G_N2C.KEEP
                                B5G_N2D.KEEP
                                B5G_N2E.KEEP
                                B5G_N2F.KEEP
                            ENDIF
                        ENDIF
                        B5G_N2B
                        B5G_N2C
                        B5G_N2D
                        B5G_N2E
                        B5G_N2F
                    ENDIF
                ELSEIF (B5G_live = OTHER) THEN
                    B5G_other
                ENDIF
            ENDIF
        ELSEIF (B5A_live = OTHER_VILLAGE) THEN
            aux_B5A_vill
            B5A_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
            IF NOT (B5A_N2A = DK) THEN
                IF (B5A_N2A = RESPONSE) THEN
                    IF GetLocDetl.SEARCH (B5A_N2A) THEN
                        GetLocDetl.READ
                        B5A_N2B:= GetLocDetl.DISTRICT
                        B5A_N2C:= GetLocDetl.DIVISION
                        B5A_N2D:= GetLocDetl.LOCATION
                        B5A_N2E:= GetLocDetl.SUBLOCATION
                        B5A_N2F:= GetLocDetl.VILLAGEID
                    ELSE
                        B5A_N2B.KEEP
                        B5A_N2C.KEEP
                        B5A_N2D.KEEP
                        B5A_N2E.KEEP
                        B5A_N2F.KEEP
                    ENDIF
                ENDIF
                B5A_N2B
                B5A_N2C
                B5A_N2D
                B5A_N2E
                B5A_N2F
            ENDIF
            aux_B5B
            TB5B
            B5C
            IF (B5C = YES) THEN
                B5C_phone
                IF NOT ((B5C_phone = DK) OR (B5C_phone = '88')) THEN
                    IF NOT (LEN (B5C_phone) = 10) THEN
                        ERROR "@R@BERROR!@B
                              @/@/Please check that your @Bbiological father's contact number@B entry has the @Ucorrect number of digits@U!@R"
                    ENDIF
                    IF NOT ((SUBSTRING (B5C_phone, 1, 2) = '07') OR (SUBSTRING (B5C_phone, 1, 2) = '02')) THEN
                        ERROR "@R@BERROR!@B
                              @/@/Please check that your @Bbiological father's contact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                    ENDIF
                ENDIF
            ENDIF
        ELSEIF (B5A_live = OTHER) THEN
           B5A_other
           B5A_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
           IF NOT (B5A_N2A = DK) THEN
               IF (B5A_N2A = RESPONSE) THEN
                   IF GetLocDetl.SEARCH (B5A_N2A) THEN
                       GetLocDetl.READ
                       B5A_N2B:= GetLocDetl.DISTRICT
                       B5A_N2C:= GetLocDetl.DIVISION
                       B5A_N2D:= GetLocDetl.LOCATION
                       B5A_N2E:= GetLocDetl.SUBLOCATION
                       B5A_N2F:= GetLocDetl.VILLAGEID
                   ELSE
                       B5A_N2B.KEEP
                       B5A_N2C.KEEP
                       B5A_N2D.KEEP
                       B5A_N2E.KEEP
                       B5A_N2F.KEEP
                   ENDIF
               ENDIF
               B5A_N2B
               B5A_N2C
               B5A_N2D
               B5A_N2E
               B5A_N2F
            ENDIF
            aux_B5B
            TB5B
            B5C
            IF (B5C = YES) THEN
                B5C_phone
                IF NOT ((B5C_phone = DK) OR (B5C_phone = '88')) THEN
                    IF NOT (LEN (B5C_phone) = 10) THEN
                        ERROR "@R@BERROR!@B
                              @/@/Please check that your @Bbiological father's contact number@B entry has the @Ucorrect number of digits@U!@R"
                    ENDIF
                    IF NOT ((SUBSTRING (B5C_phone, 1, 2) = '07') OR (SUBSTRING (B5C_phone, 1, 2) = '02')) THEN
                        ERROR "@R@BERROR!@B
                              @/@/Please check that your @Bbiological father's contact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                    ENDIF
                ENDIF
            ELSE
                B5G_live
                IF (B5G_live = OTHER_VILLAGE) THEN
                    B5G_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
                    IF NOT (B5G_N2A = DK) THEN
                        IF (B5G_N2A = RESPONSE) THEN
                            IF GetLocDetl.SEARCH (B5G_N2A) THEN
                                GetLocDetl.READ
                                B5G_N2B:= GetLocDetl.DISTRICT
                                B5G_N2C:= GetLocDetl.DIVISION
                                B5G_N2D:= GetLocDetl.LOCATION
                                B5G_N2E:= GetLocDetl.SUBLOCATION
                                B5G_N2F:= GetLocDetl.VILLAGEID
                            ELSE
                                B5G_N2B.KEEP
                                B5G_N2C.KEEP
                                B5G_N2D.KEEP
                                B5G_N2E.KEEP
                                B5G_N2F.KEEP
                            ENDIF
                        ENDIF
                        B5G_N2B
                        B5G_N2C
                        B5G_N2D
                        B5G_N2E
                        B5G_N2F
                    ENDIF
                ELSEIF (B5G_live = OTHER) THEN
                    B5G_other
                ENDIF
            ENDIF
        ENDIF
    ENDIF
    aux_B6
    TB6
    IF (B4_spouse = YES) THEN
        B7B_born
        IF NOT (B7B_born = DK) THEN
            SIGNAL
                (B7B_born > 1959) "@G@BWARNING!@B
                                  @/@/The @Brespondent's partner's year of birth@B entered as @G@B^B7B_born@B@G is @Ubefore@U @B1960@B.
                                  @/@/Are you sure this entry is correct?@G"
            CHECK
                (B7B_born < (sdatestamp.YEAR - 15)) "@R@BERROR!@B
                                                    @/@/The @Brespondent's partner's year of birth@B entered as @R@B^B7B_born@B@R would make him @Uless@U than @Bsixteen years old@B!
                                                    @/@/Please check your entry and try again.@R"
            SIGNAL
                (B7B_born < 1995) "@G@BWARNING!@B
                                  @/@/The @Brespondent's partner's year of birth@B entered as @G@B^B7B_born@B@G is @Uafter@U @B1994@B.
                                  @/@/Are you sure this entry is correct?@G"
        ENDIF
    ENDIF
    B8_pass
    SIGNAL
        (B8_pass < 6) "@G@BALERT!@B
                      @/@/Has the respondent really lost @G@B^B8_pass@B@G children?
                      @/@/The number is greater than @B5@B.
                      @/@/Supress if sure.@G"
    B9_care
    SIGNAL
        (B9_care < 11) "@G@BALERT!@B
                       @/@/Is the respondent really the caregiver for @G@B^B9_care@B@G children?
                       @/@/The number is greater than @B10@B.
                       @/@/Supress if sure.@G"
    SIGNAL
        ((B9_care <> 0) OR (c.RI006_eli <> PRIMARY_CARETAKER_STUDY_CHILD))
            "@G@BWARNING!@B
            @/@/Respondent was entered as being the @R@Bprimary caretaker for a child that was born within the last 2 weeks@B@R in the @UVERIFICATION SECTION@U of the interview.
            @/@/This entry conflicts with the current question entry on @R@Bhow many children is the respondent the @Uprimary caregiver@U@B@R entered as @Bzero@B.
            @/@/Please check your entry and try again.@G"

    aux_A4_A5:= (a.Thh [1].BA01.A4_4t18 + a.Thh [1].BA01.A5_0t3)
    B10_conf
    SIGNAL
        (B10_conf = YES) OR (a.Thh [1].BA01.A5_0t3 <> a.Thh [1].BA01.A5_0t3)
        "@G@BALTERT!@B
        @/@/Please change the entry in the field below to reflect the proper count of children available in the study household.@G"
    aux_B10
    TB10
    IF (B9_care > aux_A4_A5) THEN
        ERROR "@R@BERROR!@B
              @/@/The number of children that the respondent is the primary caregiver @R@B^B9_care@B@R cannot be higher than the total number of children available in the household @R@B^aux_A4_A5@B@R!
              @/@/Please check your entry and try again.@R"
    ENDIF
    B11_resp
    IF (B11_resp = OTHER) THEN
        B11_other
    ENDIF
    IF (B4_spouse = YES) THEN
        B12_spouse
        IF (B12_spouse = OTHER) THEN
            B12_other
        ENDIF
    ENDIF
    B13_school
    IF (B4_spouse = YES) THEN
        B14_spouse
    ENDIF
    B15_reli
    IF (B15_reli = OTHER) THEN
        B15_other
    ENDIF
    IF (B4_spouse = YES) THEN
        B16_reli
        IF (B16_reli = OTHER) THEN
            B16_other
        ENDIF
    ENDIF
    B17_occ
    IF (B17_occ = OTHER) THEN
        B17_other
    ENDIF
    IF (B4_spouse = YES) THEN
        B18_occ
        IF (B18_occ = OTHER) THEN
            B18_other
        ENDIF
    ENDIF
    B19_swa
    B20_eng
    {aux_B21
    BB21}
    B21g_OAF
    IF (B21g_OAF = YES) THEN
        B21h_OAF:= YES
        B21h_OAF.SHOW
    ELSE
        B21h_OAF
    ENDIF
    aux_B22
    BB22
    aux_B24
    TB24
    B26_in
    B30_fuel
    IF (B30_fuel = OTHER) THEN
        B30_other
    ENDIF
    B31_year
    IF (B31_year = OTHER) THEN
        B31_other
        CHECK
            (B31_other < sdatestamp.YEAR + 1) "@R@BERROR!@B
                                              @/@/The @Byear that the respondent started staying in this compound@B entered as @R@B^B31_other@B@R is @Ubeyond@U the current year!
                                              @/@/Please check your entry and try again."
        CHECK
            (TB6.BB6.B6_year = DK) OR (B31_other > TB6.BB6.B6_year - 1) "@R@BERROR!@B
                                                                        @/@/The @Byear that the respondent started staying in this compound@B entered as @R@B^B31_other@B@R is @Ubefore@U the @Byear the respondent was born@B which was entered as @R@B^TB6.BB6.B6_year@B@R!
                                                                        @/@/Please check your entry and try again.@R"
    ENDIF
    B39A_home
    IF (B39A_home = NO) THEN
        aux_B39B
        B39B_N2A{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
        {IF NOT (B39B_N2A = DK) THEN
            IF (B39B_N2A = RESPONSE) THEN
                IF GetLocDetl.SEARCH (B39B_N2A) THEN
                    GetLocDetl.READ
                    B39B_N2B:= GetLocDetl.DISTRICT
                    B39B_N2C:= GetLocDetl.DIVISION
                    B39B_N2D:= GetLocDetl.LOCATION
                    B39B_N2E:= GetLocDetl.SUBLOCATION
                    B39B_N2F:= GetLocDetl.VILLAGEID
                ELSE
                    B39B_N2B.KEEP
                    B39B_N2C.KEEP
                    B39B_N2D.KEEP
                    B39B_N2E.KEEP
                    B39B_N2F.KEEP
                ENDIF
            ENDIF}
            B39B_N2B
            B39B_N2C
            B39B_N2D
            B39B_N2E
            B39B_N2F
        {ENDIF}

        aux_B39B_name
        TB39B
        B39B_phone
        IF NOT ((B39B_phone = DK) OR (B39B_phone = '88')) THEN
            IF NOT (LEN (B39B_phone) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcompound head's contact number@B entry has the @Ucorrect number of digits@U!@R"
            ENDIF
            IF NOT ((SUBSTRING (B39B_phone, 1, 2) = '07') OR (SUBSTRING (B39B_phone, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bcompound head's contact number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
        ELSE
            B39B_ao
            IF NOT ((B39B_ao = DK) OR (B39B_ao = '88')) THEN
                IF NOT (LEN (B39B_ao) = 10) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bany other phone number@B entry has the @Ucorrect number of digits@U!@R"
                ENDIF
                IF NOT ((SUBSTRING (B39B_ao, 1, 2) = '07') OR (SUBSTRING (B39B_ao, 1, 2) = '02')) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bany other phone number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                ENDIF
                B39B_who
                IF (B39B_who = OTHER_RELATIVE) THEN
                    B39B_who_rel
                ELSEIF (B39B_who = OTHER) THEN
                    B39B_who_oth
                ENDIF
                aux_B39Bwho_name
                TB39Bao
            ENDIF
        ENDIF
        aux_B39B_mother
        TB39B_moth
        aux_B39B_father
        TB39B_fath
    ENDIF
    B39e
    IF (B39e = HAVE) THEN
        aux_B39e_cont1A
        TB39e_cont1A
        B39e_cont1B
        IF (B39e_cont1B = OTHER_RELATIVE) THEN
            B39e_othrel1B
        ELSEIF (B39e_cont1B = OTHER) THEN
            B39e_oth1B
        ENDIF
        B39e_cont1C
        IF NOT ((B39e_cont1C = DK) OR (B39e_cont1C = '88')) THEN
            IF NOT (LEN (B39e_cont1C) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bfirst contact's primary phone number@B entry has the @Ucorrect number of digits@U!@R"
            ENDIF
            IF NOT ((SUBSTRING (B39e_cont1C, 1, 2) = '07') OR (SUBSTRING (B39e_cont1C, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bfirst contact's primary phone number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
        ENDIF
        B39e_cont1D
        IF NOT ((B39e_cont1D = DK) OR (B39e_cont1D = '88')) THEN
            IF NOT (LEN (B39e_cont1D) = 10) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bfirst contact's secondary phone number@B entry has the @Ucorrect number of digits@U!@R"
            ENDIF
            IF NOT ((SUBSTRING (B39e_cont1D, 1, 2) = '07') OR (SUBSTRING (B39e_cont1D, 1, 2) = '02')) THEN
                ERROR "@R@BERROR!@B
                      @/@/Please check that your @Bfirst contact's secondary phone number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
            ENDIF
        ENDIF
        B39e_cont2
        IF (B39e_cont2 = YES) THEN
            aux_B39e_cont2A
            TB39e_cont2A
            B39e_cont2B
            IF (B39e_cont2B = OTHER_RELATIVE) THEN
                B39e_othrel2B
            ELSEIF (B39e_cont2B = OTHER) THEN
                B39e_oth2B
            ENDIF
            B39e_cont2C
            IF NOT ((B39e_cont2C = DK) OR (B39e_cont2C = '88')) THEN
                IF NOT (LEN (B39e_cont2C) = 10) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bsecond contact's primary phone number@B entry has the @Ucorrect number of digits@U!@R"
                ENDIF
                IF NOT ((SUBSTRING (B39e_cont2C, 1, 2) = '07') OR (SUBSTRING (B39e_cont2C, 1, 2) = '02')) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bsecond contact's primary phone number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                ENDIF
            ENDIF
            B39e_cont2D
            IF NOT ((B39e_cont2D = DK) OR (B39e_cont2D = '88')) THEN
                IF NOT (LEN (B39e_cont2D) = 10) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bsecond contact's secondary phone number@B entry has the @Ucorrect number of digits@U!@R"
                ENDIF
                IF NOT ((SUBSTRING (B39e_cont2D, 1, 2) = '07') OR (SUBSTRING (B39e_cont2D, 1, 2) = '02')) THEN
                    ERROR "@R@BERROR!@B
                          @/@/Please check that your @Bsecond contact's secondary phone number@B entry @Ubegins@U with the number prefix '@B07@B' or '@B02@B'!@R"
                ENDIF
            ENDIF
        ENDIF
    ENDIF
    C1304A_go
    C1305A_go
    {B33_info
    IF (OTHER IN B33_info) THEN
        B33_other
    ENDIF
    B34_info
    IF (B34_info = OTHER) THEN
        B34_other
    ENDIF}
    aux_B35
    TB35
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (TB35.B35_I_many = RESPONSE)) OR ((etimestamp = EMPTY) AND (TB35.BB35_I [b].B35_know = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF ((edatestamp = EMPTY) AND (etimestamp <> EMPTY)) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
