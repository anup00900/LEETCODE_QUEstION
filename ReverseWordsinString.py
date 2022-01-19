class Solution:
    def reverseWords(self, s: str) -> str:
        l=s.split()
        d=l[::-1]
        return(" ".join(d))