class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        
        vector<int>indeg(n+1,0);
        vector<int>outdeg(n+1,0);
        vector<int>adj[n+1];
        for(int i=0;i<trust.size();i++)
        {
            adj[trust[i][0]].push_back(trust[i][1]);
        }
        for(int i=1;i<=n;i++)
        {
            for(auto it:adj[i])
            {
                indeg[it]++;
                outdeg[i]++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(outdeg[i]==0 and indeg[i]==(n-1))
            {
                return i;
            }
        }
        return -1;
        
    }
};