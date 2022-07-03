class Solution:
    def replaceWords(self, d: List[str], s: str) -> str:
        st =set()
        for i in d:
            st.add(i)
        ne = ""    
        l = s.split(" ")
        ans=""
        for i in l:
            k=""
            for j in range(1,len(i)):
                if i[:j] in st:
                    k=i[:j]
                    break
            if k == "":
                ans=ans+i
            else:
                ans=ans+k
            ans = ans +" "
        return ans[:-1]
              
            
            
                
            
                
        