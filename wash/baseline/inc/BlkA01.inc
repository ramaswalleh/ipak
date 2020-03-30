{HOUSEHOLD BLOCK}
BLOCK BlkA01
FIELDS
    A1a_fname "Household Head @Bfirst name@B:"
              "@BJina la kwanza@B la mkuu wa nyumba hii ni gani?"
              : STRING [15]
    A1b_sname "Household Head @Bsecond name@B:
              @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              "@BJina la pili@B la mkuu wa nyumba hii ni gani?
              @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
              : STRING [15]
    A1_lname "Household Head @Blast name@B:"
             "@BJina la mwisho@B la mkuu wa nyumba hii ni gani?"
             : STRING [15]
    A1A_relat "What is the relationship of this Household Head to you?"
              "Uhusiano wako na mkuu wa nyumba ni upi?"
              : (SELF (0) "Self",
                 SPOUSE (1) "Spouse",
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
    A1A_othrel "Specify other relative:" : STRING [30]
    A1A_oth "Specify other person:" : STRING [30]
    A2_gt18 "How many adults @Uover 18 years@U live in this household?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW MANY ADULTS OVER 40 LIVE IN THIS HOUSEHOLD@R"
            "Ni watu wazima wangapi waliyozaidi ya @U18 na zaidi@U wanoishi katika nyumba hii?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW MANY ADULTS OVER 40 LIVE IN THIS HOUSEHOLD@R"
            : 0..10, DK
    A4_4t18 "How many @Uschool-aged people@U (3 - 18 years) live in this household?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW MANY SCHOOL AGED PEOPLE LIVE IN THIS HOUSEHOLD@R"
            "Ni watu wangapi wenye @Uumri wa kwenda shule@U wanao na miaka (3 - 18) wanoishi katika nyumba hii?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW MANY YOUNG ADULTS LIVE IN THIS HOUSEHOLD@R"
            : 0..20, DK
    A5_0t3 "How many @Uyoung children@U (0 - 36 months) live in this household?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW MANY YOUNG CHILDREN LIVE IN THIS HOUSEHOLD@R"
           "Ni @Uwatoto wangapi wachanga@U kati ya (miezi 0 - 36) wanaoishi katika nyumba hii?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE HOW MANY YOUNG CHILDREN LIVE IN THIS HOUSEHOLD@R"
           : 0..20, DK
    {CUSTOM FIELD}
    A6_total : INTEGER
RULES
    A1a_fname
    A1b_sname
    A1_lname
    A1A_relat
    IF (A1A_relat = OTHER_RELATIVE) THEN
        A1A_othrel
    ELSEIF (A1A_relat = OTHER) THEN
        A1A_oth
    ELSEIF ((a > 1) AND (A1A_relat = SELF)) THEN
        SIGNAL (A1A_relat <> A1A_relat) "@G@BWARINING!@B
                                        @/@/Are you sure the respondent is the head of this household?@G"
    ENDIF
    A2_gt18
    A4_4t18
    SIGNAL
        (A4_4t18 < 16) "@G@BALERT!@B
                       @/@/Are you sure there are more than @Bfifteen@B people in this age bracket?@G"
    A5_0t3
    SIGNAL
        (((a <> 1) OR (A5_0t3 <> 0) OR (v.V7 <> LIVE)))
            "@G@BWARNING!@B
            @/@/Are you sure the household's number of @Byoung children aged between 0 and 3@B is @Bzero@B?
            @/@/This entry possibly conflicts with the result of @G@Bthe result of the recent pregancy@B@G that the respondent had, that was reported as a @G@BLive birth@B@G in the @UVERIFICATION SECTION@U of the interview.
            @/@/Are you sure this entry is correct?@G"
    SIGNAL
        (((a <> 1) OR A5_0t3 <> 0) OR (v.V7 <> MULTIPLE))
            "@G@BWARNING!@B
            @/@/Are you sure the household's number of @Byoung children aged between 0 and 3@B is @Bzero@B?
            @/@/This entry possibly conflicts with the result of @G@Bthe result of the recent pregancy@B@G that the respondent had, that was reported as a @G@BMultiple birth, stillborn and live children@B@G in the @UVERIFICATION SECTION@U of the interview.
            @/@/Are you sure this entry is correct?@G"
    SIGNAL
        (((a <> 1) OR A5_0t3 <> 0) OR (c.RI006_eli <> LESS_THAN_SIX_WEEKS_OLD))
            "@G@BWARNING!@B
            @/@/Are you sure the household's number of @Byoung children aged between 0 and 3@B is @Bzero@B?
            @/@/This entry possibly conflicts with the @G@Beligibility criteria@B@G option entered as @G@BMother of study child less than 2 weeks old@B@G in the @URESPONDENT IDENTIFICATION SECTION@U of the interview.
            @/@/Are you sure this entry is correct?@G"
    SIGNAL
        (((a <> 1) OR A5_0t3 <> 0) OR (c.RI006_eli <> PRIMARY_CARETAKER_STUDY_CHILD))
            "@G@BWARNING!@B
            @/@/Are you sure the household's number of @Byoung children aged between 0 and 3@B is @Bzero@B?
            @/@/This entry possibly conflicts with the @G@Beligibility criteria@B@G option entered as @G@BPrimary caretaker of study child less than 2 weeks old@B@G in the @URESPONDENT IDENTIFICATION SECTION@U of the interview.
            @/@/Are you sure this entry is correct?@G"
    SIGNAL
        (A5_0t3 < 10) "@G@BALERT!@B
                      @/@/Are you sure there are more than @Bten@B children in this age bracket?@G"
    CHECK ((A2_gt18 <> 0) OR (A4_4t18 <> 0) OR (A5_0t3 <> 0))
        "@R@BERROR!@B
        @/@/You cannot have a household with @Bzero@B people!
        @/@/Please check your entry and try again.@R"
    A6_total:= (A2_gt18 + A4_4t18 + A5_0t3)
ENDBLOCK
