BLOCK BlkSR

{SECONDARY RESPONDENT NAMES BLOCK}
BLOCK BlkSR004
FIELDS
    SR004_fname "Secondary respondent's @Bfirst@B name:" : STRING [15]
    SR004_sname "Secondary respondent's @Bsecond@B name:
                 @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                 : STRING [15]
    SR004_lname "Secondary respondent's @Blast@B name:" : STRING [15]
RULES
    SR004_fname
    SR004_sname
    SR004_lname
ENDBLOCK

{SECONDARY RESPONDENT OTHER NAMES BLOCK}
BLOCK BlkSR005
FIELDS
    SR005_fname "Other @Bfirst@B name:
                @/@/@RYOU MUST ENTER AT LEAST ONE NAME IN THIS FIELD@R" : STRING [15]
    SR005_sname "Other @Bsecond@B name:
                @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                : STRING [15]
    SR005_lname "Other @Blast@B name:
                @/@/@RENTER @R@B“88”@B@R FOR NOT APPLICABLE@R"
                : STRING [15]
RULES
    SR005_fname
    SR005_sname
    SR005_lname
ENDBLOCK

{RESPONDENT NAMES TABLE}
TABLE TblSR004
FIELDS
    BSR004 : BlkSR004
RULES
    BSR004
ENDTABLE

{RESPONDENT OTHER NAMES TABLE}
TABLE TblSR005
FIELDS
    BSR005 : BlkSR005
RULES
    BSR005
ENDTABLE

FIELDS
    TSR004 : TblSR004
    SR_id "Secondary Respondent ID" : TIndividualID
    SR005 "Have you previously gone by another name or do you currently have other names?"
           "Hapo awali umewahi kutumia jina lingine au kwa sasa una majina ya utani?"
           : TYesNo
    TSR005 : TblSR005
    SR_A "Are you the mother of [this child / these children]?"
          "Wewe ndiye mama wa [mtoto huyu / watoto hawa]?"
          : TYesNo
    SR_B "What is your relationship to [this child / these children]?"
          "Una uhusiano gani na [mtoto huyu / watoto hawa]?"
          : (FATHER "Father",
             AUNT "Aunt",
             STEP_MOTHER "Step-Mother",
             GRANDPARENT "Grandparent",
             NEIGHBOR_FRIEND "Neighbor / Friend",
             OTHER (77) "Other")
    SR_B_oth "Specify other relationship:" : STRING [30]
    SR_C "Do you feel qualified to answer questions about the health and food intake of [this child / these children]?"
          "Je unahisi unaweza kujibu maswali kuhusu afya na vyakula anavyokula [huyu mtoto / watoto hawa]?"
          : TYesNo
    SR_D "Time start respondent" : TIMETYPE

AUXFIELDS
    aux_SR004 "@GWhat is your current full name?@G"
              "@GMajina yako kamili kwa sasa ni yapi?@G"
              : (ENTER), EMPTY
RULES
    aux_SR004
    TSR004
    IF (sr_intro = YES) THEN
        SR_id:= hhid + '53'
        SR_id.SHOW
    ELSE
        SR_id
    ENDIF
    SR005
    IF (SR005 = YES) THEN
        TSR005
    ENDIF
    SR_A
    IF (SR_A = YES) THEN
        SR_D:= SYSTIME
        SR_D.KEEP
    ELSE (SR_A = NO)
        SR_B
        IF (SR_B = OTHER) THEN
            SR_B_oth
        ENDIF
        SR_C
        IF (SR_C = YES) THEN
            SR_D:= SYSTIME
            SR_D.KEEP
        ENDIF
    ENDIF
ENDBLOCK
