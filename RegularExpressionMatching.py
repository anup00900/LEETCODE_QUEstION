import re
class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        if re.fullmatch(p,s)==None:
            print(re.fullmatch(s,p))
            return 0
        else:
            print(re.fullmatch(s,p))
            return 1