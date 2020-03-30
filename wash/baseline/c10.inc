BLOCK modc10

{TYPES}
TYPE
    TDuration = (HOURS "Hours",
                 DAYS "Days",
                 WEEKS "Weeks")

    TSource = (BOREHOLE (1) "Borehole",
               UNPROTECT_SPRING (3) "Unprotected spring",
               PROTECT_SPRING	(4) "Protected spring (has concrete lining)",
               UNPROTECT_WELL	(5) "Unprotected dug well",
               PROTECT_WELL (6) "Protected dug well (has concrete lining)",
               RAINWATER (7) "Rainwater collection",
               CART (8) "Cart with small tank / drum",
               TANKER_TRUCK (9) "Tanker truck",
               SURFACE_WATER (10) "Surface water (river, dam, lake, pond, stream, etc.)",
               PIPED_DWELL (11) "Piped water into dwelling",
               PIPED_YARD (12) "Piped water into yard / plot",
               OTHER (77) "Other")

    TTreat = (DISPENSER (1) "Chlorine dispenser",
              WATERGUARD (2) "@BWaterGuard@B / bottled Chlorine",
              BOIL (3) "Boil",
              SIEVE (4) "Sieve it through cloth or other material",
              OTHER (5) "Other type of water filter (ceramic, sand, composite)",
              SODIS (6) "@BSO@Blar @BDIS@Binfection (@BSODIS@B)",
              SETTLE (7) "Let it stand and settle",
              BIOSAND (8) "Biosand filter",
              FILTER (9) "@BLifeStraw@B family filter (distributed by @BVestergaard Frandsen@B)",
              ALUM (10) "Coagulant (i.e. Alum)",
              PUR (11) "@BPUR@B (Flocculant + disinfectant)",
              AQUATAB (12) "@BAquatabs@B",
              CHLORINE (13) "Water source treated with Chlorine")

    TWhen = (TODAY "Today",
             YESTERDAY "Yesterday",
             WEEK "Within the last seven days (since this day last week)",
             FORTNIGHT "Within the past 2 weeks",
             MONTH "Within the past month",
             YEAR "Within the past year")

    TObservation = (YES,
                    NO,
                    NOT_POSSIBLE "Observation not possible")

    TCalender = (JAN "January",
                 FEB "February",
                 MAR "March",
                 APR "April",
                 MAY "May",
                 JUN "June",
                 JUL "July",
                 AUG "August",
                 SEP "September",
                 OCT "October",
                 NOV "November",
                 DEC "December")

    TUse = (DRINK "Drinking" "Kunywa",
            COOK "Cooking / washing dishes" "Kupika / kuosha vyombo",
            LAUNDRY "Laundry" "Kufua",
            BATH "Bathing / handwashing" "Kuoga / kunawa",
            IRRIGATE "Irrigating a garden or crops" "Kunyunyiza shamba au mimea",
            WATER "Watering livestock" "Kunywesha mifugo")

    TContainer = (FIVE "Five liter containers" "Lita tano",
                  TEN "Ten liter containers" "Lita kumi",
                  TWENTY "Twenty liter containers" "Lita ishirini")

    TSatisfy = (VERY "VERY SATISFIED" "UMETOSHEKA KABISA",
                SOMEWHAT "SOMEWHAT SATISFIED" "UMETOSHEKA KIASI",
                NOT_VERY "NOT VERY SATISFIED" "HUJATOSHEKA",
                NOT_AT_ALL "NOT AT ALL SATISFIED" "HUJATOSHEKA HATA KIDOGO")

{DRINKING WATER}
BLOCK BlkC1003
FIELDS
    C1003_1 "@BOBSERVATION:@B
            @/@/IS WATER FOR DRINKING CURRENTLY AVAILABLE IN THE HOUSEHOLD?" : TYesNo
    C1003_2 "@BOBSERVATION:@B
            @/@/WHAT DID THE RESPONDENT DO BEFORE TAKING THE WATER?
            @/@/Rinsed glass / container with drinking water before filling?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
            : TYesNo, DK
    C1003_3 "Washed hands with water before drinking water was obtained?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
            : TYesNo, DK
    C1003_4 "Washed hands with soap before drinking water obtained?
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
            : TYesNo, DK
    C1003_5 "BROUGHT DIRECTLY FROM WATER SOURCE
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
            : TYesNo, DK
    C1003_6 "BROUGHT DIRECTLY FROM STORAGE CONTAINER
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
            : TYesNo, DK
    C1003_7 "BROUGHT DIRECTLY FROM @BVESTERGAARD FRANDSEN@B (@BVF@B) FILTER
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
            : TYesNo, DK
    C1003_7A "BROUGHT DIRECTLY FROM OTHER TYPE OF FILTER
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
             : TYesNo, DK
    C1003_8 "STORED WATER WAS COVERED
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
             : TYesNo, DK
    C1003_9 "HANDS TOUCHED / CONTACTED THE DRINKING WATER
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
            : TYesNo, DK
    C1003_10 "CONTAINER / GLASS DIPPED INTO WATER CONTAINER
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
             : TYesNo, DK
    C1003_11 "LADLE USED TO OBTAIN WATER
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
             : TYesNo, DK
    C1003_12 "WATER POURED FROM CONTAINER
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
             : TYesNo, DK
    C1003_13 "WATER POURED FROM TAP
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
             : TYesNo, DK

