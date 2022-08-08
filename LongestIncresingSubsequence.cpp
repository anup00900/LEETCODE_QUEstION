class Solution {
public:
    int dp[2502][2502];
    int dfs(int i,int n,int p,vector<int>& nums)
    {
        if(i>=n)
        {
            return 0;
        }
        if(dp[i][p+1]!=-1)
        {
            return dp[i][p+1];
        }
        if(p==-1 or nums[i]>nums[p])
        {
            return dp[i][p+1]=max(1+dfs(i+1,n,i,nums),dfs(i+1,n,p,nums));
        }
        else
        {
            return dp[i][p+1]=dfs(i+1,n,p,nums);
        }
        
    }
    int lengthOfLIS(vector<int>& nums) {
        
        
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return dfs(0,n,-1,nums);
        
        
    }
};