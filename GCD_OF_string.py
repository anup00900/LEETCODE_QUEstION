from math import gcd
class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        n=len(str1)
        m=len(str2)
        #there is no gcd if concatenation of strings in both ways are not equal
		#they should be equal because they are multiples of gcd
        if str1+str2 != str2+str1:
            return ""
        i = gcd(n,m)
        if str1[:i]==str2[:i]:
            return str1[:i]
        return ""
        