vector <int> dijkstra(int V, vector<vector<int>> adj[], int s)
    {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        vector<int>dis(V,INT_MAX);
        dis[s]=0;
        q.push({0,s});
        while(!q.empty())
        {
            int di=q.top().first;
            int n=q.top().second;
            q.pop();
            for(auto it:adj[n])
            {
                int nxt = di+it[1];
                if(dis[it[0]]>nxt)
                {
                    dis[it[0]]=di+it[1];
                    q.push({nxt,it[0]});
                }
                
                
            }
        }
        return dis;
        
        
        
        
    }
};