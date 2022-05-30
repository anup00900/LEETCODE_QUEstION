class Solution {
public:
    void dfs(int s, vector<int>&vis,vector<int>adj[])
    {
        vis[s]=1;
        for(auto it:adj[s])
        {
            if(vis[it]==0)
            {
                dfs(it,vis,adj);
            }
        }
    }
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        
      
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        
        vector<int>ans;
        vector<int>indeg(n,0);
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i])
            {
                indeg[it]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
            {
                ans.push_back(i);
            }
        }
      return ans;
    }
};