AUXFIELDS
    aux_take "@G@BOBSERVE:@B
             @/@/@UFROM WHERE@U DID THE RESPONDENT TAKE THE WATER?@G" : (ENTER), EMPTY
    aux_cup "@G@BOBSERVE:@B
            @/@/@UHOW DID SHE GET THE WATER@U INTO THE CUP?@G" : (ENTER), EMPTY
LAYOUT
    AFTER C1003_13 NEWPAGE
RULES
    C1003_1
    IF (C1003_1 = YES) THEN
        C1003_2
        C1003_3
        C1003_4
        aux_take
        C1003_5
        C1003_6
        C1003_7
        C1003_7A
        C1003_8
        aux_cup
        C1003_9
        C1003_10
        C1003_11
        C1003_12
        C1003_13
    ENDIF
ENDBLOCK

{ADDIDTIONAL SOURCE BLOCK}
BLOCK BlkD8E
FIELDS
    D8E_name1 "Additional source @B^c10@B name 1:
              @/@/@RYOU CAN LEAVE THIS FIELD BLANK IF THE ADDITIONAL WATER SOURCE DOES NOT HAVE A NAME
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NAME OF THE WATERSOURCE@R"
              : STRING [20], EMPTY, DK
    D8E_name2 "Additional source @B^c10@B name 2:
              @/@/@RYOU CAN LEAVE THIS FIELD BLANK IF THE ADDITIONAL WATER SOURCE DOES NOT HAVE AN ALTERNATIVE NAME
              @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW AN ALTERNATIVE NAME FOR THE WATERSOURCE@R"
              : STRING [20], EMPTY, DK
    D8E_id "Additional source @B^c10@B ID:
           @/@/@RYOU CAN LEAVE THIS FIELD BLANK IF THE ADDITIONAL WATER SOURCE ID IS NOT APPLICABLE@R"
           : INTEGER [6], EMPTY
    D8E_type "Additional source @B^c10@B type:" : TSource
RULES
    D8E_name1
    D8E_name2
    D8E_id
    D8E_type

ENDBLOCK

{ADDITIONAL SOURCE TABLE}
TABLE TblBD8E
FIELDS
    BD8E : BlkD8E
RULES
    BD8E
ENDTABLE

