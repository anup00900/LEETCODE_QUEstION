class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
       
        int n1=grid.size();
        int m1=grid[0].size();
        //case where we got blocked and no other path possible
        if(grid[0][0]==1 || grid[n1-1][m1-1]==1)
        {
            return -1;
        }
       
        int lev=0;
        queue<pair<int,int>>q;
        q.push({0,0});
        while(!q.empty())
        {
            
            int n=q.size();
            while(n-->0)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                
                if(x==n1-1 and y==m1-1)
                {
                    return(lev+1);
                }
                if(x < 0 or y < 0 or x>(n1-1) or y>(n1-1) or grid[x][y]>=1)
                {
                    continue;
                }
                grid[x][y]=2;
                
                q.push({x-1,y});
                q.push({x-1,y+1});
                q.push({x,y+1});
                q.push({x+1,y+1});
                q.push({x+1,y});
                q.push({x+1,y-1});
                q.push({x,y-1});
                q.push({x-1,y-1});
            }                
                
               
             
          
            lev=lev+1;
            
        
        }
        return -1;
     
    }
    
};