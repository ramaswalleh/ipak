BLOCK moda
    INCLUDE "inc\BlkA01.inc"

{HOUSEHOLD TABLE}
TABLE Tblhh
FIELDS
    BA01 : BlkA01
AUXFIELDS
    aux_A6 "@G@U@B^BA01.A1_lname HOUSEHOLD@U@B
           @/@/ADULTS @UOVER @B18@B YEARS@U:                                         @B^BA01.A2_gt18@B
           @/SCHOOL-AGED PEOPLE @UBETWEEN THE AGE OF @B4@B TO @B18@B YEARS@U:        @B^BA01.A4_4t18@B
           @/YOUNG CHILDREN AGED @U@B3@B YEARS AND @BYOUNGER@B@U:                    @B^BA01.A5_0t3@B
           @/@/THE CALCULATED @U@BTOTAL NUMBER OF PEOPLE IN THIS HOUSEHOLD@B@U IS:   @B^BA01.A6_total@B
           @/@BPLEASE CONFIRM WITH RESPONDENT.@B@G"
           "@G@U@BBOMA YA ^BA01.A1_lname@U@B
           @/@/WATU WAZIMA WANAO NA MIAKA @U@B18@B NA @BZAIDI@B@U:                   @B^BA01.A2_gt18@B
           @/WATOTO WANAO NA UMRI YA KWENDA SHULE NA MIAKA @U@B4@B NA @B18@B@U:      @B^BA01.A4_4t18@B
           @/WATOTO WACHANGA WANAO NA UMRI WA MIAKA @U@B3@B NA @BCHINI@B@U:          @B^BA01.A5_0t3@B
           @/@/THE CALCULATED @U@BTOTAL NUMBER OF PEOPLE IN THIS HOUSEHOLD@B@U IS:   @B^BA01.A6_total@B
           @/@BPLEASE CONFIRM WITH RESPONDENT.@B@G"
           : (ENTER), EMPTY
RULES
    BA01
    aux_A6
ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    A01_hh "First, I would like to know about the households in this compound, @Bincluding your own@B.
           @/@/How many separate households are there where a person or group of people usually live and share meals together?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF NO ONE IS ABLE TO PROVIDE THE NUMBER OF SEPARATE HOUSEHOLDS IN THIS COMPOUND@R
           @/@/@UDEFINITION OF HOUSEHOLD@U:
           @/A household consists of a person or group of persons, related or unrelated, who:
           @/@/1) Reside in the same homestead / compound but not necessarily in the same dwelling unit
           @/@/2) Acknowledge one adult male or female as the head of household
           @/@/3) Have the same cooking arrangements and share meals
           @/@/@R@UINCLUDE ALL HOUSEHOLDS WHERE PEOPLE ARE CURRENTLY LIVING.@U@R"
           "Kwanza, ningependa kujua kuhusu nyumba katika boma hili.
           @/@/@BPamoja na yako@B, ni nyumba ngapi tofauti ambazo watu huishi na hukula pamoja?
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF NO ONE IS ABLE TO PROVIDE THE NUMBER OF SEPARATE HOUSEHOLDS IN THIS COMPOUND@R
           @/@/@UDEFINITION OF HOUSEHOLD@U:
           @/A household consists of a person or group of persons, related or unrelated, who:
           @/@/1) Reside in the same homestead / compound but not necessarily in the same dwelling unit
           @/@/2) Acknowledge one adult male or female as the head of household
           @/@/3) Have the same cooking arrangements and share meals
           @/@/@R@UINCLUDE ALL HOUSEHOLDS WHERE PEOPLE ARE CURRENTLY LIVING.@U@R"
           : 1..10, DK
    {TABLE VARIABLE}
    Thh : ARRAY [1..10] OF Tblhh
    A2_total : INTEGER
    A4_total : INTEGER
    A5_total : INTEGER
    A6_gross : INTEGER
AUXFIELDS
    aux_a "@G@BA.@|@UCENSUS OF HOUSEHOLDS AND PEOPLE IN COMPOUND @U@B@G" : (ENTER), EMPTY
    aux_read "@GOkay.
             @/@/Now I am going to ask you about each household separately that is in your compound.
             @/@/First, think about @Uyour own household@U.@G
             @/@/@RALWAYS RECORD THE RESPONDENT'S OWN HOUSEHOLD FIRST.@R"
             "Sawa.
             @/@/Sasa naenda kukuliza kuhusu kila nyumba kwenye boma hili kivyake.
             @/@/Kwanza, fikiria kuhusu @Unyumba yako@U.@G
             @/@/@RALWAYS RECORD THE RESPONDENT'S OWN HOUSEHOLD FIRST.@R"
             : (ENTER), EMPTY
    aux_total "@GTOTAL COMPOUND MEMBERS OVER THE AGE OF 18:         @B^A2_total@B
              @/TOTAL COMPOUND MEMBERS BETWEEN THE AGES 4 AND 18:   @B^A4_total@B
              @/TOTAL COMPOUND MEMBERS AGED 3 AND BELOW (0 - 3):    @B^A5_total@B
              @/@/TOTAL NUMBER OF MEMBERS IN THIS COMPOUND:         @B^A6_gross@B@G"
              : (ENTER), EMPTY
    aux_etimestamp : TIMETYPE
LOCALS
    a : INTEGER
LAYOUT
    BEFORE aux_a NEWPAGE
    AFTER aux_a NEWPAGE

    BEFORE aux_read NEWPAGE
    AFTER aux_read NEWPAGE
RULES
    aux_a
    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    A01_hh
    IF ((stimestamp = EMPTY) AND (A01_hh = RESPONSE)) THEN
        stimestamp:= SYSTIME
    ENDIF
        SIGNAL (A01_hh < 11) "@GAre you sure there are more than @B10@B distinct households within this compound?@G"
    IF (A01_hh <> DK) THEN
        aux_read
    ENDIF
    FOR a:=1 TO A01_hh DO
        Thh [a]
        A2_total:= A2_total + Thh [a].BA01.A2_gt18
        A4_total:= A4_total + Thh [a].BA01.A4_4t18
        A5_total:= A5_total + Thh [a].BA01.A5_0t3
        A6_gross:= A6_gross + Thh [a].BA01.A6_total
    ENDDO
    aux_total
    {FINISH}

    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (Thh [a].BA01.A5_0t3 = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (etimestamp <> EMPTY) AND (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
