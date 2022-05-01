class Solution:
    def minOperations(self, logs: List[str]) -> int:
        c=0
        for i in range(0,len(logs)):
            if logs[i].startswith("../"):
                if c>0:
                    c-=1
            elif logs[i].startswith("./"):
                continue
            else:
                c+=1     
                
        return c
            
        