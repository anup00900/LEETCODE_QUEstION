class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>& grid,int n,int m,int &f)
    {
        if(i<0 or j<0 or i>(n+1) or j>(m+1) or grid[i][j]==1)
        {
            return;
        }
        if(vis[i][j]==1)
        {
            return;
        }
        if(i==0 or j==0 or i==n+1 or j==m+1 )
        {
            f=0;
            return;
            
        }
        
        vis[i][j]=1;
        dfs(i+1,j,vis,grid,n,m,f);
        dfs(i-1,j,vis,grid,n,m,f);
        dfs(i,j+1,vis,grid,n,m,f);
        dfs(i,j-1,vis,grid,n,m,f);
        
        
    
      
    }
    
    
    
    
    
    int closedIsland(vector<vector<int>>& grid) {
        
        
        int n=grid.size()-2;
        int m=grid[0].size()-2;
        
        vector<vector<int>>vis(n+2,vector<int>(m+2,0));
        int c=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(vis[i][j]==0 and grid[i][j]==0)
                {
                    int f=1;
                    dfs(i,j,vis,grid,n,m,f);
                    if(f==1)
                    {
                        c++;
                    }
                }
            }
        }
        
        return c;
    }
};