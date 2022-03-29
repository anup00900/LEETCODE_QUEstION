class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n=len(nums)
        l=[]
        s=set()
        for i in nums:
            if i not in s:
                s.add(i)
            else:
                l.append(i)
        for i in range(1,n+1):
            if i not in s:
                l.append(i)
                break
        return l;        
                
        
        
        
        
        