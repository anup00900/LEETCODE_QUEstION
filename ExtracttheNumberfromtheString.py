import re
class Solution:
    def ExtractNumber(self,S):
        #code here
        m=-1
        l = re.findall('\d+',S)
        for i in l:
            if '9' not in i:
                m= max(m,int(i))
        return m     