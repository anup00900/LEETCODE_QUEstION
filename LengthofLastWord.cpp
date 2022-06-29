class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l=s.strip().split(" ")
        print(l)
        return len(l[-1])
        
