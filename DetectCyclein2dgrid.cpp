class Solution {
public:
    int f=0;
    void dfs(int x,int y,int px,int py, vector<vector<int>>&vis,vector<vector<char>>&grid,char &c,int n,int m)
    {
        if(f==1)
        {
            return;
        }
        if(x<0 or y<0 or x>=grid.size() or y>=grid[0].size()  or grid[x][y]!=c)
        {
            return;
        }
        if(vis[x][y]==1)
        {
            f=1;
            return;
        }
        
        vis[x][y]=1;
       
        if(y<m and !(x==px and y+1==py))
        {
             dfs(x,y+1,x,y,vis,grid,c,n,m);
        }
        if(y>0 and !(x==px and y-1==py))
        {
             dfs(x,y-1,x,y,vis,grid,c,n,m);
        }
        if(x>0 and !(x-1==px and y==py))
        {
             dfs(x-1,y,x,y,vis,grid,c,n,m);
        }
        if(x<n and !(x+1==px and y==py))
        {
             dfs(x+1,y,x,y,vis,grid,c,n,m);
        }
      
        
    }
    bool containsCycle(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0)
                {
                    dfs(i,j,-1,-1,vis,grid,grid[i][j],n,m);
                    if(f==1)
                    {
                        return 1;
                    }
                }
            }
        }
        return 0;
        
        
    }
};