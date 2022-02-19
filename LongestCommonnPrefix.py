class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ct=""
        for s in zip(*strs):
            if len(set(s))==1:
                ct=ct+s[0]
            else:
                break
        return ct