def isCircularSentence(sentence: str):
    sentence = sentence.split()
    check = False
    if len(sentence) == 1:
        if sentence[-1][-1] == sentence[0][0]:
            check = True
    else:
        for i in range(1,len(sentence)):
            if sentence[-1][-1] == sentence[0][0]:
                if sentence[i-1][-1] == sentence[i][0]:
                    check = True
                else:
                    check = False
                    break
            else:
                check = False
                break
    return check
        
    #return sentence[1][0]

print(isCircularSentence("ab a a"))