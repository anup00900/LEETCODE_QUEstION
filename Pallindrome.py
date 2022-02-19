class Solution:
    def isPalindrome(self, x: int) -> bool:
        s=str(x)
        i=0
        j=len(s)-1
        while i<j:
            if s[i]!=s[j]:
                return 0
            i=i+1
            j=j-1
        return 1