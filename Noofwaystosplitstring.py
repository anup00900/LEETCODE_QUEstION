class Solution:
    def numWays(self, s: str) -> int:
        mod = 10**9+7
        c=0
        n=len(s)
        for i in range(len(s)):
            if s[i] == '1':
                c+=1
        if c == 0:
            return ((n-1)*(n-2)//2)%mod        
        if c%3 !=0:
            return 0
        
        oneth = c//3
        twoth = 2*c//3
        coneth=0
        ctwoth=0
        c=0
        for i in s:
            if i == '1':
                c+=1
            if c == oneth:
                coneth+=1
            if c == twoth:
                ctwoth+=1    
        return (coneth * ctwoth)%mod        
        
            