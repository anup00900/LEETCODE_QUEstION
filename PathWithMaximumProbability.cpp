class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& suc, int start, int end) {
        
        vector<vector<pair<double,double>>>adj(n);
        
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],suc[i]});
            adj[edges[i][1]].push_back({edges[i][0],suc[i]});
        }
        priority_queue<pair<double,int>>pq;
        pq.push({(double)1.0,start});
        vector<double>dist(n,(double)0.0);
        dist[start]=1.0;
        
        while(!pq.empty())
        {
            int node = pq.top().second;
            double di=pq.top().first;
            pq.pop();
            for(auto it:adj[node])
            {
                double w = it.second;
                int v = it.first;
                double nxt = w*di;
                if(dist[v]<nxt)
                {
                    dist[v]=nxt;
                    pq.push({nxt,v});
                }
                
            }
        }
       
        if(dist[end]==INT_MIN)
        {
            return 0;
        }
        return dist[end];
        
        
        
        
        
        
    }
};