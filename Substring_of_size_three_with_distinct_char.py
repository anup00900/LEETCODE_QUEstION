class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        
        k=0
        l=0
        st=""
        c=0
        for i in range(0,len(s)-2):
            if len(set(s[i:i+3]))==3:
                c=c+1
                
        return c        