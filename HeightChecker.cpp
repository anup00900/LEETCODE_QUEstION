class Solution {
public:
    int heightChecker(vector<int>& h) {
        
        vector<int>v(h.begin(),h.end());
        sort(v.begin(),v.end());
        int c=0;
        for(int i=0;i<h.size();i++)
        {
            if(h[i] != v[i])
            {
                c++;
            }
        }
        return c;
        
    }
};