{INCLUDE}
    INCLUDE "inc\BlkC10HHMS.inc"
    INCLUDE "inc\BlkVFLS.inc"
    INCLUDE "inc\BlkC10D.inc"
    INCLUDE "inc\BlkC10RW.inc"

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    {C1001 "How do you store drinking water?
          @/@/@RASK THE QUESTION AND OBSERVE IF POSSIBLE
          @/@/READ RESPONSES@R"
          "Wewe huyaweka kwa namna gani maji yako ya kunywa?
          @/@/@RASK THE QUESTION AND OBSERVE IF POSSIBLE
          @/@/READ RESPONSES@R"
          : SET [4] OF (CONTAINER "IN PLASTIC OR METAL CONTAINERS" "CHOMBO CHA PLASTIKI AMA MABATI",
                        POTS "IN CLAY POTS" "NDANI YA CHUNGU CHA UDONGO",
                        TANK "ROOF TANK OR CISTERN" "TANKI YA PAANI AMA ARDHINI",
                        WATER "DO NOT STORE WATER" "HUWEKI MAJI",
                        OTHER (77) "Other")
    C1001_oth "Specify other way respondent stores drinking water." : STRING [30]}
    C1002 "Is there a child 0 - 36 months in this household who drinks water?"
          "Katika nyumba hii kuna mtoto kati ya mieze 0 - 36 ambaye hunywa maji?"
          : TYesNo
    {DRINKING WATER}
    BC1003 : BlkC1003
    {HOUSEHOLD MICROBIOLOGICAL SAMPLE}
    BC10HHMS : BlkC10HHMS
    {VESTERGAARD FRANDSEN / LIFESTRAW FILTER}
    BVFLS : BlkVFLS
    {DRINKING WATER SOURCES}
    BC10D : ARRAY [1..2] OF BlkC10D
    D8Caa "Do you also draw water from another source [@BSECONDARY SOURCE@B]?"
          "Je, wewe pia huchota maji kwa chemichemi ingine [@BSECONDARY SOURCE@B]" : TYesNo
    D8C2 "Do you or your children ever drink water from the secondary source you just told me about?"
         "Je, wewe au watoto wako hunywa maji kutoka kwa chemichemi ya pili uliyonieleza hivi sasa?"
         : TYesNo
    D8D "Are there any other sources @Bwithin the village or in the border@B that you @Bever@B drink from?
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW OF ANY OTHER SOURCES WITHIN THE VILLAGE THAT SHE EVER DRIKS FROM@R"
        "Je kuna chemichemi nyingine zozote @Bkijijini humu@B ambapo wewe hunywa maji?
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW OF ANY OTHER SOURCES WITHIN THE VILLAGE THAT SHE EVER DRIKS FROM@R"
        : TYesNo, DK
    D8Da "How many?"
         "Chemichemi hizi ni ngapi?" : 1..5
    TBD8E : ARRAY [1..5] OF TblBD8E
    D13 "From which source did you collect the drinking water in this cup?
        @/@/@RREAD RESPONSES@R"
        "Maji ya kunywa yaliyomo katika kikombe hiki, uliyateka kutoka chemichemi gani?
        @/@/@RREAD RESPONSES@R"
        : (PRIM "Primary source" "Chemichemi ya kawaida (msingi)",
           SECO "Secondary source" "Chemichemi ya pili (badala)",
           RAIN "Rainwater" "Maji ya mvua",
           OTHER (77) "Other" "Nyingine",
           NA (88) "Not Applicable (No water in the household)")
    D13_oth "Specify other source:" : STRING [30]
    D13_id "Other source ID:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE SOURCE ID IS NOT KNOWN@R"
           : 100000..999997, DK
    C1027 "Thinking about ALL the water that your household obtains from ALL sources, approximately how many of the following sized containers of water would you say that your household uses @BIN TOTAL EACH DAY@B?
          @/@/@RENCOURAGE RESPONDENT TO ESTIMATE
          @/@/YOU CAN ENTER DECIMAL ENTRIES (E.G HALF A LITER CAN BE ENTERED AS 0.5)
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE APPROXIMATE QUANTITY OF WATER USED IN TOTAL EACH DAY@R"
          "Unapofikiria kuhusu maji ambayo nyumba yako huteka katika chemichemi zote, kwa kufikira, ni mitungi ngapi ambazo nyumba yako hutumia kila siku @BKWA JUMLA@B?
          @/@/@RENCOURAGE RESPONDENT TO ESTIMATE
          @/@/YOU CAN ENTER DECIMAL ENTRIES (E.G HALF A LITER CAN BE ENTERED AS 0.5)
          @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE APPROXIMATE QUANTITY OF WATER USED IN TOTAL EACH DAY@R"
          : SET [4] OF (FIVE "5 liter containers",
                        TEN "10 liter containers",
                        TWENTY "20 liter containers",
                        OTHER "Other sized container"), DK
    C1027_5 "How many containers of @U5-liter@U capacity?" : 0.0..97.9
    C1027_10 "How many containers of @U10-liter@U capacity?" : 0.0..97.9
    C1027_20 "How many containers of @U20-liter@U capacity?" : 0.0..97.9
    C1027_oth "For other size, how many liters in one container?" : 0.0..97.9
    C1027_no "How many containers of @B^C1027_oth@B-liter capacity?" : 0.0..97.9
    {D12 "About how many liters of water do you and your household collect @B@Ufor drinking@U@B every week?
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE APPROXIMATE QUANTITY OF WATER COLLECTED IS USED IN DRINKING EACH DAY@R"
        "Kwa ujumla, nyumba yako huteka lita ngapi za maji @B@Uya kunywa@U@B kila wiki?
        @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE APPROXIMATE QUANTITY OF WATER COLLECTED IS USED IN DRINKING EACH DAY@R"
        : SET [4] OF (FIVE "5 liter containers",
                      TEN "10 liter containers",
                      TWENTY "20 liter containers",
                      OTHER "Other sized container"), DK
    D12_5 "Five liter containers:" : 0..97
    D12_10 "Ten liter containers:" : 0..97
    D12_20 "Twenty liter containers:" : 0..97
    D12_oth "For other size, how many liters in one container?" : 0..97
    D12_no "Number of containers collected per trip?" : 0..97}
    BC10RW : BlkC10RW
    {W1032 "When visitors come to your compound, how satisfied are you with the @Bdrinking water@B you have to offer?
          @/@/@RREAD RESPONSES@R"
          "Wageni wanapokuja kwa boma lako, je huwa umetosheka kwa kiwango kipi na @Bmaji ya kunywa@B unayowapa?
          @/@/@RREAD RESPONSES@R"
          : TSatisfy}
    W1033 "How satisfied are you with the @Bquality of the drinking water consumed@B this compound?
          @/@/@RREAD RESPONSES@R"
          "Wewe umetosheka kwa kiwango kipi na hali ya @Bmaji ya kunywa mnayokunywa@B katika hili boma?
          @/@/@RREAD RESPONSES@R"
          : TSatisfy
    {W1034 "Does contact with untreated water pose a risk to your health?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF CONTACT WITH UNTREATED WATER POSES A HEALTH RISK@R"
          "Je kuyaguza maji ambayo hayajatibiwa kunahatarisha afya yako?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF CONTACT WITH UNTREATED WATER POSES A HEALTH RISK@R"
          : TYesNo, DK}
    W1035 "Does drinking untreated water pose a risk to your health?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF DRINKING UNTREATED WATER POSES A HEALTH RISK@R"
          "Je kunywa maji ambayo hayajatibiwa kunahatarisha afya yako?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF DRINKING UNTREATED WATER POSES A HEALTH RISK@R"
          : TYesNo, DK
    {W1036 "Do other people in this compound drink untreated water?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF OTHER HOUSEHOLDS IN THIS COMPOUND DRINK UNTREATED WATER@R"
          "Kuna watu wengine katika boma hili ambao hunywa maji ambayo hayajatibiwa?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF OTHER HOUSEHOLDS IN THIS COMPOUND DRINK UNTREATED WATER@R"
          : TYesNo, DK}
    W1037 "When / If other people in your compound drink untreated water, does it pose a risk to your health?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF IT IS A HEALTH RISK TO HER IF OTHER PEOPLE IN THE COMPOUND DRINK UNTREATED WATER@R"
          "Watu wengine katika boma lako wakinywa maji ambayo hayajatibiwa, je inahatarisha afya yako?
          @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW / IS NOT SURE IF IT IS A HEALTH RISK TO HER IF OTHER PEOPLE IN THE COMPOUND DRINK UNTREATED WATER@R"
          : TYesNo, DK

