class Solution:
    def minMoves(self, nums: List[int]) -> int:
        m=min(nums)
        c=0
        for i in nums:
            c=c+i-m
        return c