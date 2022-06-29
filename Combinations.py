from itertools import combinations
import numpy as np
class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        arr=np.arange(1,n+1)
        l=[]
        for i in combinations(arr,k):
            #print(*i)
            l.append(list(i))
            #print(l)
        
        return l
        