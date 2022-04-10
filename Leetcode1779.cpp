class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& p) {
        
        map<int,int>umap;
        for(int i=0;i<p.size();i++)
        {
            if(x == p[i][0] or y == p[i][1])
            {
                int d = abs(x-p[i][0]) + abs(y-p[i][1]);
                
                umap[i]=d;
            }
        }
        int m=INT_MAX;
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            m=min(m,it->second);
        }
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            if(m==it->second)
            {
                return it->first;
            }
        }
        return -1;
        
    }
};