class Solution {
public:
    void dfs(int s,vector<int>&vis,vector<int>adj[])
    {
        vis[s]=1;
        for(auto it:adj[s])
        {
            if(vis[it]==0)
            {
                dfs(it,vis,adj);
            }
            
        }
        
    }
    int makeConnected(int n, vector<vector<int>>& con) {
        
        vector<int>adj[n];
        
        int edges = con.size();
        if(edges<n-1)
        {
            return -1;
        }
        
        
        
        for(int i=0;i<con.size();i++)
        {
            adj[con[i][0]].push_back(con[i][1]);
            adj[con[i][1]].push_back(con[i][0]);
        }
        
        vector<int>vis(n,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                c++;
                dfs(i,vis,adj);
            }
        }
        
   
        return c-1;
    }
};