class Solution {
public:
    stack<int>st;
    bool dfs(vector<int>adj[],vector<int>&vis,int s,vector<int>&dvis)
    {
        vis[s]=1;
        dvis[s]=1;
        for(auto it:adj[s])
        {
            if(vis[it]==0)
            {
                if(dfs(adj,vis,it,dvis))
                {
                    return 1;
                }
            }
            else if(dvis[it]==1)
            {
                return 1;
            }
            
        }
        dvis[s]=0;
        //st.push(s);
        return 0;
    }
    bool canFinish(int nc, vector<vector<int>>& pq) {
        
        //int n=pq.size();
        vector<int>adj[nc];
        for(int i=0;i<pq.size();i++)
        {
            adj[pq[i][1]].push_back(pq[i][0]);
        }
        vector<int>vis(nc,0);
        vector<int>dvis(nc,0);
        for(int i=0;i<nc;i++)
        {
            if(vis[i]==0)
            {
                if(dfs(adj,vis,i,dvis))
                {
                    return 0;
                }
            }
        }
         return 1;
      
    }
};