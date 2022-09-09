class Solution {
public:
    static bool comp(vector<int>&v1,vector<int>&v2)
    {
        if(v1[0]==v2[0])
        {
            return v1[1]>v2[1];
        }
        return v1[0]<v2[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        
        
        int m = INT_MIN;
        int c=0;
        sort(p.begin(),p.end(),comp);
        
        for(int i=p.size()-1;i>=0;i--)
        {
            if(i==p.size()-1)
            {
                m=max(m,p[i][1]);
            }
            else
            {
                if(p[i][1]<m)
                {
                    c++;
                }
                m=max(m,p[i][1]);
                
            }
        }
        return c;
        
    
    }
};