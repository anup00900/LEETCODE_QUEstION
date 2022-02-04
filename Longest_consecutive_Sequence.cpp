class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int>umap;
        set<int>s(nums.begin(),nums.end());
        for(auto i: s)
        {
            umap[i]=1;
        }
        for(auto i:s)
        {
            if(umap.find(i-1)!=umap.end())
            {
                umap[i]=0;
            }
            
        }
        int m=0;
        for(auto i:s)
        {
            
           if(umap[i]==1)
           {
               int j=i;
               int t=1;
               while(umap.find(j+t)!=umap.end())
               {
                   t=t+1;
               }
               m=max(m,t);
           }
        }
        return m;
        
        
    }
};