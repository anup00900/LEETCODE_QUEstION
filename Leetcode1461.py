class Solution:
    def func(self,st:str,k:int,s:str)->int:
        if len(st)==k:
            for i in range(len(s)):
                if s[i:].startswith(st):
                    return 1
            return 0
        return self.func(st+"0",k,s) and  self.func(st+"1",k,s)
       
        
    def hasAllCodes(self, s: str, k: int) -> bool:
        st = set()
        for i in range(len(s)-k+1):
            st.add(s[i:i+k])
        return len(st)==2**k    
            
        #return self.func("",k,s)
        