class Solution:
    def brokenCalc(self, s: int, t: int) -> int:
        if s>=t:
            return s-t
        if t%2==0:
            return 1+self.brokenCalc(s,t//2)
        
        return 1+self.brokenCalc(s,t+1)
    