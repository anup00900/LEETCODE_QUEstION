class Solution {
public:
    int f=1,ans=0;
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,vector<vector<int>>&vis,int i,int j,int n,int m)
    {
        if(i<0 or j<0 or i>=n or j>=m or grid2[i][j]==0 or vis[i][j]==1)
        {
            return;
        }
        if(grid1[i][j]==0 and grid2[i][j]==1)
        {
            f=0;
            return;
        }
        vis[i][j]=1;
        dfs(grid1,grid2,vis,i+1,j,n,m);
        dfs(grid1,grid2,vis,i-1,j,n,m);
        dfs(grid1,grid2,vis,i,j+1,n,m);
        dfs(grid1,grid2,vis,i,j-1,n,m);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int n=grid1.size();
        int m=grid1[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                f=1;
                if(vis[i][j]==0 and grid2[i][j]==1 and grid1[i][j]==1)
                {
                    dfs(grid1,grid2,vis,i,j,n,m);
                    if(f==1)
                    {
                        ans=ans+1;
                    }
                    
                }
            }
        }
        return ans;
        
    }
};