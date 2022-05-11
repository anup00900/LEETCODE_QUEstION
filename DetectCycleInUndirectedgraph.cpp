bool bfs(int s,int n,vector<int>adj[],vector<int>&vis)
    {
        queue<pair<int,int>>q;
        vis[s]=1;
        q.push({s,-1});
        while(!q.empty())
        {
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
            for(auto it:adj[node])
            {
                if(vis[it]==0)
                {
                    q.push({it,node});
                    vis[it]=1;
                }
                else if(par != it)
                {
                    return 1;
                }
            }
           
            
        }
         return 0;
    }
    bool isCycle(int V, vector<int> adj[]) {
        
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                if(bfs(i,V,adj,vis))
                {
                    return 1;
                }
            }
        }
        
        return 0;
        
        
    }
};