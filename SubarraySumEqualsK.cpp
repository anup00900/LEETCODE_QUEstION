class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        int sum=0;
        int ans=0;
        umap[sum]=1;
        
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            
            int t = (sum-k);
            if(umap.find(t)!=umap.end())
            {
                ans=ans+umap[t];
            }
            
                umap[sum]++;
            
            
        }
        return ans;
    }
};