class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        
        //making adjacency list format inorder to apply prism algorithm
        int ans=0;
        int n=points.size();
        vector<vector<pair<int,int>>>adj;
        for(int i=0;i<points.size();i++)
        {
            vector<pair<int,int>>v;
            for(int j=0;j<points.size();j++)
            {
                int dist=0;
                if(i!=j)
                {
                    dist=abs(points[j][0]-points[i][0])+abs(points[j][1]-points[i][1]);
                }
                v.push_back({j,dist});
            }
            adj.push_back(v);
        }
     
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>keys(n,INT_MAX);
        vector<int>mst(n,0);
        keys[0]=0;
        pq.push({0,0});
        while(!pq.empty())
        {
            int node = pq.top().second;
            pq.pop();
            mst[node]=1;
            for(auto it:adj[node])
            {
                int w = it.second;
                int val = it.first;
                if(mst[val]==0 and keys[val]>w)
                {
                    keys[val]=w;
                    pq.push({w,val});
                }
            }
        }
        for(auto i:keys)
        {
            ans+=i;
        }
        return ans;
        
        
        
        
    }
};