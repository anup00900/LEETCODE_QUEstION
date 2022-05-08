class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(umap[nums[i]]==1 and umap.find(nums[i]+1)==umap.end() and umap.find(nums[i]-1)==umap.end())
            {
                v.push_back(nums[i]);
            }
            
        }
        return v;
        
    }
};