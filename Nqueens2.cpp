class Solution {
public:
        vector<vector<string>>ans;
    
    bool safe(int r,int c,vector<string>&board,int n)
    {
        int dr=r;
        int dc=c;
        while(r>=0 and c>=0)
        {
            if(board[r][c]=='Q')
            {
                return 0;
            }
            r--;
            c--;
        }
        r=dr;
        c=dc;
        while(c>=0)
        {
            if(board[r][c]=='Q')
            {
                return 0;
            }
            c--;
        }
        r=dr;
        c=dc;
        while(r<n and c>=0)
        {
            if(board[r][c]=='Q')
            {
                return 0;
            }
            r++;
            c--;
        }
        return 1;
    }
    
    
    
    void nq(int col,vector<string>&board,int n)
    {
        if(col>=n)
        {
            ans.push_back(board);
            return;
        }
        for(int r=0;r<n;r++)
        {
            if(safe(r,col,board,n))
            {
                board[r][col]='Q';
                nq(col+1,board,n);
                board[r][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        
        vector<string>board;
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board.push_back(s);
        }
        nq(0,board,n);
        
        
        return ans;
        
   
        
    }
    int totalNQueens(int n) {
        
        vector<vector<string>> a = solveNQueens(n);
        return a.size();
    }
};
