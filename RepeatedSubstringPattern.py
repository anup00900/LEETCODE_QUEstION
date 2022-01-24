class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        rep=""
    
        for i in range(len(s)//2):
            rep=rep+s[i]
            if (rep*(len(s)//len(rep))) == s:
                return 1
            
        return 0    
            
            
        