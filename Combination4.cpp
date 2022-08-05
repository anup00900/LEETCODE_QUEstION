class Solution {
public:
    
    int dp[1001];
    int comb(vector<int>& nums, int i,int n,int t)
    {
        if(t==0)
        {
            return 1;
        }
       
        if(t<0)
        {
            return 0;
        }
        
        if(i>=n)
        {
            return 0;
        }
        if(dp[t]!=-1)
        {
            return dp[t];
        }
        int c=0;
        for(int j=0;j<nums.size();j++)
        {
           
            c+=comb(nums,j,n,t-nums[j]);
          
        }
       
         return dp[t]=c; 
            
            
       
    }
    int combinationSum4(vector<int>& nums, int t) {
        
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return comb(nums,0,n,t);
        //return c;
        
        
        
        
        
    }
};