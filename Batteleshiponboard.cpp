class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>& board,int n,int m)
    {
        if(i<0 or j<0 or i>=n or j>=m or board[i][j]=='.')
        {
            return;
        }
        if(vis[i][j] == 1)
        {
            return;
        }
        vis[i][j]=1;
        dfs(i+1,j,vis,board,n,m);
        dfs(i-1,j,vis,board,n,m);
        dfs(i,j+1,vis,board,n,m);
        dfs(i,j-1,vis,board,n,m);
        
        
    }
    int countBattleships(vector<vector<char>>& board) {
        
        int n=board.size();
        int m=board[0].size();
        int c=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 and board[i][j]=='X')
                {
                    c++;
                    dfs(i,j,vis,board,n,m);
                }
            }
        }
        return c;
        
        
        
        
    }
};