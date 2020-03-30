BLOCK modc1102

FIELDS
    stimestamp, etimestamp : TIMETYPE
    sdatestamp, edatestamp : DATETYPE

    C1102A "IS THE RESPONDENT ABLE AND WILLING TO TAKE THIS TEST?" : TYesNo
    C1102A_no "EXPLAIN" : STRING [244]
    C1102B "WERE THERE ANY DISTURBANCES DURING THE PERFORMANCE OF THIS TEST?" : TYesNo
    C1102B_yes "EXPLAIN" : STRING [244]
AUXFIELDS
    aux_c1102 "@G@BC.11@|@UMATERNAL INTELLIGENCE@U@B@G" : (ENTER), EMPTY
    aux_intro "@GOk, thanks.
              @/@/Now, I'm going to give you a piece of paper that has a list of questions.
              @/Some of the answers are @G@BYES@B@G and some are @G@BNO@B@G. I want you to read them as fast as you can. If the answer to the question is @G@BYES@B@G, mark (@G@B@Ia tick@I@B@G) inside the box. If the answer is @G@BNO@B@G, mark (@G@B@IX@I@B@G) inside the box.
              @/Let's work on an example together. Please read the first question.@G"
              "@GSawa, Ahsante.
              @/@/Sasa nitakupa karatasi ambalo lina orodha ya maswali.
              @/Baadhi ya majibu ni @G@BNDIO@B@G na mengine ni @G@BLA@B@G. Nataka uyasome haraka uwezavyo. Ikiwa jibu la swali ni @G@BNDIO@B@G, weka (@G@B@Ia tick@I@B@G) ndani ya sanduku. Ikiwa jibu ni @G@BLA@B@G, weka (@G@B@IX@I@B@G) ndani ya sanduku.
              @/Wacha tufanye mfano kwa pamoja. Tafadhali soma swali la kwanza.@G"
              : (ENTER), EMPTY
    aux_cont "@GThis exercise will be timed.
             @/@/You will have @B@U4 minutes@U@B to complete as many questions as you can.
             @/We do not expect you to finish all of them, so do not feel upset if you do not complete the exercise.
             @/I will not look at your responses - I will bring them back to the office where they will be scored anonymously.
             @/@/Are you ready to begin?@G"
             "@GHili zoezi litapewa muda.
             @/@/Utakuwa na @B@Udakika 4@U@B kumaliza maswali mengi uwezavyo.
             @/Hatukutarajii kumaliza yote, kwa hivyo usikasirike ikiwa hautamaliza zoezi.
             @/Sitaangalia majibu yako - nitayarudisha ofisini ambapo zitasahihishwa bila kukutambulisha.
             @/@/Je uko tayari kuanza?@G"
             : (ENTER), EMPTY
    aux_instr "@RRESPONDENT WILL READ THE FIRST QUESTION.
              @/@/FOR WHICH THE ANSWER IS @R@B“YES”@B@R SHOW HER THAT THE MARK (@R@B@Ia tick@I@B@R) SHOULD BE PUT FOR @R@B“YES”@B@R QUESTIONS. HAVE RESPONDENT READ THE SECOND QUESTION, WHICH IS A @R@B“NO”@B@R. SHOW HER THAT THE MARK (@R@B@IX@I@B@R) SHOULD BE PUT FOR @R@B“NO”@B@R QUESTIONS. HAVE RESPONDENT READ THE THIRD @R@B“NO”@B@R QUESTION.
              @/ASK HER WHICH MARK IS TO BE INDICATED INSIDE THE BOX (@R@B“NO”@B@R). HAVE RESPONDENTS READ THE FOURTH @R@B“YES”@B@R QUESTION. ASK HER WHICH MARK IS TO BE INDICATED INSIDE THE BOX.
              @/@/@BMAKE SURE RESPONDENT UNDERSTANDS THE EXERCISE BEFORE PROCEEDING@B.@R" : (ENTER), EMPTY
    aux_start "@RHAND THE TEST TO THE RESPONDENT AND BEGIN TIMING.
              @/@/OCCUPY YOURSELF WITH SOMETHING SO SHE DOES NOT FEEL YOU ARE WATCHING HER.
              @/@/WHEN @BFOUR MINUTES@B HAVE ELAPSED, TAKE THE TEST FROM THE RESPONDENT AND PLACE IT IN AN ENVELOPE IMMEDIATELY WITHOUT LOOKING AT HER ANSWERS.@R" : (ENTER), EMPTY
LAYOUT
    BEFORE aux_c1102 NEWPAGE
    AFTER aux_c1102 NEWPAGE
RULES
    {START TIME STAMP AND DATE STAMP}
    stimestamp.KEEP
    IF stimestamp = EMPTY THEN
        stimestamp:= SYSTIME
    ENDIF
    sdatestamp.KEEP
    IF sdatestamp = EMPTY THEN
        sdatestamp:= SYSDATE
    ENDIF
    {BEGIN}
    aux_c1102

    aux_intro
    aux_instr
    aux_cont
    aux_start
    C1102A
    IF (C1102A = YES) THEN
        SIGNAL
            (B.B19_swa <> CANNOT_READ_WRITE)
             "@G@BWARNING!@B
             @/@/The respondent earlier indicated that she @G@BCannot read or write@B@G in @BSwahili@B in the @UHOUSEHOLD CHARACTERISTICS@U section of the survey.
             @/@/Please note this as the respondent has agreed to take the test.@G"
        C1102B
        IF (C1102B = YES) THEN
            C1102B_yes
        ENDIF
    ELSE
        C1102A_no
    ENDIF
    {FINISH}

    {END TIME STAMP AND DATE STAMP}
    etimestamp.KEEP
    IF ((etimestamp = EMPTY) AND (C1102B_yes = RESPONSE)) OR ((etimestamp = EMPTY) AND (C1102A_no = RESPONSE)) THEN
        etimestamp:= SYSTIME
    ENDIF
    edatestamp.KEEP
    IF ((etimestamp <> EMPTY) AND (edatestamp = EMPTY)) THEN
        edatestamp:= SYSDATE
    ENDIF
ENDBLOCK
