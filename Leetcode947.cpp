class Solution {
public:
    void dfs(int s,vector<int>&vis,vector<int>edges[])
    {
        vis[s]=1;
        for(auto it:edges[s])
        {
            if(vis[it]==0)
            {
                dfs(it,vis,edges);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        
        int n = stones.size();
        vector<int>vis(n,0);
        vector<int>edges[n];
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(stones[i][0]==stones[j][0] or stones[i][1]==stones[j][1])
                {
                    edges[i].push_back(j);
                    edges[j].push_back(i);
                }
            }
        }
        int ans=0,c=0;
        for(int i=0;i<n;i++)
        {
            
            if(vis[i]==0)
            {
                c++;
                dfs(i,vis,edges);
            }
            
            
        }
        
        return n-c;
        
        
        
        
        
        
    }
};