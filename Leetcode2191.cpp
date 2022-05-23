class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        
        vector<int>adj[n];
        vector<set<int>>anc(n);
        
        vector<int>indeg(n,0);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i])
            {
                indeg[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
           
            int node = q.front();
            
              q.pop();
            for(auto it:adj[node])
            {
                
                anc[it].insert(node);
                anc[it].insert(anc[node].begin(),anc[node].end());
                
               
                indeg[it]--;
                if(indeg[it]==0)
                {
                    q.push(it);
                }
            }
            
          
        }
       
        vector<vector<int>>ans(n);
        for(int i=0;i<n;i++)
        {
            for(auto it:anc[i])
        {
            ans[i].push_back(it);
        }
        }
        
        return ans;
    }
};