{CATTLE}
BLOCK BlkB24a
FIELDS
    B24a_comp "HOW MANY @BCATTLE@B STAY IN @B@UYOUR COMPOUND@U@B?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF CATTLE IN THEIR COMPOUND@R"
              "TAFADHALI NIAMBIE NI @BNG'OMBE@B WANGAPI WANAOISHI @U@BKWENYE BOMA@B@U LAKO?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF CATTLE IN THEIR COMPOUND@R"
              : 0..100, DK
    B24a_hh "HOW MANY @BCATTLE@B BELONG TO @B@UYOUR HOUSEHOLD@U@B?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF CATTLE IN THEIR HOUSEHOLD@R"
            "NA NI @BNG'OMBE@B WANGAPI NI WA @U@BNYUMBA@B@U YAKO?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF CATTLE IN THEIR HOUSEHOLD@R"
            : 0..100, DK
RULES
    B24a_comp
    SIGNAL
        (B24a_comp < 11) "@G@BALERT!@B
                         @/@/The number of cattle in the compound is @Ugreater@U than @B10@B.
                         @/@/Are you sure this entry is correct?@G"
    B24a_hh
    SIGNAL
        (B24a_hh < 11) "@G@BALERT!@B
                       @/@/The number of cattle in the household is @Ugreater@U than @B10@B.
                       @/@/Are you sure this entry is correct?@G"
ENDBLOCK

{DONKEYS}
BLOCK BlkB24b
FIELDS
    B24b_comp "HOW MANY @BDONKEYS@B STAY IN @B@UYOUR COMPOUND@U@B?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF DONKEYS IN THEIR COMPOUND@R"
              "TAFADHALI NIAMBIE NI @BPUNDA@B WANGAPI WANAOISHI @U@BKWENYE BOMA@B@U LAKO?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF DONKEYS IN THEIR COMPOUND@R"
              : 0..100, DK
    B24b_hh "HOW MANY @BDONKEYS@B BELONG TO @B@UYOUR HOUSEHOLD@U@B?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF DONKEYS IN THEIR HOUSEHOLD@R"
            "NA NI @BPUNDA@B WANGAPI NI WA @U@BNYUMBA@B@U YAKO?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF DONKEYS IN THEIR HOUSEHOLD@R"
            : 0..100, DK
RULES
    B24b_comp
    SIGNAL
        (B24b_comp < 11) "@G@BALERT!@B
                         @/@/The number of donkeys in the compound is @Ugreater@U than @B10@B.
                         @/@/Are you sure this entry is correct?@G"
    B24b_hh
    SIGNAL
        (B24b_hh < 11) "@G@BALERT!@B
                       @/@/The number of donkeys in the household is @Ugreater@U than @B10@B.
                       @/@/Are you sure this entry is correct?@G"
ENDBLOCK

{GOATS}
BLOCK BlkB24c
FIELDS
    B24c_comp "HOW MANY @BGOATS@B STAY IN @U@BYOUR COMPOUND@B@U?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF GOATS IN THEIR COMPOUND@R"
              "TAFADHALI NIAMBIE NI @BMBUZI@B WANGAPI WANAOISHI @U@BKWENYE BOMA@B@U LAKO?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF GOATS IN THEIR COMPOUND@R"
              : 0..100, DK
    B24c_hh "HOW MANY @BGOATS@B BELONG TO @U@BYOUR HOUSEHOLD@B@U?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF GOATS IN THEIR HOUSEHOLD@R"
            "NA NI @BMBUZI@B WANGAPI NI WA @U@BNYUMBA@B@U YAKO?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF GOATS IN THEIR HOUSEHOLD@R"
            : 0..100, DK
RULES
    B24c_comp
    SIGNAL
        (B24c_comp < 11) "@G@BALERT!@B
                         @/@/The number of goats in the compound is @Ugreater@U than @B10@B.
                         @/@/Are you sure this entry is correct?@G"
    B24c_hh
    SIGNAL
        (B24c_hh < 11) "@G@BALERT!@B
                       @/@/The number of goats in the household is @Ugreater@U than @B10@B.
                       @/@/Are you sure this entry is correct?@G"
