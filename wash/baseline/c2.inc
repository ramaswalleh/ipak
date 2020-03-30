BLOCK modc2
    INCLUDE "inc\BlkC2.inc"

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    BC2 : ARRAY [1..4] OF BlkC2
LOCALS
    loclab_eng : STRING [8]
    loclab_swa : STRING [8]
    loc_child : STRING [15]
    loc_label : STRING [22]
    loc_other : INTEGER [1]
    loc_paras : INTEGER [1]
    loc_othparas : INTEGER [1]
    I : INTEGER
    OnlyChild : STRING [3]
AUXFIELDS
    aux_c2 "@G@BC.2@|@UDIARRHEA AND ILLNESS SYMPTOMS@U@B@G" : (ENTER), EMPTY
    aux_read "@GThank you.
             @/@/Now I am going to ask you some questions about the health of your @B^loclab_eng@B.
             @/@/Please answer each question as accurately as you can.
             @/@/If you don't know the answer to a question, say “@G@B@II don't know@I@B@G”.
             @/@/We will begin with @G@B^loc_child@B@G.@G"
             "@GAsante.
             @/@/Sasa ningependa kukuuliza maswali kuhusu afya ya @B^loclab_swa@B.
             @/@/Tafadhali jibu kila swali kwa usahihi jinsi uwezavyo.
             @/@/Ikiwa hujui jibu la swali, sema “@G@B@Isijui@I@B@G”.
             @/@/Tutaanza na @G@B^loc_child@B@G.@G"
             : (ENTER), EMPTY
    aux_loop : 1..4
LAYOUT
    BEFORE aux_c2 NEWPAGE
    AFTER aux_c2 NEWPAGE

    AFTER aux_read NEWPAGE
RULES
    aux_c2

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
    IF (OnlyChild = 'NO') THEN
        loclab_eng:= 'children'
        loclab_swa:= 'wanao'
    ELSE
        loclab_eng:= 'child'
        loclab_swa:= 'mwanao'
    ENDIF

    IF (c1.C102_status = BORN) THEN
        loc_child:= 'Study Child'
    ELSEIF (c1.C102_status = UNBORN) AND (intParChil > 0) THEN
        loc_child:= 'Parasite Child'
    ELSEIF (c1.C102_status = UNBORN) AND (intParChil > 0) AND (a.Thh [1].BA01.A5_0t3 > 0) THEN
        loc_child:= 'Other Child'
    ENDIF

    IF (c1.C102_status = BORN) OR (intParChil > 0) OR ((intParChil > 0) AND (c1.C102_status = BORN))
    OR ((c1.C102_status = UNBORN) AND (a.Thh [1].BA01.A5_0t3 > 0) AND (intParChil = 0))
    OR ((c1.C102_status = BORN) AND (a.Thh [1].BA01.A5_0t3 > 1) AND (intParChil = 0)) THEN
        aux_read
        FOR I:= 1 TO 3 DO
            IF ((c1.C102_status = BORN) AND (I = 1)) THEN
                loc_label:= 'Study Child'
                BC2 [I].C2_03A2:= c.TRI008.BRI008.RI008_fname
                BC2 [I].Childid:= c.SCid
                BC2 [I]
            ELSEIF ((intParChil > 0) AND (I <= intParChil)) THEN
                loc_paras:= loc_paras + 1
                loc_label:= 'Study Parasite Child ' + STR (loc_paras)
                BC2 [I].C2_03A2:= sc.BPC [index [I]].TSC2.BSC2.SC2_fname
                BC2 [I].Childid:= sc.BPC [index [I]].SC1
                BC2 [I]
            ELSEIF ((intParChil > 0) AND ((I - intParChil) = 1) AND (c1.C102_status = BORN)) THEN
                loc_paras:= loc_paras + 1
                loc_label:= 'Study Parasite Child ' + STR (loc_paras)
                BC2 [I].C2_03A2:= sc.BPC [index [I]].TSC2.BSC2.SC2_fname
                BC2 [I].Childid:= sc.BPC [index [I]].SC1
                BC2 [I]
            ELSEIF ((c1.C102_status = UNBORN) AND (a.Thh [1].BA01.A5_0t3 > 0) AND (intParChil = 0) AND (I = 1)) THEN
                loc_label:= 'Other Youngest Child'
                BC2 [I].C2_03A2:= b.TB10.BB10 [young].B10_fname
                BC2 [I].Childid:= b.TB10.BB10 [young].Childid
                BC2 [I]
            ELSEIF ((c1.C102_status = BORN) AND (a.Thh [1].BA01.A5_0t3 > 1) AND (intParChil = 0) AND (I = 2)) THEN
                loc_label:= 'Other Youngest Child'
                BC2 [I].C2_03A2:= b.TB10.BB10 [young].B10_fname
                BC2 [I].Childid:= b.TB10.BB10 [young].Childid
                BC2 [I]
            ENDIF
        ENDDO
    ENDIF
    {FINISH}

    {END TIME AND DATE STAMPS: TIME STAMP DEPENDS ON THE NUMBRER OF LOOPS THAT CAN ONLY BE DETERMINED WHEN THIS MODULE IS MERGED}
    etimestamp.KEEP
    IF (etimestamp = EMPTY) AND ((BC2 [I].C215 = RESPONSE) OR (BC2 [I].C215 = DK) OR (BC2 [I].C215AA = RESPONSE) OR (BC2 [I].C215AA = DK) OR (BC2 [I].C215A = RESPONSE) OR (BC2 [I].C215A = DK) OR (BC2 [I].C215B = RESPONSE) OR (BC2 [I].C215B = DK)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
