class Solution {
public:
    int ma=0;
    void dfs(int i,int j,vector<vector<int>>& grid,int n,int m,int &s)
    {
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==0)
        {
            return;
        }
        int t=grid[i][j];
        s=s+t;
        ma=max(ma,s);
    
        grid[i][j]=0;
        
        dfs(i+1,j,grid,n,m,s);
        dfs(i,j+1,grid,n,m,s);
        dfs(i-1,j,grid,n,m,s);
        dfs(i,j-1,grid,n,m,s);
        
        grid[i][j]=t;
        s-=t;
        
        
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                {
                    int s=0;
                    dfs(i,j,grid,n,m,s);
                }
            }
        }
        return ma;
    }
};