BLOCK BlkB35_L
FIELDS
    B35_know "Do you know the @Bvillage liguru@B?"
             "Unamjua @Bliguru@B?"
             : TYesNo
    B35_talk "In a typical month, how often do you talk to the @Bvillage liguru@B?
             @/@/READ RESPONSES"
             "Katika mwezi wa kawaida, wewe huzungumza na @Bliguru@B mara ngapi?
             @/@/READ RESPONSES"
             : TTalk
RULES
    B35_know
    IF (B35_know = YES) THEN
        B35_talk
    ENDIF
ENDBLOCK

BLOCK BlkB35_I
FIELDS
    B35_know "Do you know the @BIPA-Assistant ^b@B?"
             "Unamjua @BIPA-Assistant ^b@B?"
             : TYesNo
    B35_talk "In a typical month, how often do you talk to the @BIPA-Assistant ^b@B?
             @/@/READ RESPONSES"
             "Katika mwezi wa kawaida, wewe huzungumza na @BIPA-Assistant ^b@B mara ngapi?
             @/@/READ RESPONSES"
             : TTalk
    IPAAid "IPA-A ID:" : STRING [6]
RULES
    B35_know
    IF (B35_know = YES) THEN
        B35_talk
    ENDIF
    IPAAid:= SUBSTRING (hhid, 1, 4) + STR (b)
    IPAAid.SHOW
ENDBLOCK

{BLOCK BlkB35_R
FIELDS
    B35_know "Do you know the @Bvillage respondent ^b@B?"
             "Unamjua @Bmama ^b@B mwenzako?"
             : (YES "Yes",
                NO "No",
                SELF "Self",
                NA "Not applicable")
    B35_talk "On average, how often do you talk to the @Bvillage respondent ^b@B?
             @/@/READ RESPONSES"
             "Kwa kawaida, wewe huzungumza na @Bmama ^b mara@B ngapi?
             @/@/READ RESPONSES"
             : TTalk
RULES
    B35_know
    IF (B35_know = YES) THEN
        B35_talk
    ENDIF
ENDBLOCK}
