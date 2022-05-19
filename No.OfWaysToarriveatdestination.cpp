class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        
        
        vector<vector<pair<int,long long int>>>adj(n);
        for(int i=0;i<roads.size();i++)
        {
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        
        vector<long long int>dist(n,LLONG_MAX);
        vector<long long int>ways(n,0);
        priority_queue<pair<long long int,int>,vector<pair<long long int,int>>,greater<pair<long long int,int>>>pq;
        dist[0]=0;
        ways[0]=1;
        pq.push({0,0});
        long MOD =1e9+7;
        while(!pq.empty())
        {
            int node = pq.top().second;
            long long int di=pq.top().first;
            pq.pop();
            for(auto it:adj[node])
            {
                long long int  nxt = di+it.second;
                if(dist[it.first]>nxt)
                {
                    dist[it.first]=nxt;
                    ways[it.first]=ways[node];
                    pq.push({nxt,it.first});
                }
                else if(dist[it.first]==nxt)
                {
                    ways[it.first]=(ways[it.first]+ways[node])%(MOD);
                }
            }
        }
        return ways[n-1];
        
        
        
    }
};