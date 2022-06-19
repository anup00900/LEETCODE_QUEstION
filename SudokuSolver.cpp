class Solution {
public:
    bool safe(int r,int c,vector<vector<char>>& board,char k)
    {
        int dr=r;
        int dc=c;
        for(int i=0;i<board.size();i++)
        {
            if(board[r][i]==k)
            {
                return 0;
            }
        }
        for(int i=0;i<board.size();i++)
        {
            if(board[i][c]==k)
            {
                return 0;
            }
        }
        int sr = dr - dr%3;
        int sc = dc - dc%3;
        for(int i=0;i<3;i++)
        {
           for(int j=0;j<3;j++)
           {
               if(board[sr+i][sc+j]==k)
               {
                   return 0;
               }
           }
        }
        return 1;
    }
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board.size();j++)
            {
                if(board[i][j]=='.')
                {
                    for(char k='1';k<='9';k++)
                    {
                        if(safe(i,j,board,k))
                        {
                            board[i][j]=k;
                            if(solve(board))
                            {
                                return 1;
                            }
                            else
                            {
                                board[i][j]='.';
                            }
                        }
                      
                    }
                    return 0;
                    
                }
            }
        }
        return 1;
        
        
    }
    void solveSudoku(vector<vector<char>>& board) {
        
        solve(board);
        
        
    }
};