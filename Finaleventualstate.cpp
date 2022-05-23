class Solution {
public:
    bool dfs(int s,vector<int>&vis,vector<int>&dvis,vector<vector<int>>& g,vector<int>&prob)
    {
        vis[s]=1;
        dvis[s]=1;
        for(auto it:g[s])
        {
            if(vis[it]==0)
            {
                if(dfs(it,vis,dvis,g,prob))
                {
                    return prob[it]=1;
                }
            }
            else if(dvis[it]==1)
            {
                    return prob[it]=1;                
            }
        }
        dvis[s]=0;
        return prob[s]=0;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        
        int n = graph.size();
        vector<int>vis(n,0);
        vector<int>dvis(n,0);
        vector<int>prob(n,0);
         vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                prob[i]=dfs(i,vis,dvis,graph,prob);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(prob[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
        
        
        
        
    }
};