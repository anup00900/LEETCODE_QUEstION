class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        int n=tops.size();
        vector<int>valid(7,0);
        
        for(int i=0;i<n;i++)
        {
            valid[tops[i]]++;
            valid[bottoms[i]]++;
        }
        
        int t=0;
        int f=0;
        for(int i=1;i<=6;i++)
        {
            if(valid[i]>=n)
            {
                f=1;
                t=i;
                break;
                
            }
        }
        if(f==0)
        {
            return -1;
        }
        int m1=0;
        int m2=0;
        for(int i=0;i<n;i++)
        {
            if(tops[i]!=t and bottoms[i]!=t)
            {
                return -1;
            }
            else if(tops[i]!=t)
            {
                m1++;
            }
            else if(bottoms[i]!=t)
            {
                m2++;
            }
        }
        return(min(m1,m2));
        
        
        
    }
};