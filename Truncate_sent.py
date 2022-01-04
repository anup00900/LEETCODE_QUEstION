class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        
        l=s.split()
        d=""
        u=0
        for i in range(0,k):
            d=d+l[i]
            if i == (k-1):
                break
            d=d+" "
         
        return d
           
        