ENDBLOCK

{SHEEP}
BLOCK BlkB24d
FIELDS
    B24d_comp "HOW MANY @BSHEEP@B STAY IN @U@BYOUR COMPOUND@B@U?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF SHEEP IN THEIR COMPOUND@R"
              "TAFADHALI NIAMBIE NI @BKONDOO@B WANGAPI WANAOISHI @U@BKWENYE BOMA@B@U LAKO?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF SHEEP IN THEIR COMPOUND@R"
              : 0..100, DK
    B24d_hh "HOW MANY @BSHEEP@B BELONG TO @U@BYOUR HOUSEHOLD@B@U?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF SHEEP IN THEIR HOUSEHOLD@R"
            "NA NI @BKONDOO@B WANGAPI NI WA @U@BNYUMBA@B@U YAKO?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF SHEEP IN THEIR HOUSEHOLD@R"
            : 0..100, DK
RULES
    B24d_comp
    SIGNAL
        (B24d_comp < 11) "@G@BALERT!@B
                         @/@/The number of sheep in the compound is @Ugreater@U than @B10@B.
                         @/@/Are you sure this entry is correct?@G"
    B24d_hh
    SIGNAL
        (B24d_hh < 11) "@G@BALERT!@B
                       @/@/The number of sheep in the household is @Ugreater@U than @B10@B.
                       @/@/Are you sure this entry is correct?@G"
ENDBLOCK

{POULTRY}
BLOCK BlkB24e
FIELDS
    B24e_comp "HOW MANY @BPOULTRY (CHICKEN, DUCKS, PIGEONS, etc)@B STAY IN @U@BYOUR COMPOUND@B@U?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF POULTRY IN THEIR COMPOUND@R"
              "TAFADHALI NIAMBIE NI @BNDEGE (KUKU, BATA, NJIWA, nk)@B WANGAPI WANAOISHI @U@BKWENYE BOMA@B@U LAKO?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF POULTRY IN THEIR COMPOUND@R"
              : 0..100, DK
    B24e_hh "HOW MANY @BPOULTRY (CHICKEN, DUCKS, PIGEONS, etc)@B BELONG TO @U@BYOUR HOUSEHOLD@B@U?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF POULTRY IN THEIR HOUSEHOLD@R"
            "NA NI @BNDEGE (KUKU, BATA, NJIWA, nk)@B WANGAPI NI WA @U@BNYUMBA@B@U YAKO?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF POULTRY IN THEIR HOUSEHOLD@R"
            : 0..100, DK
RULES
    B24e_comp
    SIGNAL
        (B24e_comp < 51) "@G@BALERT!@B
                         @/@/The number of poultry in the compound is @Ugreater@U than @B50@B.
                         @/@/Are you sure this entry is correct?@G"
    B24e_hh
    SIGNAL
        (B24e_hh < 11) "@G@BALERT!@B
                       @/@/The number of poultry in the household is @Ugreater@U than @B10@B.
                       @/@/Are you sure this entry is correct?@G"
ENDBLOCK

{PIGS}
BLOCK BlkB24f
FIELDS
    B24f_comp "HOW MANY @BPIGS@B STAY IN @U@BYOUR COMPOUND@B@U?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF PIGS IN THEIR COMPOUND@R"
              "TAFADHALI NIAMBIE NI @BNGURUWE@B WANGAPI WANAOISHI @U@BKWENYE BOMA@B@U LAKO?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF PIGS IN THEIR COMPOUND@R"
              : 0..100, DK
    B24f_hh "HOW MANY @BPIGS@B BELONG TO @U@BYOUR HOUSEHOLD@B@U?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF PIGS IN THEIR HOUSEHOLD@R"
            "NA NI @BNGURUWE@B WANGAPI NI WA @U@BNYUMBA@B@U YAKO?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF PIGS IN THEIR HOUSEHOLD@R"
            : 0..100, DK
