class Solution:
    def defangIPaddr(self, address: str) -> str:
        
        s=""
        for i in address:
            if i != '.':
                s=s+i
            else:
                s=s+'[.]'
        return s        