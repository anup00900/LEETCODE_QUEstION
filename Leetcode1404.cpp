class Solution:
    def no(self,n:int)->int:
        if n==1:
            return 0
        if n%2==0:
            return 1+self.no(n//2)
        else:
            return 1+self.no(n+1)
        
    def numSteps(self, s: str) -> int:
        n=int(s,2)
        return self.no(n)
        
                
        
        