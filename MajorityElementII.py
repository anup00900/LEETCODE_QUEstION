class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        
        m1,m2=-1,-1 #we can have two majority at max
        c1,c2=0,0
        
        i =0
        while i<len(nums):
            if nums[i]==m1:
                c1=c1+1
            elif nums[i]==m2:
                c2=c2+1
            elif c1==0:
                m1=nums[i]
                c1=c1+1
            elif c2==0:
                m2=nums[i]
                c2=c2+1
            else:
                c1=c1-1
                c2=c2-1
            i=i+1    
        c1=0
        l=[]
        c2=0
        for i in nums:
            if i==m1:
                c1=c1+1
            elif i==m2:
                c2=c2+1
        if c1 >(len(nums)//3):
            l.append(m1)
        if c2 >(len(nums)//3):
            l.append(m2)
        return l    