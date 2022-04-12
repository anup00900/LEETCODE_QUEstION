class Solution {
public:
    
    int getliv(vector<vector<int>>v,int n,int m,int i,int j)
    {
        int l=0;
        if(i>0)
        {
            //uppercell
            if(v[i-1][j]==1)
            {
                l++;
            }
        }
        if(j>0)
        {
            //leftcell
            if(v[i][j-1]==1)
            {
                l++;
            }
        }
        if(i<n-1)
        {
            //lowercell
            if(v[i+1][j]==1)
            {
                l++;
            }
            
        }
        if(j<m-1)
        {
            //rightcell
            if(v[i][j+1]==1)
            {
                l++;
            }
        }
        if(i>0 and j>0)
        {
            //topleft
            if(v[i-1][j-1]==1)
            {
                l++;
            }
            
        }
        if(i<n-1 and j>0)
        {
            //bottomleft
            if(v[i+1][j-1]==1)
            {
                l++;
            }
            
        }
        if(i>0 and j<m-1)
        {
            //topright
            if(v[i-1][j+1]==1)
            {
                l++;
            }
            
        }
        if(i<n-1 and j<m-1)
        {
            //bottomright
            if(v[i+1][j+1]==1)
            {
                l++;
            }
            
        }
        
        
        return l;
        
        
    }
    void gameOfLife(vector<vector<int>>& board) {
        
        
            vector<vector<int>>v=board;
        
           int n=v.size();
           int m = v[0].size();
           for(int i=0;i<v.size();i++)
           {
               for(int j=0;j<v[0].size();j++)
               {
                   int liv = getliv(v,n,m,i,j);
                   if(board[i][j]==0)
                   {
                       if(liv==3)
                       {
                           board[i][j]=1;
                       }
                   }
                   else
                   {
                       if(liv <2 or liv >3)
                       {
                           board[i][j]=0;
                       }
                   }
               }
           }
         
        
        
        
        
        
    }
};