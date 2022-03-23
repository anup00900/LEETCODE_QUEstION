class Solution {
public:
    int change(int W, vector<int>& wt) {
        
        int n=wt.size();
        vector<vector<int>>t(n+1,vector<int>(W+1));
        
            for(int j=0;j<=W;j++)
            {
                t[0][j]=0;
            }
            for(int j=0;j<=n;j++)
            {
                t[j][0]=1;
            }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=W;j++)
            {
                if(wt[i-1]<=j)
                {
                    t[i][j]=t[i][j-wt[i-1]]+t[i-1][j];
                }
                else
                {
                     t[i][j]=t[i-1][j];
                }
                
            }
           
        }
        return t[n][W];
        
        
        
    }
};