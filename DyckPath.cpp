class Solution {
  public:
    long long dyckPaths(int N) {
        //catalan number is number of Dyck paths
        int n=N;
        int d=0;
        long long int dp[31]={0};
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                dp[i]=dp[i]+dp[j]*dp[i-j-1];
            }
        }
        return dp[n];
    }
};