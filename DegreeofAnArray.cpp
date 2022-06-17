class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        unordered_map<int,int>umap,firsto,lasto;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
            if(umap[nums[i]]==1)
            {
                firsto[nums[i]]=i;
            }
            lasto[nums[i]]=i;
            
        }
        int m=INT_MIN;
        for(auto it:umap)
        {
            m=max(m,it.second);
        }
         int st=INT_MAX;
        for(auto it:umap)
        {
            if(it.second==m)
            {
                cout<<lasto[it.first]-firsto[it.first]+1<<" ";
                st=min(st,(lasto[it.first]-firsto[it.first]+1));
            }  
        }
    
        return st;
        
        
        
        
        
    }
};