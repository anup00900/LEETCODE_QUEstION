class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>umap;
        vector<int>v;
        
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            int r = target - nums[i];
            
            if(umap.find(r)!=umap.end() && umap.find(r)->second!=i)
            {
                v.push_back(i);
                v.push_back(umap.find(r)->second);
                break;
            }
            
            
            
        }
        return(v);
        
        
        
        
        
        
        
        
        
        
        
    }
};