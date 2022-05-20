class Solution {
public:
    bool dfs(vector<vector<int>>&adj,int s,int e,vector<int>&vis)
    {
        vis[s]=1;
        if(s==e)
        {
            return 1;
        }
       // cout<<s<<" ";
        for(auto it:adj[s])
        {
            if(vis[it]==0)
            {
                 cout<<it<<" ";
                 if(dfs(adj,it,e,vis))
                 {
                     return(1);
                 }
                   
            }
        }
        return 0;
        
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        
       
        
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        return(dfs(adj,s,d,vis));
        
        
        
        
        
        
    }
};