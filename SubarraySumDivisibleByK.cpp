class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int,int>umap;
        int sum=0,ans=0;
        umap[sum]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            int r = sum%k;
            if(r<0)
            {
                r=r+k;
            }
            if(umap.find(r)!=umap.end())
            {
                ans=ans+umap[r];
            }
            umap[r]++;
            
        }
        
        return ans;
        
        
    }
};