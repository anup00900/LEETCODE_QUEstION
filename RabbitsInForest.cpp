class Solution {
public:
    int numRabbits(vector<int>& ans) {
        
        
        int n=ans.size();
        unordered_map<int,int>umap;
        
        
        for(int i=0;i<ans.size();i++)
        {
            umap[ans[i]]++;
        }
        int an=0;
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            int gs = it->first+1;
            int can = it->second;
            
            an += ceil(can*1.0/gs*1.0)*gs;
        }
        return an;
        
        
        
    }
};