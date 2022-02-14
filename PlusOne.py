class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        su=0
        for i in range(0,len(digits)):
            su=su*10+digits[i]
            
        su=su+1    
        
        l=[]
        while su>0:
            l.append(su%10)
            su=su//10
            
        l1=l[::-1]    
        
        return l1
            
        