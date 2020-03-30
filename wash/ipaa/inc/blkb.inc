BLOCK blkb
    {IPAA'S FULL NAMES BLOCK}
    BLOCK blkb2
        FIELDS
            b2_fn "IPAA's first name:" : STRING [15]
            b2_sn "IPAA's second name:
                  @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                  : STRING [15]
            b2_ln "IPAA's last name:" : STRING [15]
        RULES
            b2_fn
            b2_sn
            b2_ln
    ENDBLOCK
    {IPAA'S FULL NAMES BLOCK}
    BLOCK blkb3
        FIELDS
            b3_fn "IPAA's other first name:" : STRING [15]
            b3_sn "IPAA's other second name:
                  @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                  : STRING [15]
            b3_ln "IPAA's other last name:
                  @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                  : STRING [15]
        RULES
            b3_fn
            b3_sn
            b3_ln
    ENDBLOCK
    {TABLE B6 BLOCK}
    BLOCK blkb6
        FIELDS
            b6a_fn "Child @B^j@B's first name:" : STRING [15]
            b6a_sn "Child @B^j@B's second name:
                   @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                   : STRING [15]
            b6a_ln "Child @B^j@B's last name:" : STRING [15]
            b6b "Gender:"
                "Jinsia:"
                : (MALE "Male",
                   FEMALE "Female")
            b6c "Is the child biologically yours?"
                "Je, mtoto huyu ulimzaa mwenyewe?"
                : TYesNo
            b6d "Is the child currently enrolled in school?"
                "Kwa sasa mtoto huyu huenda shule?"
                : TYesNo
            b6e "Highest type of schooling?"
                "Kiwango cha juu cha shule?"
                : (ECD "ECD",
                   PRI "Primary",
                   SEC "Secondary",
                   UNI "University",
                   TRA "Trade School")
            b7f "Highest standard / form completed?"
                "Kiwango cha juu alichohitimu?"
                : 1..8
            b8g "How many days last week did the child attend school?
                @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOWN HOW MANY DAYS LAST WEEK THE CHILD ATTENDED SCHOOL@R"
                "Kwa wiki iliyopita, mtoto alienda shule mara ngapi?
                @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOWN HOW MANY DAYS LAST WEEK THE CHILD ATTENDED SCHOOL@R"
                : 0..88, DK
        RULES
            b6a_fn
            b6a_sn
            b6a_ln
            b6b
            b6c
            b6d
            IF (b6d = YES) THEN
                b6e
                IF (b6e = PRI) OR (b6e = SEC) THEN
                    b7f
                    CHECK ((b6e <> SEC) OR (b7f < 5))
                        "@R@BERROR!@B
                        @/@/Schooling level selected as @B@R^b6e@R@B can only be as high as @B4th Form@B!
                        @/@/Please check your entry and try again."
                ENDIF
                b8g
                CHECK ((b8g < 8) OR (b8g = 88))
                    "@R@BERROR!@B
                    @/@/Days of the week entered as @R@B^b8g@B@R is greater than @B7@B and not equal to the special code @B88@B!
                    @/@/Please check your entry and try again."
            ENDIF
    ENDBLOCK
    {IPAA'S FULL NAMES TABLE}
    TABLE tblb2
        FIELDS
            bb2 : blkb2
        RULES
            bb2
    ENDTABLE
    {IPAA'S OTHER FULL NAMES TABLE}
    TABLE tblb3
        FIELDS
            bb3 : blkb3
        RULES
            bb3
    ENDTABLE
    {B6A NAMES TABLE}
    TABLE tblb6
        FIELDS
            bb6 : ARRAY [1..20] OF blkb6
        LOCALS
            i : INTEGER
        RULES
            FOR i:= 1 TO b5 DO
                j:= i
                bb6 [i]
            ENDDO
    ENDTABLE

    FIELDS
        b0 "Did the IPAA candidate consent?" : TYesNo
        b1 "@BOBSERVE:@B
           @/@/What is the IPAA's gender?"
           : (MALE "Male",
              FEMALE "Female")
        tb2 : tblb2
        b3 "Have you ever gone by any other names?"
           "Hapo awali umewahi kutumia jina lingine au kwa sasa una majina ya utani?"
           : TYesNo
        tb3 : tblb3
        b4 "How many biological children do you have?"
           "Una watoto wangapi uliozaa mwenyewe?"
           : 0..20
        b5 "For how many total children are you currently the primary caregiver @B(i.e. you feed them and care for them in your household regularly)@B?"
           "Ni watoto wangapi unaowahudumia kimsingi @B(yaani, unawalisha na kuwashughulikia nyumbani mwako kila mara)@B?"
           : 0..20
        tb6 : tblb6
        b7 "If you wanted, would you [and your partner] be able to have more children?" : TYesNo
        b8 "Regardless of the previous question, would you like to have any more children?"
           "Bila kuzingatia swali lililotangulia, je, ungependa kuwa na watoto zaidi?"
           : TYesNo
        b8a "How many more children would you like to have?"
            "Je, ungependa kuwa na watoto wangapi zaidi?"
            : 1..10
        b8b "Why not?
            @/@/@RDO NOT READ RESPONSES.
            @/@/NOT BEING ABLE IS NOT AN APPROPRIATE RESPONSE.@R"
            "Kwa nini?
            @/@/@RDO NOT READ RESPONSES.
            @/@/NOT BEING ABLE IS NOT AN APPROPRIATE RESPONSE.@R"
            : (EXPENSE "Too poor / cannot afford / children expensive",
               BUSY "Too busy",
               ENOUGH "I have enough children",
               CHILD "Current children sick",
               PARTNER "IPAA / partner sick",
               OTHER (77) "Other")
        b8b_oth "Specify other:" : STRING [100]
        b9 "How likely or unlikely is it that you will have more children?
           @/@/@RREAD RESPONSES@R"
           "Je, kuna uwezakano upi kuwa utakuwa na watoto zaidi?
           @/@/@RREAD RESPONSES@R"
           : (THAN_ONE "VERY LIKELY THAT WE'LL HAVE MORE THAN ONE ADDITIONAL CHILD" "KUNA UWEZEKANO MKUBWA YA KWAMBA TUTAKUWA NA MTOTO ZAIDI YA MMOJA",
              ONE_MORE "VERY LIKELY THAT WE'LL HAVE ONE MORE CHILD" "KUNA  UWEZEKANO YA KWAMBA TUTAKUWA NA MTOTO MMOJA ZAIDI",
              SOMEWHAT "SOMEWHAT LIKELY THAT WE'LL HAVE ANOTHER CHILD" "KUNA UWEZEKANO MDOGO YA KWAMBA TUTAKUWA NA MTOTO MWINGINE",
              NOT_VERY "NOT VERY LIKELY THAT WE'LL HAVE ANOTHER CHILD" "HAKUNA UWEZEKANO YA KWAMBA TUTAKUWA NA MTOTO MWINGINE",
              AT_ALL "NOT AT ALL LIKELY THAT WE'LL HAVE ANOTHER CHILD" "HAKUNA UWEZEKANO KAMWE KUWA TUTAPATA MTOTO MWINGINE")
        b10 "Do you or your partner / spouse have a bank account?
            @/@/@R(MPESA does not count)@R"
            "Je, wewe au mpenzi / mwenzio wa ndoa ana akaunti ya benki?
            @/@/@R(MPESA does not count)@R"
            : TYesNo
    LOCALS
        j : INTEGER
    AUXFIELDS
        aux_b "@G@BB. IPAA CANDIDATE DEMOGRAPHICS@B@G" : (ENTER), EMPTY
        aux_b2 "@GWhat is your full name?@G"
               "@GMajina yako kamili kwa sasa ni yapi?@G"
               : (ENTER), EMPTY
        aux_b6 "@RPLEASE FILL IN THE TABLE BELOW FOR ALL OF THE CHILDREN FROM QUESTION @B@Rb5@R@B, STARTING WITH THE @UOLDEST@U.@R
               @/@/@BNote:@B @GFor schooling, enter the year in school, and mark whether you are referring to ECD, primary, secondary, college / university, or a trade / polytechnic school.@G"
               : (OK)

    LAYOUT
        BEFORE aux_b NEWPAGE
        AFTER aux_b NEWPAGE
        BEFORE aux_b6 NEWPAGE

    RULES
        aux_b
        b0
        IF (b0 = YES) THEN
            b1
            aux_b2
            tb2
            b3
            IF (b3 = YES) THEN
                tb3
            ENDIF
            b4
            b5
            IF (b5 > 0) THEN
                aux_b6
                tb6
            ENDIF
            b7
            b8
            IF (b8 = YES) THEN
                b8a
            ELSE
                b8b
                IF (b8b = OTHER) THEN
                    b8b_oth
                ENDIF
            ENDIF
            b9
            b10
        ENDIF
ENDBLOCK
