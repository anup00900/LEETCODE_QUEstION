class Solution:
    def sortSentence(self, s: str) -> str:
        l=s.split()
        d = {}
        st=""
        for i in l:
            d[i[-1]]=i[:-1]
        
        #d=sorted(d)
        #print(d)
        return " ".join(d[j] for j in sorted(d))
            
            
            
            
        
                
                
            
            
            
            
            
        