def solution(n, bans):
    #1~26 a ~ z
    
    def changeNum(text):
        textlist=[]
        answer=0
        for i in text:
            num=ord(i)-ord('a')+1
            textlist.append(num)
        textlist.reverse()
        
        t=0
        for i in textlist:
            answer+=i*(26**t)
            t+=1
        return answer
    
    def changeStr(Num):
        numlist=[]
        while Num>26:
            r=Num%26
            Num=Num//26
            if r==0:
                r=26
                Num=Num-1
            numlist.append(r)
        numlist.append(Num)
        numlist.reverse()
        
        numlist=map(lambda x : chr(x+ord('a')-1),numlist)
        return numlist
    numlist=[]

    for i in bans:
        numlist.append(changeNum(i))
    numlist.sort()
    
    for i in numlist:
        if n<i:
            break
        n+=1    
    
    answer = ''.join(changeStr(n))
    return answer