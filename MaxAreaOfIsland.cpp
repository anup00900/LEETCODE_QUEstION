class Solution {
public:
   
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>& g,int row,int col,int &su)
    {
        
        if(i<0 or j<0 or i>row or j>col or g[i][j]==0)
        {
            return;
        }
        if(vis[i][j]==1)
        {
            return;
        }
        vis[i][j]=1;
        
        su+=1;
         dfs(i,j-1,vis,g,row,col,su);
         dfs(i,j+1,vis,g,row,col,su);
         dfs(i-1,j,vis,g,row,col,su);
         dfs(i+1,j,vis,g,row,col,su);
    
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        int c=0,su=0;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0 and grid[i][j]==1)
                {
                    su=0;
                    dfs(i,j,vis,grid,m-1,n-1,su);
                    c=max(su,c);
                }
                
            }
        }
        
        return c;
    }
};