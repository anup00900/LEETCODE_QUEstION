class Solution {
public:
    bool bfs(int s,vector<vector<int>>& graph,vector<int>&vis)
    {
        vis[s]=1;
        queue<int>q;
        q.push(s);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto it:graph[node])
            {
                if(vis[it]==-1)
                {
                    vis[it]=1-vis[node];
                    q.push(it);
                }
                else
                {
                    if(vis[it]==vis[node])
                    {
                        return 0;
                    }
                }
            }
        }
        return 1;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<int>vis(n,-1);
       
        for(int i=0;i<n;i++)
        {
           if(vis[i]==-1)
           {
               if(!bfs(i,graph,vis))
               {
                   return 0;
               }
           }
        }
        
        return 1;
    }
};