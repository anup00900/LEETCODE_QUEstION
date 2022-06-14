class Solution {
public:
    bool dfs(vector<int>adj[],vector<int>&vis,int s,int e)
    {
        vis[s]=1;
        if(s == e)
        {
            return 1;
        }
        for(auto it:adj[s])
        {
            if(vis[it]==0)
            {
                if(dfs(adj,vis,it,e))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& p, vector<vector<int>>& q) {
        
        vector<int>adj[n];
        vector<bool>ans;
       
        for(int i=0;i<p.size();i++)
        {
            adj[p[i][0]].push_back(p[i][1]);
        }
        for(int i=0;i<q.size();i++)
        {
            vector<int>vis(n,0);
            
          
                if(vis[q[i][0]]==0)
                {
                      if(dfs(adj,vis,q[i][0],q[i][1]))
                      {
                          ans.push_back(1);
                          
                      }
                      else
                      {
                          ans.push_back(0);
                      }
                }
           
            
        }
        return ans;
        
    }
};