class Solution {
public:
    bool vali(int x,int y,vector<vector<int>>& grid)
    {
         int n=grid.size();
        int m=grid[0].size();
        if(x<0 or y<0 or x>=n or y>=m or grid[x][y]!=1)
        {
            return 0;
        }
        return 1;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        if(q.empty())
        {
            for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                   return -1;
                }
            }
        }
            return 0;
        }
        int l=-1;
        while(!q.empty())
        {
            int qs=q.size();
            l++;
            while(qs--)
            {
                
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(vali(x,y+1,grid))
                {
                    grid[x][y+1]=2;
                    q.push({x,y+1});
                }
                if(vali(x,y-1,grid))
                {
                    grid[x][y-1]=2;
                    q.push({x,y-1});
                }
                if(vali(x+1,y,grid))
                {
                    grid[x+1][y]=2;
                    q.push({x+1,y});
                }
                if(vali(x-1,y,grid))
                {
                    grid[x-1][y]=2;
                    q.push({x-1,y});
                }
                
            }
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                   return -1;
                }
            }
        }
        return l;
        
        
        
    }
};