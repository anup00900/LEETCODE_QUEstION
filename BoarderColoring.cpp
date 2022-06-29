class Solution {
public:
void dfs(int i,int j,int c,vector<vector<int>>&vis,vector<vector<int>>& grid,int n,int m,int t)
    {
        
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]!=t )
        {
            return;
        }
        if(vis[i][j]==1)
        {
            return;
        }
        vis[i][j]=1;
        
        //checking if number is prsnt on border or not
        if((i==0 or j==0 or i==n-1 or j==m-1) and grid[i][j] == t)
        {
            
            grid[i][j]=c;
            
        }
        // conditon to check if their is present some differnt color square on the border of the connected component
        else if(((i+1<=n-1 and grid[i+1][j]!=t and vis[i+1][j]==0) or (i-1>=0 and grid[i-1][j]!=t and vis[i-1][j]==0) or (j+1<=m-1 and grid[i][j+1]!=t and vis[i][j+1]==0) or (j-1>=0 and grid[i][j-1]!=t and vis[i][j-1]==0) ) and grid[i][j]==t)
        {
            grid[i][j]=c;
        }
  
        dfs(i+1,j,c,vis,grid,n,m,t);
        dfs(i,j+1,c,vis,grid,n,m,t);
        dfs(i-1,j,c,vis,grid,n,m,t);
        dfs(i,j-1,c,vis,grid,n,m,t);
 
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        dfs(row,col,color,vis,grid,n,m,grid[row][col]);
        
       
        return grid;
        
        
        
    }
};