class Solution:
    def reversePrefix(self, s: str, ch: str) -> str:
        
        j=0
        k=0
        for i in range(0,len(s)):
            if s[i]==ch:
                k=i
                break
                
        if k == 0:
            return s
        ft=""
        ty=k
        
        while k>=0:
            ft=ft+s[k]
            k=k-1
            
            
        for i in range(ty+1,len(s)):
            ft=ft+s[i]
            
        return ft