class Solution {
public:
    
    void dfs(vector<int>adj[],vector<int>&vis, vector<int>&ans,int s,vector<int>& q)
    {
        vis[s]=1;
         ans[s]=s;
       
        for(auto it:adj[s])
        {
            if(vis[it]==0)
            {
                dfs(adj,vis,ans,it,q);
            }
            if(q[ans[s]]>q[ans[it]])
            {
                ans[s]=ans[it];
            }
            
        }
       
        
    }
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n=quiet.size();
        vector<int>adj[n];
        
        for(int i=0;i<richer.size();i++)
        {
            adj[richer[i][1]].push_back(richer[i][0]);
        }
       
        
        vector<int>ans(n,0);
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs(adj,vis,ans,i,quiet);
            }
        }
        
        return ans;
        
    }
};