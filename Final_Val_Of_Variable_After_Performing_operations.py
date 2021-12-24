class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        j=0
        for i in operations:
            if i.startswith('--X'):
                j=j-1
            if i.startswith('X--'):
                j=j-1
            if i.startswith('++X'):
                j=j+1
            if i.startswith('X++'):
                j=j+1  
        return j       
                
                
        