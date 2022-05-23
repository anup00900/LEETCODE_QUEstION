class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int dt) {
        
        //int n=edges.size();
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0],edges[i][2]});
        }
        
        
        vector<vector<int>>umap(n);
         
            int index;
       
        for(int i=0;i<n;i++)
        {
            int s = i;
           int mi = INT_MAX; priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            vector<int>dis(n,INT_MAX);
            dis[s]=0;
            pq.push({0,s});
            while(!pq.empty())
            {
                int di = pq.top().first;
                int node = pq.top().second;
                pq.pop();
                for(auto it:adj[node])
                {
                    int nxt = di+it.second;
                    if(dis[it.first]>nxt)
                    {
                        dis[it.first]=nxt;
                        pq.push({nxt,it.first});
                        
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                if(dis[i]<=dt)
                {
                    umap[s].push_back(i);
                }
            }
           
            for(int i=0;i<n;i++)
            {
                if(umap[i].size()<=mi)
                {
                    mi=umap[i].size();
                    index=i;
                }
            }
           
        }
         return index;
        
    }
};