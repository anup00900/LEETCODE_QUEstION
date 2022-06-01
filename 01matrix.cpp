class Solution {
public:
    bool vali(int x,int y,vector<vector<int>>& mat)
    {
        if(x<0 or y<0 or x>=mat.size() or y>=mat[0].size() or mat[x][y]!=-1)
        {
            return 0;
        }
        return 1;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        queue<pair<int,int>>q;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                }
                else
                {
                    mat[i][j]=-1;
                }
            }
        }
        int l=0;
        while(!q.empty())
        {
            int qsize=q.size();
            l++;
            while(qsize--)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                
                if(vali(x,y+1,mat))
                {
                    mat[x][y+1]=l;
                    q.push({x,y+1});
                }
                if(vali(x,y-1,mat))
                {
                    mat[x][y-1]=l;
                    q.push({x,y-1});
                }
                if(vali(x+1,y,mat))
                {
                    mat[x+1][y]=l;
                    q.push({x+1,y});
                }
                if(vali(x-1,y,mat))
                {
                    mat[x-1][y]=l;
                    q.push({x-1,y});
                }
            }
            
        }
        
        return mat;
        
    }
};