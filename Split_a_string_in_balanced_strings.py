class Solution:
    def balancedStringSplit(self, s: str) -> int:
        w,z,c=0,0,0
        
        for i in s:
            if i == "R":
                w=w+1
            elif i == "L":
                z=z+1
            
            if w == z:
                c=c+1
        return c       
                
        
        
        