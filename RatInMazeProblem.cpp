class Solution{
    public:
    vector<string>ans;
    void dfs(int x,int y,vector<vector<int>> &m,vector<vector<int>>&vis,int n,string st)
    {
        if(x<0 or y<0 or x>=n or y>=n or m[x][y]==0)
        {
            return;
        }
        if(x==n-1 and y==n-1 and m[x][y]==1)
        {
            
            ans.push_back(st);
            return;
            
        }
        if(vis[x][y]==1)
        {
            return;
        }     
        
        vis[x][y]=1;
        dfs(x+1,y,m,vis,n,st+'D');
        dfs(x,y-1,m,vis,n,st+'L');
        dfs(x,y+1,m,vis,n,st+'R');
        dfs(x-1,y,m,vis,n,st+'U');
        vis[x][y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        
        vector<vector<int>>vis(n,vector<int>(n,0));
        
        if(m[0][0]==0)
        {
            return ans;
        }
        string s="";
        dfs(0,0,m,vis,n,s);
        return ans;
        
        
        
    }
};
