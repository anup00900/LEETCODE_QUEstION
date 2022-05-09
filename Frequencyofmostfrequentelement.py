class Solution:
    def maxFrequency(self, nums: List[int], k: int) -> int:
        l,r=0,0
        total,m=0,0
        
        nums.sort()
        
        while r<len(nums):
            total+=nums[r]
            while nums[r]*(r-l+1)>total+k:
                total-=nums[l]
                l+=1
            m=max(m,r-l+1)
            r+=1
        
        return m
        
        