class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
        
        vector<int>adj[n];
        for(int i=0;i<roads.size();i++)
        {
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        }
        
        vector<int>indeg(n,0);
        for(int i=0;i<n;i++)
        {
            for(auto it:adj[i])
            {
                indeg[it]++;
            }
        }
        sort(indeg.begin(),indeg.end());
        long long int ans=0;
        long long int k=1;
        for(int i=0;i<n;i++)
        {
            ans = ans + (long)(indeg[i]*k);
            k++;
        }
        return ans;
        
        
    }
};