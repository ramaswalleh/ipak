BLOCK modc3
    INCLUDE "inc\BlkC3.inc"

TABLE TblDeworm
FIELDS
    BResp : BlkResp
    BChild : ARRAY [1..10] OF BlkChild
AUXFIELDS
    aux_resp "@GPlease remember to start with the respondent first.@G" : (ENTER), EMPTY
    aux_child "@GNow you can proceed to children @B0 to 12 years old excluding the study child@B available in the household.@G" : (ENTER), EMPTY
    aux_C30t12 : 0..10
LOCALS
    td : INTEGER
    loc_C30t12 : INTEGER
LAYOUT
    BEFORE aux_resp NEWPAGE
    AFTER aux_resp NEWPAGE

    BEFORE aux_child NEWPAGE
    AFTER aux_child NEWPAGE
RULES
    aux_resp
    BResp
    FOR td:= 1 TO b.aux_A4_A5 DO
        IF (b.TB10.BB10 [td].BDOB.DOB_year <> DK) THEN
            IF ((sdatestamp.YEAR - b.TB10.BB10 [td].BDOB.DOB_year) <= 12) THEN
                loc_C30t12:= (loc_C30t12 + 1)
                index [td]:= td
            ENDIF
        ENDIF
    ENDDO

    IF (c.RI006_eli = LESS_THAN_SIX_WEEKS_OLD) OR (c.RI006_eli = PRIMARY_CARETAKER_STUDY_CHILD) OR (c1.C102_status = BORN) THEN
        index [td]:= 0
    ENDIF

    aux_C30t12:= loc_C30t12

    IF (aux_C30t12 > 0) THEN
        aux_child
        FOR td:= 1 TO b.aux_A4_A5 DO
            IF (index [td] <> 0) THEN
                c3:= (c3 + 1)
                BChild [c3].C300A:= b.TB10.BB10 [index [td]].B10_fname
                BChild [c3].C300B:= (sdatestamp.YEAR - b.TB10.BB10 [index [td]].BDOB.DOB_year)
                BChild [c3].Childid:= b.TB10.BB10 [index [td]].Childid
            ENDIF
        ENDDO
    ENDIF

    aux_C30t12:= c3

    FOR td:= 1 TO aux_C30t12 DO
        BChild [td]
    ENDDO

ENDTABLE

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE
    TDeworm : TblDeworm
LOCALS
    c3 : INTEGER
    index : ARRAY [1..10] OF INTEGER

AUXFIELDS
    aux_c3 "@G@BC.3@|@UDEWORMING@U@B@G" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_c3 NEWPAGE
    AFTER aux_c3 NEWPAGE
RULES
    aux_c3

    {START TIME AND DATE STAMPS}
    stimestamp.KEEP
    IF (stimestamp = EMPTY) AND ((TDeworm.BResp.C305_7day = RESPONSE) OR (TDeworm.BResp.C305_7day = DK)) THEN
        stimestamp:= SYSTIME
    ENDIF
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF

    {BEGIN}
    TDeworm
    {FINISH}

    {END TIME AND DATE STAMPS}
    etimestamp.KEEP
    IF (etimestamp = EMPTY) AND ((TDeworm.BChild [c3].C300B = RESPONSE) OR (TDeworm.BChild [c3].C300B = DK)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF (edatestamp = EMPTY) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
