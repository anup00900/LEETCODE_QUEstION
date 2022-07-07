class Solution:
    def camelMatch(self, queries: List[str], pattern: str) -> List[bool]:
        ans=[]
        f=0
        for q in queries:
            i=0
            j=0
            while i<len(q):
                if j<len(pattern) and q[i]==pattern[j]:
                    i+=1
                    j+=1
                elif ord('A')<=ord(q[i])<=ord('Z'):
                    f=1
                    break
                else:
                    i+=1
            if f==0 and j==len(pattern):
                ans.append(1)
            else:
                ans.append(0)
            f=0    
        return ans    
        
        