class Solution:
    def checkString(self, s: str) -> bool:
        
        for i in range(0,len(s)):
            if s[i:].startswith('ba'):
                return 0
            
        return 1;    
        