LOCALS
    c10 : INTEGER
    loc_label : STRING [9]
AUXFIELDS
    aux_c10 "@G@BC.10@|@UWATER TREATMENT, STORAGE, AND QUALITY@U@B@G" : (ENTER), EMPTY
    aux_say "@GThank you very much.
            @/@/Now, I would like to ask you some questions about the water you and your family drink at home.
            @/@/Remember, we are in no way affiliated with @G@BLIFESTRAW@B@G or @G@BVESTERGAARD FRANDSEN@B@G."
            "@GAsante sana.
            @/@/Sasa ningependa kukuuliza maswali kuhusu maji ambayo wewe na familia yako hunywa nyumbani.
            @/@/Kumbuka, hatuna uhusiano wowote na @G@BLIFESTRAW@B@G au @G@BVESTERGAARD FRANDSEN@B@G.@G"
            : (ENTER), EMPTY
    aux_C1003_yes "@GIf @Uyour child 0 - 36 months@U wanted a drink of water right now, could you show me how you would give it to him / her?@G
                  @/@/@RATTEMPT TO FOLLOW RESPONDENT WHEN SHE GOES TO RETRIEVE THE WATER.
                  @/@/IF WATER IS STORED IN ANOTHER ROOM, ASK HER IF IT IS OKAY TO ENTER THAT ROOM.
                  @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
                  "@GIkiwa @Umtoto wako wa miezi 0 - 36@U anataka kunywa maji sasa hivi, unaweza kunionyesha jinsi utampa?@G
                  @/@/@RATTEMPT TO FOLLOW RESPONDENT WHEN SHE GOES TO RETRIEVE THE WATER.
                  @/@/IF WATER IS STORED IN ANOTHER ROOM, ASK HER IF IT IS OKAY TO ENTER THAT ROOM.
                  @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
                  : (ENTER), DK, EMPTY
    aux_C1003_no "@GIf @Uyou@U wanted a drink of water right now, could you show me how you would get it?@G
                 @/@/@RATTEMPT TO FOLLOW RESPONDENT WHEN SHE GOES TO RETRIEVE THE WATER.
                 @/@/IF WATER IS STORED IN ANOTHER ROOM, ASK HER IF IT IS OKAY TO ENTER THAT ROOM.
                 @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
                 "@GIkiwa unataka maji ya kunywa sasa hivi, unaweza kunionyesha jinsi utakavyoyapata?@G
                 @/@/@RATTEMPT TO FOLLOW RESPONDENT WHEN SHE GOES TO RETRIEVE THE WATER.
                 @/@/IF WATER IS STORED IN ANOTHER ROOM, ASK HER IF IT IS OKAY TO ENTER THAT ROOM.
                 @/@/YOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU CANNOT OBSERVE@R"
                 : (ENTER), DK, EMPTY
    aux_C10W10 "@G@BDETERMINANTS OF WATER@B@G" : (ENTER), EMPTY

