class Solution:
    def compareVersion(self, v1: str, v2: str) -> int:
        l1=v1.split('.')
        l2=v2.split('.')
        m=len(l1)
        n=len(l2)
        l=0
        if m>n:
            l=m
        else:
            l=n
        i=0
        j=0
        k=0
        while k<l:
            t1,t2=0,0
            if i<m:
                t1=int(l1[i])
            if j<n:
                t2=int(l2[j])
            if t1 > t2:
                return 1
            elif t1<t2:
                return -1
            i=i+1
            j=j+1
            k=k+1
        return 0    
        