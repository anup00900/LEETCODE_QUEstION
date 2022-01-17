class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if len(haystack)==0 and len(needle)==0:
            return 0
        for i in range(0,len(haystack)):
            if haystack[i:].startswith(needle):
                return i
        return -1
        
        