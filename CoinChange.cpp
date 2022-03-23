class Solution {
public:
    int co(int W, vector<int>& wt,vector<vector<int>>&t,int n)
    {
        if(t[n][W]!=-1)
        {
            return t[n][W];
        }
        if(wt[n-1]<=W)
        {
            return(t[n][W]=min(co(W-wt[n-1],wt,t,n)+1,co(W,wt,t,n-1)));
        }
        else
        {
            return(t[n][W]=co(W,wt,t,n-1));
        }
        

        
    }
    int coinChange(vector<int>& wt, int W) {
        
         int n=wt.size();
        vector<vector<int>>t(n+1,vector<int>(W+1,-1));
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                 if(j==0)
                {
                    t[i][j]=0;
                }
                if(i==0)
                {
                    t[i][j]=INT_MAX-1;
                }
               
                
            }
           
        }
        for(int j=1;j<=W;j++)
            {
                if(j%wt[0]==0)
                {
                    t[1][j]=j/wt[0];
                }
                else
                {
                    t[1][j]=INT_MAX-1;
                }
                
            }
        if(co(W,wt,t,n)==2147483646)
        {
            return -1;
        }
        return co(W,wt,t,n);
        
        
    }
};