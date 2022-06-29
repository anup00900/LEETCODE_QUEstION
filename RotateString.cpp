class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        
        tr = s
        rot = s[1:]+s[:1]
        print(rot)
        while rot != tr:
            if rot == goal:
                return 1
            rot = rot[1:]+rot[:1]
        return 0
