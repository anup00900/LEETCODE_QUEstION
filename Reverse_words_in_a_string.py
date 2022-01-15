class Solution:
    def reverseWords(self, s: str) -> str:
        l = s.split();
        df = ""
        for i in l:
            j=0
            k=len(i)-1
            while k>=0:
                df=df+i[k]
                k=k-1
            df=df+" "
        
        gh=df[:-1]
        return gh
            
            
            