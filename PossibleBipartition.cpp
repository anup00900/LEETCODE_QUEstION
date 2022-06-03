class Solution {
public:
   
    bool dfs(int s, vector<int>&vis,vector<int>adj[],int n)
    {
        if(vis[s]==-1)
        {
               vis[s]=0;
        }
     
        for(auto it:adj[s])
        {
            if(vis[it]==-1)
            {
                vis[it]=1-vis[s];
                if(!dfs(it,vis,adj,n))
                {
                    return 0;
                }
            }
            else
            {
                if(vis[it]==vis[s])
                {
                    return 0;
                }
            }
        }
        return 1;
        
    }
    bool possibleBipartition(int n, vector<vector<int>>& dis) {
        
        vector<int>adj[n+1];
        for(int i=0;i<dis.size();i++)
        {
            adj[dis[i][0]].push_back(dis[i][1]);
           adj[dis[i][1]].push_back(dis[i][0]);
        }
        
        //applying logic of 2-coloring problem
        
        vector<int>vis(n+1,-1);
        
        for(int i=0;i<=n;i++)
        {
            if(vis[i]==-1)
            {
                if(!dfs(i,vis,adj,n))
                {
                    return 0;
                }
            }
        }
     return 1;
    }
};