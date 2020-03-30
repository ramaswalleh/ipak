BLOCK modc1_3b
    INCLUDE "inc\BlkSR.inc"
    INCLUDE "inc\BlkC1B.inc"
    {INCLUDE "inc\BlkC2A.inc"}

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    pre "I would like to ask you a few questions that may seem private or personal in nature because they touch on the life and health of your child.
        @/@/Your participation is voluntary and you do not have to participate. You do not need to talk to me if you do not want to.
        @/@/And if there is any question you do not want to answer, that will be fine.
        @/@/You can withdraw from the study at any time, even in the middle of an interview.
        @/@/If you do want to talk with me and participate in this study, I will keep everything that you tell me entirely private and confidential, and will not talk to other people about what you have said."
        "Ningependa kukuuliza maswali ambayo yataonekana yakiwa kisiri / kibinafsi kwako kwasababu yanahusu maisha na afya yako.
        @/@/Kuhusishwa kwako ni kwa hiari na si lazima ushiriki.
        @/@/Si lazima uongee na mimi kama hutaki.
        @/@/Na kama kuna swali ambayo hutaki kujibu, hiyo itakuwa sawa. Waweza toka kwenye utafiti wakati wowote, hata kati kati ya majadiliano.
        @/@/Kama utaongea nami na kushiriki kwenye utafiti huu, nitaweka kila kitu ambayo utaniambia kisiri, na sitaongea na watu wengine kuhusu yale ulio sema."
        : TYesNo
    BSR : BlkSR
    BC1B : BlkC1B
    {BC2A : BlkC2A}

LOCALS
    I : INTEGER [1]

AUXFIELDS
    aux_c1_3b "@G@BC.1-3A@|@USECONDARY RESPONDENTS@U@B@G" : (ENTER), EMPTY
    {aux_c2 "@G@BC.2@|@UDIARRHEA AND ILLNESS SYMPTOMS@U@B@G" : (ENTER), EMPTY
    aux_read "@GThank you.
             @/@/Now I am going to ask you some questions about the health of your child.
             @/@/Please answer each question as accurately as you can.
             @/@/If you don't know the answer to a question, say “@G@B@II don't know@I@B@G”.@G"
             "@GAsante.
             @/@/Sasa ningependa kukuuliza maswali kuhusu afya ya mtoto.
             @/@/Tafadhali jibu kila swali kwa usahihi jinsi uwezavyo.
             @/@/Ikiwa hujui jibu la swali, sema “@G@B@Isijui@I@B@G”.@G"
             : (ENTER), EMPTY}


LAYOUT
    BEFORE aux_c1_3b NEWPAGE
    AFTER aux_c1_3b NEWPAGE

    AFTER pre NEWPAGE

    {BEFORE aux_c2 NEWPAGE
    AFTER aux_c2 NEWPAGE

    AFTER aux_read NEWPAGE}

RULES
    aux_c1_3b

    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    sdatestamp.KEEP
    IF (sdatestamp = EMPTY) THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}

    pre
    IF ((stimestamp = EMPTY) AND (pre = YES)) THEN
        stimestamp:= SYSTIME
    ENDIF
    IF (pre = YES) THEN
        BSR
        BC1B
        {aux_c2
        aux_read
        BC2A}
    ENDIF

    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (BC1B.BC2B.gift = YES)) OR ((etimestamp = EMPTY) AND (BC1B.BC2B.why = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
