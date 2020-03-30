{RAINWATER}
BLOCK BlkC10RW
FIELDS
    D9 "Are there times of the year when you collect rainwater for drinking?"
       "Je kuna wakati mwingine kwa mwaka ambapo wewe huchota maji ya mvua kwa sababu ya kunywa?"
       : TYesNo
    D3aW "Which best describes the location of rainwater collection?
         @/@/@RREAD RESPONSES@R"
         "Ni ipi inayoeleza vyema sehemu ya kusanyia maji ya mvua?
         @/@/@RREAD RESPONSES@R"
         : (YOUR_COMPOUND "IN YOUR COMPOUND" "KATIKA BOMA LAKO",
            OTHER_COMPOUND "IN ANOTHER PERSON'S COMPOUND" "KATIKA BOMA LA MTU MWINGINE",
            YOUR_PROPERTY "OUTSIDE YOUR COMPOUND ON YOUR PROPERTY" "NJE YA BOMA LAKO, KWA SHAMBA LAKO",
            OTHER_PROPERTY "ON SOMEONE ELSE'S PROPERTY" "KWA SHAMBA LA MTU MWINGINE",
            PUBLIC "IN A PUBLIC PLACE" "KATIKA SEHEMU YA UMMA")
    D10 "How do you collect rainwater for drinking?"
        "Wewe huteka maji ya mvua ya kunywa kivipi?"
        : SET [4] OF (ROOF "Roof catchment",
                      TREE "Tree catchment",
                      BUCKET "Buckets / clay pots (no catchment)",
                      OTHER "Other")
    D10_oth "Specify other means of collecting rainwater:" : STRING [30]
    {D11 "During which months of the year do you usually collect rainwater for drinking?
        @/@/@RREAD RESPONSES@R"
        "Ni miezi gani ya mwaka wewe huchota maji ya mvua ya kunywa?
        @/@/@RREAD RESPONSES@R"
        : SET [12] OF TCalender}
    C1025 "Is your household currently collecting rainwater?"
          "Je kwa sasa, nyumba yako inateka maji ya mvua?"
          : TYesNo
    C1026_1 "DRINKING"
            "KUNYWA"
            : TYesNo
    C1026_2 "COOKING / WASHING DISHES"
            "KUPIKA / KUOSHA VYOMBO"
            : TYesNo
    C1026_3 "LAUNDRY"
            "KUFUA"
            : TYesNo
    C1026_4 "BATHING / HANDWASHING"
            "KUOGA / KUNAWA"
            : TYesNo
    C1026_5 "IRRIGATING A GARDEN OR CROPS"
            "KUNYUNYIZA SHAMBA AU MIMEA"
            : TYesNo
    C1026_6 "WATERING LIVESTOCK"
            "KUNYWESHA MIFUGO"
            : TYesNo
    RW1007 "Do you ever treat the rainwater you collect or do anything to make it less cloudy?"
           "Je, wewe hutibu maji ya mvua unayoyateka au kufanya chochote kupunguza rangi?"
           : TYesNo
    RW1009 "What are all the ways you treat the rainwater you collect?
           @/@/@RDO NOT READ RESPONSES
           @/@/PROBE UNTIL RESPONDENT IS FINISHED@R"
           "Ni njia zipi zote wewe hutumia kuyatibu maji ya mvua unayoyateka?
           @/@/@RDO NOT READ RESPONSES
           @/@/PROBE UNTIL RESPONDENT IS FINISHED@R"
          : SET [13] OF (DISPENSER (1) "Chlorine dispenser",
                         WATERGUARD (2) "@BWaterGuard@B / bottled Chlorine",
                         BOIL (3) "Boil",
                         SIEVE (4) "Sieve it through cloth or other material",
                         OTHER (5) "Other type of water filter (ceramic, sand, composite)",
                         SODIS (6) "@BSO@Blar @BDIS@Binfection (@BSODIS@B)",
                         SETTLE (7) "Let it stand and settle",
                         BIOSTAND (8) "Biostand filter",
                         FILTER (9) "@BLifeStraw@B family filter (distributed by @BVestergaard Frandsen@B)",
                         ALUM (10) "Coagulant (i.e. Alum)",
                         PUR (11) "@BPUR@B (Flocculant + disinfectant)",
                         AQUATAB (12) "@BAquatabs@B",
                         CHLORINE (13) "Water source treated with Chlorine")
AUXFIELDS
    aux_C10RW "@GRAINWATER@G" : (ENTER), EMPTY
    aux_C1026 "@GCan you please tell me which of the following activities that you use @Brainwater@B for?@G
              @/@/@RREAD RESPONSES@R"
              "@GJe utanieleza ni kwa shughuli gani wewe hutumia maji ya @Bmvua@B?@G
              @/@/@RREAD RESPONSES@R"
              : (ENTER), EMPTY
LAYOUT
    BEFORE aux_C10RW NEWPAGE

RULES
    aux_C10RW
    D9
    IF (D9 = YES) THEN
        D3aW
        D10
        IF (OTHER IN D10) THEN
            D10_oth
        ENDIF
        {D11}
        C1025
        aux_C1026
        C1026_1
        C1026_2
        C1026_3
        C1026_4
        C1026_5
        C1026_6
        RW1007
        IF (RW1007 = YES) THEN
            RW1009
        ENDIF
    ENDIF
ENDBLOCK
