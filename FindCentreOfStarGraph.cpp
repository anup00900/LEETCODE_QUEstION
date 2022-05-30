class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        int n=edges.size();
        vector<int>adj[n+2];
        
        for(int i=0;i<n;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>indeg(n+2,0);
       
        for(int i=1;i<=n+1;i++)
        {
            for(auto it:adj[i])
            {
                indeg[it]++;
            }
        }
        for(int i=1;i<=n+1;i++)
        {
            if(indeg[i]==n)
            {
                return i;
            }
        }
        return -1;
    }
};