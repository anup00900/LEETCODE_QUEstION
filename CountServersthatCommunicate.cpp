class Solution {
public:
   
    int bfs(int x,int y,vector<vector<int>>& grid, vector<vector<int>>&vis,int n,int m)
    {
        queue<pair<int,int>>q;
        q.push({x,y});
        grid[x][y]=0;
        int l=0;
        while(!q.empty())
        {
           
            l++;
           
                 int x1 = q.front().first;
                 int y1=q.front().second;
                 q.pop();
            for(int i=0;i<m;i++)
            {
                if(grid[x1][i]==1)
                {
                    grid[x1][i]=0;
                    q.push({x1,i});
                }
            }
            for(int i=0;i<n;i++)
            {
                if(grid[i][y1]==1)
                {
                    grid[i][y1]=0;
                    q.push({i,y1});
                }
            }
          
           
        }
        return l;
        
    }
    int countServers(vector<vector<int>>& grid) {
        
        
        int ans=0;
        int c;
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    
                    int s = bfs(i,j,grid,vis,n,m);
                    if(s>1)
                    {
                        ans+=s;
                    }
                }
            }
        }
        
        return ans;
    }
};