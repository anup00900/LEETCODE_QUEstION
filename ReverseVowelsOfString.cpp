class Solution:
    def reverseVowels(self, s: str) -> str:
        i=0
        j=len(s)-1
        st="aeiouAEIOU"
        rt=""
        while i<=j:
            if s[i] in st:
                rt=rt+s[i]
            i=i+1 
        u=len(rt)-1   
        ans=""
        for k in s:
            if k in st:
                ans=ans+rt[u]
                u=u-1
            else:
                ans=ans+k
        return ans        
                
        
        
            
            
        