class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        
        
        vector<pair<int,int>>adj[n];
        queue<int>q;
        vector<int>reddist(n,INT_MAX);
        vector<int>bluedist(n,INT_MAX);
        vector<int>ans;
        
        for(int i=0;i<redEdges.size();i++)
        {
            adj[redEdges[i][0]].push_back({redEdges[i][1],1});
        }
        for(int i=0;i<blueEdges.size();i++)
        {
            adj[blueEdges[i][0]].push_back({blueEdges[i][1],-1});
        }
        
        reddist[0]=0;
        bluedist[0]=0;
        q.push(0);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto &it:adj[node])
            {
                int child = it.first;
                int color = it.second;
                if(color == 1 and bluedist[node]!=INT_MAX and bluedist[node]+1 < reddist[child])
                {
                    reddist[child]=bluedist[node]+1;
                    q.push(child);
                }
                else if(color == -1 and reddist[node]!=INT_MAX and reddist[node]+1 < bluedist[child])
                {
                    bluedist[child]=reddist[node]+1;
                    q.push(child);
                }
            }
         
        }
        
        for(int i=0;i<n;i++)
        {
            int t=min(bluedist[i],reddist[i]);
            
            if(t == INT_MAX)
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(t);
            }
            
        }
        return ans;
        
        
        
    }
};