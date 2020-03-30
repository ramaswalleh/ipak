BLOCK BlkB10
    EXTERNALS
        GetLocDetl : GetLocationDetails ('..\ext\LocDetail')

{HOUSEHOLD CHILD'S DATE OF BIRTH BLOCK DEFINATION}
BLOCK BlkDOB
FIELDS
    DOB_day "Child's @BDAY@B of birth:
            @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE CHILD'S DAY OF BIRTH@R"
            : 1..31, DK
    DOB_month "Child's @BMONTH@B of birth:
              @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE CHILD'S MONTH OF BIRTH@R"
              : 1..12, DK
    DOB_year "Child's @BYEAR@B of birth:
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE CHILD'S YEAR OF BIRTH@R"
             : 1992..2015, DK
    DOB_dob : STRING [10]

AUXFIELDS
    aux_DOB : DATETYPE

RULES
    DOB_day
    DOB_month
    DOB_year
    DOB_dob.KEEP

    SIGNAL (DOB_day = DK) OR (DOB_month = DK) OR (DOB_year <> DK)
        "@G@BALERT!@B
        @/@/The respondent provided the @Bday@B and @Bmonth@B but doesn't know the @Byear of birth@B for the child.
        @/@/Suppress if this is true.@G"

    IF (DOB_year > sdatestamp.YEAR) THEN
        ERROR "@R@BERROR!@B
              @/@/The @Bchild's year of birth@B entered as @R@B^DOB_year@B@R is @I@Ubeyond@U@I the current year!
              @/@/Please check your entry and try again.@R"
    ELSE
        IF ((DOB_year = sdatestamp.YEAR) AND (DOB_month > sdatestamp.MONTH)) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bchild's month of birth@B entered as @R@B^DOB_month@B@R is @I@Ubeyond@U@I the current month!
                  @/@/Please check your entry and try again.@R"
        ELSE
            IF ((DOB_year = sdatestamp.YEAR) AND (DOB_month = sdatestamp.MONTH) AND (DOB_day > sdatestamp.DAY)) THEN
                ERROR "@R@BERROR!@B
                      @/@/The @Bchild's day of birth@B entered as @R@B^DOB_day@B@R is @I@Ubeyond@U@I the current day!
                      @/@/Please check your entry and try again.@R"
            ELSE
                IF (DOB_day <> DK) THEN
                    IF (DOB_day < 10) THEN
                        DOB_dob:= '0' + STR (DOB_day) + '/'
                    ELSE
                        DOB_dob:= STR (DOB_day) + '/'
                    ENDIF
                ELSE
                    DOB_dob:= '99/'
                ENDIF
                IF (DOB_month <> DK) THEN
                    IF (DOB_month < 10) THEN
                        DOB_dob:= DOB_dob + '0' + STR (DOB_month) + '/'
                    ELSE
                        DOB_dob:= DOB_dob + STR (DOB_month) + '/'
                    ENDIF
                ELSE
                    DOB_dob:= DOB_dob + '99/'
                ENDIF
                IF (DOB_year <> DK) THEN
                    DOB_dob:= DOB_dob + STR (DOB_year)
                ELSE
                    DOB_dob:= DOB_dob + '9999'
                ENDIF
            ENDIF
        ENDIF
    ENDIF
    IF NOT ((DOB_year = DK) OR (DOB_month = DK) OR (DOB_day = DK)) THEN
        IF ((TODATE (DOB_year, DOB_month, DOB_day) < (sdatestamp - (18, 11, 28)))) THEN
            ERROR "@R@BERROR!@B
                  @/@/The @Bchild@B cannot be @Uolder@U than @B18 years@B old!
                  @/@/Please check your entry and try again.@R"
        ENDIF
        aux_DOB:= TODATE (DOB_year, DOB_month, DOB_day)
    ELSEIF ((DOB_year <> DK) AND (DOB_month <> DK) AND (DOB_day = DK)) THEN
        aux_DOB:= (DOB_year, DOB_month, 15)
    ELSEIF ((DOB_year <> DK) AND (DOB_month = DK) AND (DOB_day <> DK)) THEN
        aux_DOB:= (DOB_year, 7, DOB_day)
    ELSEIF ((DOB_year <> DK) AND (DOB_month = DK) AND (DOB_day = DK)) THEN
        aux_DOB:= (DOB_year, 7, 15)
    ENDIF
    aux_DOB.KEEP
ENDBLOCK

FIELDS
    B10_fname "First name:" : STRING [15]
    B10_lname "Last name:" : STRING [15]
    Childid "Child ID" : TIndividualID
    BDOB : BlkDOB
    B10_enrol "School enrollment."
              : (ENROLLED "Currently enrolled",
                 NOT_ENROL "Not currently enrolled")
    B10_where "Enrolled inside or outside the village?"
              : (INSIDE "Inside the village",
                 OUTSIDE "Outside the village")
    B10_vill "Which village is the school located in?
             @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF THE RESPONDENT DOES NOT KNOW THE NAME OF THE VILLAGE THAT HER CHILD'S SCHOOL IS LOCATED IN@R"
             : STRING [30], DK
    B10_id "Village ID:
           @/@/@RYOU CAN SELECT @BDon't Know@B BY GOING TO @BAnswer@B >> @BDon't Know@B FROM THE MENU, OR PRESSING THE SHORTCUT KEYS @BCtrl+K@B IF YOU DO NOT KNOW THE VILLAGE ID@R"
           : TVillageID, DK

AUXFIELDS
    aux_child "@GChild ^b@G" : (ENTER), EMPTY
    aux_eldest "@GEldest child@G" : (ENTER), EMPTY
    aux_B10 "@GChild's date of birth:@G" : (ENTER), EMPTY
RULES
    IF (b = 1) AND (b <> B9_care) THEN
        aux_eldest
    ELSE
        aux_child
    ENDIF
    IF ((b = aux_A4_A5) AND (c.RI006_eli = LESS_THAN_SIX_WEEKS_OLD)) OR ((b = B9_care) AND (c.RI006_eli = PRIMARY_CARETAKER_STUDY_CHILD)) THEN
        B10_fname.SHOW
        B10_lname.SHOW
    ELSE
        B10_fname.ASK
        B10_lname.ASK
    ENDIF
    Childid
    aux_B10
    BDOB
    B10_enrol
    IF (B10_enrol = ENROLLED) THEN
        CHECK
            (BDOB.DOB_year < (sdatestamp.YEAR - 2)) "@R@BERROR!@B
                                                    @/@/The child's @Byear of birth@B entered as @R@B^BDOB.DOB_year@B@R would make the child @Utoo young@U to be enrolled in school!
                                                    @/@/Please check your entry and try again.@R"
        B10_where
        IF (B10_where = OUTSIDE) THEN
            B10_vill{|GetLocDetl.LOOKUP (TRI).VILLAGENAME}
            IF NOT (B10_vill = DK) THEN
                IF (B10_vill = RESPONSE) THEN
                    IF GetLocDetl.SEARCH (B10_vill) THEN
                        GetLocDetl.READ
                        B10_id:= GetLocDetl.VILLAGEID
                    ENDIF
                    B10_id
                ENDIF
            ENDIF
        ENDIF
    ENDIF
ENDBLOCK
