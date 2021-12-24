class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        di = {}
        st=""
        for i in range(0,len(indices)):
            di[indices[i]]=s[i]
        
        for i in range(0,len(indices)):
            st=st+di[i]
        return st    
            