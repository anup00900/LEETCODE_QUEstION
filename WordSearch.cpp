class Solution {
public:
    
    bool dfs(vector<vector<char>>& board, string word,vector<vector<int>>&vis,int i,int j,int n,int m,int k,string ans)
    {
        if(i<0 or j<0 or i>=n or j>=m or k>=word.size() or board[i][j]!=word[k])
        {
            return 0;
        }
        if(vis[i][j]==1)
        {
            return 0;
        }
        vis[i][j]=1;
        ans=ans+board[i][j];
        if(ans == word)
        {
            return 1;
        }
        //cout<<board[i][j]<<i<<j<<" "<<ans<<" ";
        int t1 = dfs(board,word,vis,i+1,j,n,m,k+1,ans); 
        int t2 = dfs(board,word,vis,i-1,j,n,m,k+1,ans);
        int t3 = dfs(board,word,vis,i,j+1,n,m,k+1,ans);
        int t4 = dfs(board,word,vis,i,j-1,n,m,k+1,ans);
        vis[i][j]=0;
        return t1 or t2 or t3 or t4;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n=board.size();
        int m=board[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                string ans="";
                if(vis[i][j]==0 and board[i][j]==word[0])
                {
                    if(dfs(board,word,vis,i,j,n,m,0,ans))
                    {
                        return 1;
                    }
                    //vis[i][j]=1;
                }
            }
        }
        return 0;
    }
};