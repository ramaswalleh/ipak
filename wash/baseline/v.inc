BLOCK modv

PROCEDURE ProV14
AUXFIELDS
    aux_V14 "@GTHANK RESPONDENT AND MOVE TO NEXT PERSON ON POTENTIAL RESPONDENT LIST.@G" : (ENTER)
ENDPROCEDURE

PROCEDURE ProV19
AUXFIELDS
    aux_V19 "@R@BTHIS INTERVIEW WILL NOW END.@B@R
            @/@/@GTHANK RESPONDENT AND MOVE TO NEXT PERSON ON POTENTIAL RESPONDENT LIST.@G" : (ENTER)
ENDPROCEDURE

BLOCK BlkV2
FIELDS
    V2_day "Last menstrual day:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
           : 1..31, DK
    V2_mon "Last menstrual month:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
           : 1..12, DK
    V2_yea "Last menstrual year:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
           : 2011..2015, DK
    V2_dob : STRING [10]

RULES
    V2_day
    V2_mon
    SIGNAL
        (V2_mon <> DK) "@G@BALERT!@B
                       @/@/Are you sure the respondent does not know her last menstrual month?@G"
    V2_yea

    IF (V2_yea > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/The @Bmenstrual year@B entered as @R@B^V2_yea@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (V2_yea = sdatestamp.YEAR) AND (V2_mon > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bmenstrual month@B entered as @R@B^V2_mon@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF (V2_yea = sdatestamp.YEAR) AND (V2_mon = sdatestamp.MONTH) AND (V2_day > sdatestamp.DAY) THEN
                ERROR "@R@BERROR!@B
                      @/@/The @Bmenstrual day@B entered as @R@B^V2_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSE
                IF (V2_day <> DK) THEN
                    IF (V2_day < 10) THEN
                        V2_dob:= '0' + STR (V2_day) + '/'
                    ELSE
                        V2_dob:= STR (V2_day) + '/'
                    ENDIF
                ELSE
                    V2_dob:= '99/'
                ENDIF
                IF (V2_mon <> DK) THEN
                    IF (V2_mon < 10) THEN
                        V2_dob:= V2_dob + '0' + STR (V2_mon) + '/'
                    ELSE
                        V2_dob:= V2_dob + STR (V2_mon) + '/'
                    ENDIF
                ELSE
                    V2_dob:= V2_dob + '99/'
                ENDIF
                IF (V2_yea <> DK) THEN
                    V2_dob:= V2_dob + STR (V2_yea)
                ELSE
                    V2_dob:= V2_dob + '9999'
                ENDIF
            ENDIF
        ENDIF
    ENDIF
ENDBLOCK

BLOCK BlkV5
FIELDS
    V5_day "Expected day of delivery:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
           : 1..31, DK
    V5_mon "Expected month of delivery:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
           : 1..12, DK
    V5_yea "Expected year of delivery:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
           : 2012..2015, DK
    V5_dob : STRING [10]

AUXFIELDS
    aux_V5 : DATETYPE
RULES
    V5_day
    V5_mon
    V5_yea

    SIGNAL (V5_yea = DK) OR (V5_yea > (sdatestamp.YEAR - 1))
        "@G@BALERT!@B
        @/@/The @Bexpected year of birth@B entered as @G@B^V5_yea@B@G is @I@Ubefore@U@I the current year!
        @/@/Suppress if you're sure this is correct.@G"

    IF (V5_yea <> DK) AND (V5_mon <> DK) AND (V5_yea = sdatestamp.YEAR) AND (V5_mon < (sdatestamp.MONTH - 2)) THEN
        ERROR "@R@BERROR!@B
              @/@/The @Bexpected month of birth@B entered as @R@B^V5_mon@B@R is @I@Ubefore@U@I the last two months!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (V5_day <> DK) THEN
            IF (V5_day < 10) THEN
                V5_dob:= '0' + STR (V5_day) + '/'
            ELSE
                V5_dob:= STR (V5_day) + '/'
            ENDIF
        ELSE
            V5_dob:= '99/'
        ENDIF
        IF (V5_mon <> DK) THEN
            IF (V5_mon < 10) THEN
                V5_dob:= V5_dob + '0' + STR (V5_mon) + '/'
            ELSE
                V5_dob:= V5_dob + STR (V5_mon) + '/'
            ENDIF
        ELSE
            V5_dob:= V5_dob + '99/'
        ENDIF
        IF (V5_yea <> DK) THEN
            V5_dob:= V5_dob + STR (V5_yea)
        ELSE
            V5_dob:= V5_dob + '9999'
        ENDIF
    ENDIF

    IF NOT ((V5_day = DK) OR (V5_mon = DK) OR (V5_yea = DK)) THEN
        aux_V5:= ((sdatestamp - (0, V3, 0)) + (0, 9, 0))
        SIGNAL ((TODATE (V5_yea, V5_mon, V5_day)) > (aux_V5 - (0, 2, 0)))
            "@G@BALERT!@B
            @/@/The expected date of delivery is @Uunder nine months@U by a margin of one month or more.@G"
        SIGNAL ((TODATE (V5_yea, V5_mon, V5_day)) < (aux_V5 + (0, 2, 0)))
            "@G@BALERT!@B
            @/@/The expected date of delivery is @Uover nine months@U by a margin of one month or more.@G"
    ENDIF
ENDBLOCK

BLOCK BlkV9
FIELDS
    V9_day "Day of birth:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
           : 1..31, DK
    V9_mon "Month of birth:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
           : 1..12, DK
    V9_yea "Year of birth:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B"
           : 2012..2015, DK
    V9_dob : STRING [10]
RULES
    V9_day
    V9_mon
    V9_yea
    V9_dob.KEEP

    CHECK ((V9_yea <> 2012) OR (V9_mon <> 2) OR (V9_day < 30))
         "@R@BERROR!@B
         @/@/The date entered is not valid!
         @/@/The month of @BFebruary 2012@B had @B29@B days!
         @/@/Please check your entry and try again.@R"

    IF (V9_yea > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/The @Bchild@B / @Bchildren's year of birth@B entered as @R@B^V9_yea@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF (V9_yea = sdatestamp.YEAR) AND (V9_mon > sdatestamp.MONTH) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bchild@B / @Bchildren's month of birth@B entered as @R@B^V9_mon@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF (V9_yea = sdatestamp.YEAR) AND (V9_mon = sdatestamp.MONTH) AND (V9_day > sdatestamp.DAY) THEN
                ERROR "@R@BERROR!@B
                      @/@/The @Bchild@B / @Bchildren's day of birth@B entered as @R@B^V9_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSE
                IF (V9_day <> DK) THEN
                    IF (V9_day < 10) THEN
                        V9_dob:= '0' + STR (V9_day) + '/'
                    ELSE
                        V9_dob:= STR (V9_day) + '/'
                    ENDIF
                ELSE
                    V9_dob:= '99/'
                ENDIF
                IF (V9_mon <> DK) THEN
                    IF (V9_mon < 10) THEN
                        V9_dob:= V9_dob + '0' + STR (V9_mon) + '/'
                    ELSE
                        V9_dob:= V9_dob + STR (V9_mon) + '/'
                    ENDIF
                ELSE
                    V9_dob:= V9_dob + '99/'
                ENDIF
                IF (V9_yea <> DK) THEN
                    V9_dob:= V9_dob + STR (V9_yea)
                ELSE
                    V9_dob:= V9_dob + '9999'
                ENDIF
            ENDIF
        ENDIF
    ENDIF
    IF NOT ((V9_day = DK) OR (V9_mon = DK) OR (V9_yea = DK)) THEN
        {IF ((TODATE (V9_yea, V9_mon, V9_day) < (sdatestamp - (0, 0, 42)))) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bchild@B / @Bchildren@B cannot be @Uolder@U than @B6 weeks@B old!
                  @/@/Please check your entry and try again.@R"
        ENDIF}
        SIGNAL ((TODATE (V9_yea, V9_mon, V9_day) > (sdatestamp - (0, 0, 22))))
            "@G@BWARNING!@B
            @/@/The @Bchild@B's / @Bchildren@B's age is @Uolder@U than @B3 weeks@B old.
            @/@/Suppress if you're sure this is correct.@G"
    ENDIF
ENDBLOCK

TABLE TblV2
FIELDS
    BV2 : BlkV2
RULES
    BV2
ENDTABLE

TABLE TblV5
FIELDS
    BV5 : BlkV5
RULES
    BV5
ENDTABLE

TABLE TblV9
FIELDS
    BV9 : BlkV9
RULES
    BV9
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    V1a "Does your household own or rent this residence?"
        "Je unamiliki au kukodisha nyumba hii?"
        : (OWN "Own",
           RENT "Rent")
    V1 "Are you currently pregnant?"
       "Hivi sasa uko mja mzito?"
       : TYesNo
    V2 "What was the date of your last menstrual period?
       @/@/@RPROBE TO ENSURE COMPREHENSION.
       @/@/YOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO ANSWER@R"
       "Tarehe ya damu ya mwezi (hedhi) yako ya mwisho ilikuwa lini?
       @/@/@RPROBE TO ENSURE COMPREHENSION.
       @/@/YOU CAN SELECT @BRefusal@B BY GOING TO @BAnswer@B >> @BRefusal@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+R@B IF THE RESPONDENT DECLINES TO ANSWER@R"
       : (ENTER), RF
    TV2 : TblV2
    V3 "For how many months have you been pregnant?"
       "Je umekuwa mja mzito kwa miezi ngapi?"
       : 0..10
    V3a "SOURCE OF PREGNANCY LENGTH
        @/@/@RPROBE IF NECESSARY@R"
        : (ONLY "Estimated by mother only",
           NOULTRASOUND "Estimated by mother and health practitioner, no ultrasound (last prenatal visit)",
           ULTRASOUND "Estimated by mother and health practitioner using ultrasound (last prenatal visit)")
    V4 "IS THE RESPONDENT IN HER SECOND OR THIRD TRIMESTER BASED ON HER REPORTED PREGNANCY LENGTH (> 3 MONTHS) OR LAST MENSTRUAL PERIOD?
       @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF SHE IS IN HER SECOND OR THIRD TRIMESTER@R"
       : TYesNo, DK
    TV5 : TblV5
    V6 "Were you recently pregnant (in the last 6 weeks)?"
       "Je, ulikuwa na mimba hivi karibuni? (Kwa wiki 6 zilizopita?)"
       : TYesNo
    V7 "What was the result of this pregnancy?
       @/@/@RREAD RESPONSES@R"
       "Matokeo ya mimba hii yalikuwa yapi?
       @/@/@RREAD RESPONSES@R"
       : (MISCARRIAGE "Miscarriage" "Kuharibika / kutoka kwa mimba",
          STILL "Still birth" "Kujifungua mtoto aliyekufa",
          LIVE "Live birth" "Kujifungua mtoto aliye hai",
          MULTIPLE "Multiple birth, some stillborn and some live children" "Kujifungua mapacha, watoto wafu na walio hao")
    V8 "How many children were born from this pregnancy?"
       "Ni watoto wangapi ulizaa kutokana na mimba hii?"
       : 0..5
    TV9 : TblV9
    V10 "Of these children, how many are still living?"
        "kwa hawa watoto waliozaliwa, wangapi bado wako hai?"
        : 0..5
    V11 "How old was the first child at death in days?
        @/@/@RIF STILL BIRTH, ENTER “@R0@R”@R"
        "Mtoto wakwanza alikuwa umri gani kwa masiku wakati alipokufa?
        @/@/@RIF STILL BIRTH, ENTER “@R0@R”@R"
        : 0..30
    V12 "How old was the second child at death in days?
        @/@/@RIF STILL BIRTH, ENTER “@R0@R”@R"
        "Mtoto wapili alikuwa umri gani kwa masiku wakati alipokufa?
        @/@/@RIF STILL BIRTH, ENTER “@R0@R”@R"
        : 0..30
    V13 "How old was the third child at death in days?
        @/@/@RIF STILL BIRTH, ENTER “@R0@R”@R"
        "Mtoto watatu alikuwa umri gani kwa masiku wakati alipokufa?
        @/@/@RIF STILL BIRTH, ENTER “@R0@R”@R"
        : 0..30
    V15 "Are you the primary caretaker for a child that was born within the last 6 weeks?"
        "Wewe ni mlezi wa kimsingi wa mtoto aliyezaliwa wiki sita zilizopita?"
        : TYesNo
    V16 "Our census completed within the last 6 weeks indicated there was a pregnant mother in the 2nd or 3rd trimester in this compound.
        @/@/Is there a primary caretaker for a child that was born within the last 6 weeks that I may interview today?"
        "Hesabu yetu ya watu tuliyoifanya wiki sita zilizopita ilionyesha kuna mama mja mzito kati ya miezi 3 na 6 au miezi 7 na 9 katika boma hili.
        @/@/Kuna mlezi wa kimsingi wa mtoto aliyezaliwa wiki mbili zilizopita ninayeweza kumhoji leo?"
        : TYesNo
    V17 "Are you the primary caretaker for a child that was born within the last 6 weeks?"
        "Wewe ni mlezi wa kimsingi wa mtoto aliyezaliwa wiki sita zilizopita?"
        : TYesNo
    V18 "@BOBSERVE:@B
        @/@/DOES THE RESPONDENT APPEAR TO BE THE PRIMARY CARETAKER FOR A CHILD THAT WAS BORN WITHIN THE LAST 6 WEEKS?"
        : TYesNo
    V19 "Do you plan on living in this @Bcompound@B for at least 1 year?
        @/@/@RPROBE: LIKELY TO MOVE TO BE WITH CHILD'S FATHER, SPOUSE / PARTNER, FOR WORK, TO RETURN TO FAMILY VILLAGE, ETC.
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF SHE PLANS ON LIVING IN THIS COMPOUND FOR AT LEAST ONE YEAR@R"
        "Unapanga kuishi katika @Bboma@B hili angalau kwa mwaka mmoja?
        @/@/@RPROBE: LIKELY TO MOVE TO BE WITH CHILD'S FATHER, SPOUSE / PARTNER, FOR WORK, TO RETURN TO FAMILY VILLAGE, ETC.
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF SHE PLANS ON LIVING IN THIS COMPOUND FOR AT LEAST ONE YEAR@R"
        : TYesNo, DK
    V20 "Do you plan on living in this @Bvillage@B for at least 1 year?
        @/@/@RPROBE: LIKELY TO MOVE TO BE WITH CHILD'S FATHER, SPOUSE / PARTNER, FOR WORK, TO RETURN TO FAMILY VILLAGE, ETC.
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF SHE PLANS ON LIVING IN THIS VILLAGE FOR AT LEAST ONE YEAR@R"
        "Unapanga kuishi katika hiki @Bkijiji@B angalau kwa mwaka mmoja?
        @/@/@RPROBE: LIKELY TO MOVE TO BE WITH CHILD'S FATHER, SPOUSE / PARTNER, FOR WORK, TO RETURN TO FAMILY VILLAGE, ETC.
        @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF SHE PLANS ON LIVING IN THIS VILLAGE FOR AT LEAST ONE YEAR@R"
        : TYesNo, DK

AUXFIELDS
    aux_v "@G@B@UVERIFICATION QUESTIONS@U@B@G" : (ENTER), EMPTY
    aux_pre "@GI would like to ask you a few questions that may seem private or personal in nature because they touch on the life and health of your child.
            @/@/Your participation is voluntary and you do not have to participate.
            @/@/You do not need to talk to me if you do not want to.
            @/@/And if there is any question you do not want to answer, that will be fine.
            @/@/You can withdraw from the study at any time, even in the middle of an interview.
            @/@/If you do want to talk with me and participate in this study, I will keep everything that you tell me entirely private and confidential, and will not talk to other people about what you have said.@G"
            "@GNingependa kukuuliza maswali machache ambayo yanaweza kuonekana kuwa ya kisiri au ya kibinafsi kwa sababu yanagusia maisha na afya ya mtoto wako.
            @/@/Kuhusishwa kwako ni kwa hiari na si lazima ushiriki.
            @/@/Si lazima uongee na mimi kama hutaki.
            @/@/Na kama kuna swali ambalo hutaki kujibu, hiyo itakuwa sawa. Waweza toka kwenye utafiti wakati wowote, hata katikati ya mahojiano.
            @/@/Kama utaongea nami na kushiriki kwenye utafiti huu, nitaweka kila kitu ambayo utaniambia kisiri, na sitaongea na watu wengine kuhusu yale uliyosema.@G"
            : (ENTER)
    aux_V5 "@GWhat is your expected date of delivery?@G"
           "@GUnatarajia kujifungua tarehe ngapi?@G"
           : (ENTER), EMPTY
    aux_V9 "@GWhat date was / were child / children born?@G"
           "@GMtoto / watoto (ame)wamezaliwa tarehe gani?@G"
           : (ENTER), EMPTY
    aux_V12 "@GHow old was the first child at death?@G"
            "@GMtoto alikuwa umri gani wakati alipokufa?@G"
            : (ENTER), EMPTY
    aux_end : TYesNo
LAYOUT
    BEFORE aux_v NEWPAGE
    AFTER aux_v NEWPAGE

    AFTER aux_pre NEWPAGE

RULES
    aux_v
    aux_pre
    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    aux_end:= NO
    V1a
    IF ((stimestamp = EMPTY) AND (V1a = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
    IF (V1a = OWN) THEN
        V1
        IF (V1 = YES) THEN
            V2
            IF (V2 <> RF) THEN
                TV2
            ENDIF
            V3
            V3a
            IF (V3 >= 3) THEN
                V4:= YES
            ELSE
                V4:= NO
            ENDIF
            V4.SHOW
            IF (V4 = YES) OR (V4 = DK) THEN
                aux_V5
                TV5
                V19
                IF NOT (V19 = YES) THEN
                    V20
                    IF (V20 = NO) THEN
                        ProV19
                        aux_end:= YES
                    ENDIF
                ENDIF
            ELSE
                ProV14
                aux_end:= YES
            ENDIF
        ELSE
            V6
            IF (V6 = YES) THEN
                V7
                IF (V7 = LIVE) OR (V7 = MULTIPLE) THEN
                    V8
                    aux_V9
                    TV9
                    IF ((TODATE (TV9.BV9.V9_yea, TV9.BV9.V9_mon, TV9.BV9.V9_day) >= (sdatestamp - (0, 0, 21)))) THEN
                        V10
                        CHECK (V10 < (V8 + 1)) "@R@BERROR!@B
                                               @/@/The number of children who are @Bstill living@B entered as @R@B^V10@B@R @BCANNOT@B be @Uhigher@U than the number of @Bchildren born@B entered as @R@B^V8@B@R!
                                               @/@/Please check your entry and try again.@R"
                        IF NOT (V10 = V8) THEN
                            V11
                            IF ((V8 - V10) > 1) THEN
                                V12
                                IF ((V8 - V10) > 2) THEN
                                    V13
                                ENDIF
                            ENDIF
                            IF (V10 > 0) THEN
                                V19
                                IF NOT (V19 = YES) THEN
                                    V20
                                    IF (V20 = NO) THEN
                                        ProV19
                                        aux_end:= YES
                                    ENDIF
                                ENDIF
                            ENDIF
                        ELSE
                            V19
                            IF NOT (V19 = YES) THEN
                                V20
                                IF (V20 = NO) THEN
                                    ProV19
                                    aux_end:= YES
                                ENDIF
                            ENDIF
                        ENDIF
                    ELSE
                        ProV19
                        aux_end:= YES    
                    ENDIF                        
                ELSE
                    ProV14
                    aux_end:= YES
                ENDIF
            ELSE
                V15
                IF (V15 = NO) THEN
                    V16
                    IF (V16 = YES) THEN
                        V17
                        IF (V17 = YES) THEN
                            V18
                            IF (V18 = NO) THEN
                                ProV19
                                aux_end:= YES
                            ELSE
                                V19
                                IF NOT (V19 = YES) THEN
                                    V20
                                    IF (V20 = NO) THEN
                                        ProV19
                                        aux_end:= YES
                                    ENDIF
                                ENDIF
                            ENDIF
                        ELSE
                            ProV19
                            aux_end:= YES
                        ENDIF
                    ELSE
                        ProV19
                        aux_end:= YES
                    ENDIF
                ELSE
                    V19
                    IF NOT (V19 = YES) THEN
                        V20
                        IF (V20 = NO) THEN
                            ProV19
                            aux_end:= YES
                        ENDIF
                    ENDIF
                ENDIF
            ENDIF
        ENDIF
    ELSE
        ProV14
        aux_end:= YES
    ENDIF
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (aux_end = YES)) OR ((etimestamp = EMPTY) AND (V19 = NO)) OR ((etimestamp = EMPTY) AND (V19 = DK)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (etimestamp <> EMPTY) AND (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
