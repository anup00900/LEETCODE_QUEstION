class Solution {
public:
    int ans = 0;
    void dfs(vector<vector<int>>& grid,int i,int j,int n,int m,vector<vector<int>>&vis,int &c)
    {
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==0 or vis[i][j]==1)
        {
            return;
        }
        c++;
        vis[i][j]=1;
        dfs(grid,i+1,j,n,m,vis,c);
        dfs(grid,i-1,j,n,m,vis,c);
        dfs(grid,i,j+1,n,m,vis,c);
        dfs(grid,i,j-1,n,m,vis,c);
        
    }
    int numEnclaves(vector<vector<int>>& grid) {
        
        
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<m;i++)
        {
            if(vis[0][i]==0 and grid[0][i]==1)
            {
                dfs(grid,0,i,n,m,vis,c);
            }
            if(vis[n-1][i]==0 and grid[n-1][i]==1)
            {
                dfs(grid,n-1,i,n,m,vis,c);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i][0]==0 and grid[i][0]==1)
            {
                dfs(grid,i,0,n,m,vis,c);
            }
            if(vis[i][m-1]==0 and grid[i][m-1]==1)
            {
                dfs(grid,i,m-1,n,m,vis,c);
            }
        }
        
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                c=0;
                if(vis[i][j]==0 and grid[i][j]==1)
                {
                    
                    dfs(grid,i,j,n,m,vis,c);
                    ans=ans+c;
                    
                }
            }
        }
        return ans;
        
    }
};