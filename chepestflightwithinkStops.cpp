class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        
        vector<vector<pair<int,int>>>g(n);
        for(int i=0;i<flights.size();i++)
        {
            g[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        vector<int>dis(n,INT_MAX);
        dis[src]=0;
        queue<pair<int,int>>q;
        q.push({0,src});
        k=k+1;
        while(!q.empty() and k--)
        {
            int n=q.size();
            while(n--)
            {
                int d = q.front().first;
                int s=q.front().second;
                q.pop(); 
                for(auto it:g[s])
                {
                    int nxt  = it.second+d;
                    if(dis[it.first]>nxt)
                    {
                        dis[it.first]=nxt;
                        q.push({dis[it.first],it.first});
                    }
               
                }
            }
        }
        if(dis[dst]==INT_MAX)
            return(-1);
        return(dis[dst]);
 
    }
};