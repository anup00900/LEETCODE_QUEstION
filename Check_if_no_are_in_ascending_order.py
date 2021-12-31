class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        l=s.split()
        m=[]
        for i in l:
            if i.isdigit():
                m.append(int(i))
        for j in range(1,len(m)):
            if m[j-1] >= m[j]:
                return 0
                
        return 1    
            
                