RULES
    B24f_comp
    SIGNAL
        (B24f_comp < 11) "@G@BALERT!@B
                         @/@/The number of pigs in the compound is @Ugreater@U than @B10@B.
                         @/@/Are you sure this entry is correct?@G"
    B24f_hh
    SIGNAL
        (B24f_hh < 11) "@G@BALERT!@B
                       @/@/The number of pigs in the household is @Ugreater@U than @B10@B.
                       @/@/Are you sure this entry is correct?@G"
ENDBLOCK

{DOGS}
BLOCK BlkB24g
FIELDS
    B24g_comp "HOW MANY @BDOGS@B STAY IN @U@BYOUR COMPOUND@B@U?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF DOGS IN THEIR COMPOUND@R"
              "TAFADHALI NIAMBIE NI @BMBWA@B WANGAPI WANAOISHI @U@BKWENYE BOMA@B@U LAKO?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF DOGS IN THEIR COMPOUND@R"
              : 0..100, DK
    B24g_hh "HOW MANY @BDOGS@B BELONG TO @U@BYOUR HOUSEHOLD@B@U?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF DOGS IN THEIR HOUSEHOLD@R"
            "NA NI @BMBWA@B WANGAPI NI WA @U@BNYUMBA@B@U YAKO?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF DOGS IN THEIR HOUSEHOLD@R"
            : 0..100, DK
RULES
    B24g_comp
    SIGNAL
        (B24g_comp < 11) "@G@BALERT!@B
                         @/@/The number of dogs in the compound is @Ugreater@U than @B10@B.
                         @/@/Are you sure this entry is correct?@G"
    B24g_hh
    SIGNAL
        (B24g_hh < 11) "@G@BALERT!@B
                       @/@/The number of dogs in the household is @Ugreater@U than @B10@B.
                       @/@/Are you sure this entry is correct?@G"
ENDBLOCK

{OTHER DOMESTIC ANIMALS}
BLOCK BlkB24h
FIELDS
    B24h_comp "HOW MANY @B^TB24.B24h_oth@B STAY IN @U@BYOUR COMPOUND@B@U?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF OTHER DOMESTIC ANIMALS IN THEIR COMPOUND@R"
              "TAFADHALI NIAMBIE NI @B^TB24.B24h_oth@B WANGAPI WANAOISHI @U@BKWENYE BOMA@B@U LAKO?
              @/@/@RIF NONE, ENTER “@R@B0@B@R”
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF OTHER DOMESTIC ANIMALS IN THEIR COMPOUND@R"
              : 0..100, DK
    B24h_hh "HOW MANY @B^TB24.B24h_oth@B BELONG TO @U@BYOUR HOUSEHOLD@B@U?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF OTHER DOMESTIC ANIMALS IN THEIR HOUSEHOLD@R"
            "NA NI @B^TB24.B24h_oth@B WANGAPI NI WA @U@BNYUMBA@B@U YAKO?
            @/@/@RIF NONE, ENTER “@R@B0@B@R”
            @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOESN'T KNOW THE THE NUMBER OF OTHER DOMESTIC ANIMALS IN THEIR HOUSEHOLD@R"
            : 0..100, DK
RULES
    B24h_comp
    SIGNAL
        (B24h_comp < 11) "@G@BALERT!@B
                         @/@/The number of @G@B^TB24.B24h_oth@B@G in the compound is @Ugreater@U than @B10@B.
                         @/@/Are you sure this entry is correct?@G"
    B24h_hh
    SIGNAL
        (B24h_hh < 11) "@G@BALERT!@B
                       @/@/The number of @G@B^TB24.B24h_oth@B@G in the household is @Ugreater@U than @B10@B.
                       @/@/Are you sure this entry is correct?@G"
ENDBLOCK
