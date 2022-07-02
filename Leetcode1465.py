class Solution:
    def maxArea(self, h: int, w: int, ho: List[int], ve: List[int]) -> int:
        ho.sort()
        ve.sort()
        mh=max(ho[0],h-ho[-1])
        mv=max(ve[0],w-ve[-1])
        
        for i in range(1,len(ho)):
            mh = max(mh,ho[i]-ho[i-1])
            print(mh)
        for i in range(1,len(ve)):
            mv = max(mv,ve[i]-ve[i-1])  
            print(mv)
        
        return(mh * mv)%1000000007
        