LAYOUT
    BEFORE aux_c10 NEWPAGE
    AFTER aux_c10 NEWPAGE

    AFTER aux_say NEWPAGE

    AFTER D8C2 NEWPAGE

    BEFORE aux_C10W10 NEWPAGE
RULES
    aux_c10

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
    aux_say
    {C1001
    IF (WATER IN C1001) THEN
        FOR c10:= 1 TO 5 DO
            IF (C1001 [c10] = CONTAINER) OR (C1001 [c10] = POTS) OR (C1001 [c10] = TANK) OR (C1001 [c10] = OTHER) THEN
                ERROR "@R@BERROR!@B
                      @/@/You cannot select @R@BDO NOT STORE WATER@B@R and at the same time select other options!
                      @/@/Please check your entry and try again.@R"
            ENDIF
        ENDDO
    ENDIF
    IF (OTHER IN C1001) THEN
        C1001_oth
    ENDIF}
    C1002
    IF (C1002 = YES) THEN
        aux_C1003_yes
    ELSE
        aux_C1003_no
    ENDIF
    {DRINKING WATER}
    BC1003
    {HOUSEHOLD MICROBIOLOGICAL SAMPLE}
    BC10HHMS
    {VESTERGAARD FRANDSEN / LIFESTRAW FILTER}
    BVFLS
    {DRINKING WATER SOURCES}
    loc_label:= 'PRIMARY'
    BC10D [1]
    D8Caa
    IF (D8Caa = YES) THEN
        loc_label:= 'SECONDARY'
        BC10D [2]
    ENDIF
    D8D
    IF (D8D = YES) THEN
        D8Da
        FOR c10:= 1 TO D8Da DO
            TBD8E [c10]
        ENDDO
    ENDIF
    D13
    IF (D13 = OTHER) THEN
        D13_oth
        D13_id
    ENDIF
    C1027
    IF (FIVE IN C1027) THEN
        C1027_5
    ENDIF
    IF (TEN IN C1027) THEN
        C1027_10
    ENDIF
    IF (TWENTY IN C1027) THEN
        C1027_20
    ENDIF
    IF (OTHER IN C1027) THEN
        C1027_oth
        C1027_no
    ENDIF
    {D12
    IF (FIVE IN D12) THEN
        D12_5
        SIGNAL
            (D12_5 < 6) "@G@BALERT!@B
                        @/@/Are you sure the respondent meant @B^D12_5@B five-liter containers?@G"
    ENDIF
    IF (TEN IN D12) THEN
        D12_10
        SIGNAL
            (D12_10 < 6) "@G@BALERT!@B
                         @/@/Are you sure the respondent meant @B^D12_10@B ten-liter containers?@G"
    ENDIF
    IF (TWENTY IN D12) THEN
        D12_20
        SIGNAL
            (D12_20 < 6) "@G@BALERT!@B
                         @/@/Are you sure the respondent meant @B^D12_20@B twenty-liter containers?@G"
    ENDIF
    IF (OTHER IN D12) THEN
        D12_oth
        D12_no
        SIGNAL
            (D12_no < 6) "@G@BALERT!@B
                         @/@/Are you sure the respondent meant @B^D12_no@B other-liter containers?@G"
    ENDIF}
    {RAINWATER}
    BC10RW
    aux_C10W10
    {W1032}
    W1033
    {W1034}
    W1035
    {W1036}
    W1037
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (W1037 = RESPONSE)) OR ((etimestamp = EMPTY) AND (W1037 = DK)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
