class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& o) {
        
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]=i;
        }
        for(int i=0;i<o.size();i++)
        {
            int idx = umap[o[i][0]];
            umap.erase(o[i][0]);
            umap[o[i][1]]=idx;
        }
        for(auto it:umap)
        {
            nums[it.second]=it.first;
        }
        
        return nums;
    }
};