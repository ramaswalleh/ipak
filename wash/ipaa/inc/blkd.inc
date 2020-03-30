BLOCK blkd
    TYPE
        TTrust = (DEF_YES "DEFINITELY YES" "KWA HAKIKA NDIO",
                  MOS_YES "MOSTLY YES" "SANASANA NDIO",
                  MOS_NO "MOSTLY NO" "SANASANA HAPANA",
                  DEF_NO "DEFINITELY NO" "KWA HAKIKA HAPANA")
        TAgree = (STR_AGR "STRONGLY AGREE" "NAKUBALI KABISA",
                  SOM_AGR "AGREE SOMEWHAT" "NAKUBALI KIASI",
                  NEI_AGR "NEITHER AGREE NOR DISAGREE" "SIKUBALI WALA SIKATAI",
                  SOM_DIS "DISAGREE SOMEWHAT" "SIKUBALI KIASI",
                  STR_DIS "STRONGLY DISAGREE" "SIKUBALI KABISA")
    FIELDS
        d1 "Generally speaking, would you say that most people can be trusted, or that you need to be very careful in dealing with people?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF MOST PEOPLE CAN BE TRUSTED OR IF CARE SHOULD BE EXERCISED WHEN DEALING WITH THEM.@R"
           "Kwa kawaida, unaweza kusema ya kwamba watu wengi wanaweza kuaminiwa au inabidi kuwa mwangalifu sana ukiwa nao?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW IF MOST PEOPLE CAN BE TRUSTED OR IF CARE SHOULD BE EXERCISED WHEN DEALING WITH THEM.@R"
           : (MOST "Most people can be trusted" "Watu wengi wanaweza kuaminiwa",
              NEED "Need to be careful" "Lazima kuwa mwangalifu"), DK
        d2 "In general, can you trust members of your tribe?
           @/@/@RREAD RESPONSES@R"
           "Kwa kawaida, unaweza kuwaamini watu wa kabila lako?
           @/@/@RREAD RESPONSES@R"
           : TTrust
        d3 "In general, can you trust people in other tribes?
           @/@/@RREAD RESPONSES@R"
           "Kwa kawaida, unaweza kuwaamini watu wa kabila zingine?
           @/@/@RREAD RESPONSES@R"
           : TTrust
        d4 "In your opinion, how frequently or infrequently do you believe husbands in Kenya hit / strike their wives?
           @/@/@RREAD RESPONSES@R"
           "Kwa maoni yako, ni mara ngapi waume Kenya huwapiga wake zao?
           @/@/@RREAD RESPONSES@R"
           : (VER_FRE "VERY FREQUENTLY" "MARA NYINGI SANA",
              SOM_FRE "SOMEWHAT FREQUENTLY" "KWA KIASI FULANI CHA JUU",
              SOM_INF "SOMEWHAT INFREQUENTLY" "KWA KIASI FULANA KILICHOPUNGUA",
              VER_INF "VERY INFREQUENTLY" "KWA NADRA SANA")
        d5 "How much do you agree or disagree with the following statement:
           @/@/@B@I'A married man has the right to hit / strike his wife or children if they misbehave'@I@B?
           @/@/@RREAD RESPONSES@R"
           "Ni kwa kiasi gani unakubaliana au kukataa sentensi ifuatayo:
           @/@/@B@I'Mume ana haki ya kumpiga mkewe anapokosa?'@I@B"
           : TAgree
        d6 "How much do you agree with the following statement?
           @/@/@B@I'Women have always been subject to traditional laws and customs, and should remain so.'@I@B
           @/@/@RREAD RESPONSES@R"
           "Unakubaliana na sentensi ifuatayo?
           @/@/@B@I'Wanawake wamekuwa wakitawaliwa na Sheria na mila za kitamaduni kwa hivyo inapaswa kubaki hivyo.'@I@B
           @/@/@RREAD RESPONSES@R"
           : TAgree
        d7 "How much do you agree with the following statement?
           @/@/@B@I'In our country, women should have equal rights and receive the same treatment as men do.'@I@B
           @/@/@RREAD RESPONSES@R"
           "Unakubaliana na sentensi ifuatayo?
           @/@/@B@I'Katika nchi yetu, wanawake wapaswa kupewa haki sawa na kupata huduma sawa kama wanaume.'@I@B
           @/@/@RREAD RESPONSES@R"
           : TAgree

    AUXFIELDS
        aux_d "@G@BD. TRUST MODULE@B@G" : (ENTER), EMPTY
        aux_intro "@G@BNow I am going to ask you some questions about trust.@B@G"
                  "@G@BSasa ningependa kukuuliza maswali juu ya kuamini watu wengine.@B@G"
                  : (ENTER), EMPTY
    LAYOUT
        BEFORE aux_d NEWPAGE
        BEFORE aux_intro NEWPAGE
    RULES
        aux_d
        aux_intro
        d1
        d2
        d3
        d4
        d5
        d6
        d7
ENDBLOCK
