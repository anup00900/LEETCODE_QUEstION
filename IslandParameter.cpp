class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>& grid,int n,int m,int &su)
    {
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==0)
        {
            su+=1;
            return;
        }
        if(grid[i][j]==1 and vis[i][j]==1)
        {
            return;
        }
        vis[i][j]=1;
        dfs(i,j+1,vis,grid,n,m,su);
        dfs(i,j-1,vis,grid,n,m,su);
        dfs(i+1,j,vis,grid,n,m,su);
        dfs(i-1,j,vis,grid,n,m,su);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int su=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 and grid[i][j]==1)
                {
                    dfs(i,j,vis,grid,n,m,su);
                }
            }
        }
        
        return su;
        
        
        
    }
};