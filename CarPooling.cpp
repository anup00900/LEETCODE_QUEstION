class Solution {
public:
    bool carPooling(vector<vector<int>>& t, int c) {
        
        
        vector<int>v(1001,0);
        int s=0;
        
        for(int i=0;i<t.size();i++)
        {
            v[t[i][1]]=v[t[i][1]]+t[i][0];
            v[t[i][2]]=v[t[i][2]]+(-t[i][0]);
            
        }
        for(int i=0;i<1001;i++)
        {
            s=s+v[i];
            if(s>c)
            {
                return 0;
            }
        }
        
        return 1;
        
        
    }
};