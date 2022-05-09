import itertools
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        d={}
        d['2']=['a','b','c']
        d['3']=['d','e','f']
        d['4']=['g','h','i']
        d['5']=['j','k','l']
        d['6']=['m','n','o']
        d['7']=['p','q','r','s']
        d['8']=['t','u','v']
        d['9']=['w','x','y','z']
        l=[]
        l1=[]
        l2=[]
        l3=[]
        l4=[]
        n=len(digits)
        if n==0:
            return l
        if n==1:
            for i in range(0,len(d[digits[0]])):
                l.append(d[digits[0]][i])
            return l
        if n==2:
            for i in range(0,len(d[digits[0]])):
                l1.append(d[digits[0]][i])
            for i in range(0,len(d[digits[1]])):
                l2.append(d[digits[1]][i])  
            for v1, v2 in itertools.product(l1, l2):
                l.append(v1+v2)    
        if n==3:  
            for i in range(0,len(d[digits[0]])):
                l1.append(d[digits[0]][i])
            for i in range(0,len(d[digits[1]])):
                l2.append(d[digits[1]][i])
            for i in range(0,len(d[digits[2]])):
                l3.append(d[digits[2]][i])
            for v1, v2, v3 in itertools.product(l1, l2, l3):
                l.append((v1+v2+v3))    
        if n==4:  
            for i in range(0,len(d[digits[0]])):
                l1.append(d[digits[0]][i])
            for i in range(0,len(d[digits[1]])):
                l2.append(d[digits[1]][i])
            for i in range(0,len(d[digits[2]])):
                l3.append(d[digits[2]][i]) 
            for i in range(0,len(d[digits[3]])):
                l4.append(d[digits[3]][i])
            for v1, v2, v3, v4 in itertools.product(l1, l2, l3, l4):
                l.append((v1+v2+v3+v4))    
        
        return l     
        
        