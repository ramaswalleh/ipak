BLOCK blkc
    TYPE
        TOften = (EVERY "EVERY DAY" "KILA SIKU",
                  WEEK "ONCE OR TWICE A WEEK" "MARA MOJA AU MBILI KWA WIKI",
                  MONTH "ONCE OR TWICE A MONTH" "MARA MOJA AU MBILI KWA MWEZI",
                  LESS "LESS THAN ONCE A MONTH" "CHINI YA MARA MOJA KWA MWEZI",
                  NEVER "NEVER" "SIJAWAHI")
    {LEND BLOCK}
    BLOCK blkLend
        FIELDS
            c2 "How much was requested?"
               "Uliombwa pesa ngapi?"
               : 0..99999
            c3 "How much was given?"
               "Ulipeana pesa ngapi?"
               : 0..99999
            c4 "Where does requester live?"
               "Mwenye kuomba pesa anaishi wapi?"
               : (HOUSEHOLD "Same household",
                  COMPOUND "Same compound, different household",
                  VILLAGE "Same village, different compound",
                  DIFFERENT "Different village")
            c5 "Is requester a relative?"
               "Mwenye kuomba ni jamaa yako?"
               : TYesNo
            c6 "Was this a loan or gift?"
               "Ilikuwa mkopo au zawadi?"
               : (LOAN "Loan",
                  GIFT "Gift")
            c7 "What did requester want money for?"
               "Mwenye kuomba alitaka pesa ya nini?"
               : (WEDDING "Wedding",
                  FUNERAL "Funeral",
                  ILLNESS "Illness / Medicine",
                  FOOD "Food",
                  FEES "School fees",
                  RENT "Rent",
                  FARE "Transport fare",
                  TOLD "Was not told",
                  OTHER (77) "Other")
            c7_oth "Specify other:" : STRING [100]
            c8 "How much has already been paid back?"
               "Amerudisha pesa ngapi kwa sasa?"
               : 0..99999
            c9 "Do you expect to be paid back in full?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THEY HAVE BEEN PAID BACK IN FULL@R"
               "Unatarajia kulipwa pesa yote?
               @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THEY HAVE BEEN PAID BACK IN FULL@R"
               : (YES "Yes / Already paid back in full",
                  NO "No"), DK
        RULES
            c2
            c3
            c4
            c5
            c6
            IF NOT (c6 = GIFT) THEN
                c7
                IF (c7 = OTHER) THEN
                    c7_oth
                ENDIF
                IF (c3 > 0) THEN
                    c8
                    c9
                ENDIF                    
            ENDIF
    ENDBLOCK
    {LEND TABLE}
    TABLE tblLend
        FIELDS
            bLend : ARRAY [1..5] OF blkLend
        LOCALS
            i : INTEGER
        RULES
            FOR i:= 1 TO c1a DO
                bLend [i]
            ENDDO
    ENDTABLE

    FIELDS
        c1 "Has anyone @Bother than your spouse or children@B asked you for money in the last month?
           @/@/@RINCLUDE PARENTS OR SIBLINGS (BUT NOT SPOUSE OR CHILDREN), EVEN IF THEY SHARE THE SAME HOUSEHOLD@R"
           "Je kuna mtu yeyote @Bisipokuwa mwenzio wa ndoa au mwanao@B ambaye amehitaji pesa kutoka kwako katika mwezi uliopita
           @/@/@RINCLUDE PARENTS OR SIBLINGS (BUT NOT SPOUSE OR CHILDREN), EVEN IF THEY SHARE THE SAME HOUSEHOLD@R"
           : TYesNo
        c1a "How many?" : 1..5
        tLend : tblLend
        c10 "In the last month, how often did you talk to people who @Ulive in other villages, either in person or on the phone@U?
            @/@/@RREAD RESPONSES@R"
            "Katika mwezi uliopita, ni mara ngapi wewe ulizungumza na watu @Uwanaoishi katika vijiji vingine ana kwa ana au kwa simu@U?
            @/@/@RREAD RESPONSES@R"
            : TOften
        c11 "In the last month, how often do you @UTRAVEL OUTSIDE your village@U?
            @/@/@RREAD RESPONSES@R"
            "Kwa mwezi uliopita ni kadri mara ngapi wewe @Uulitoka nje ya kijiji chako@U?
            @/@/@RREAD RESPONSES@R"
            : TOften
        c12 "In your opinion, how good or bad is your relationship with your spouse / partner?
            @/@/@RREAD RESPONSES@R"
            "Kwa maoni yako, uhusiano wako na mpenzi / mwenzio wa ndoa ni mzuri au mbaya kwa kiasi gani?
            @/@/@RREAD RESPONSES@R"
            : (GOOD "VERY GOOD" "MZURI SANA",
               SOMEWHAT "SOMEWHAT GOOD" "MZURI KIASI",
               NEITHER "NEITHER GOOD NOR BAD" "SI MZURI SI MBAYA",
               BAD "SOMEWHAT BAD" "MBAYA KIASI",
               VERY "VERY BAD" "MBAYA KABISA")
    AUXFIELDS
        aux_c "@G@BC. NETWORKING AND LENDING@B@G" : (ENTER), EMPTY

    LAYOUT
        BEFORE aux_c NEWPAGE
        AFTER aux_c NEWPAGE

    RULES
        aux_c
        c1
        IF (c1 = YES) THEN
            c1a
            tLend
        ENDIF
        c10
        c11
        c12
ENDBLOCK
