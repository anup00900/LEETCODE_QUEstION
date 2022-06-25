class Solution {
public:
    long long int c=0;
    void dfs(int s,vector<int>adj[],vector<int>&vis,int &sti)
    {
        vis[s]=1;
        sti++;
        
        for(auto it:adj[s])
        {
            
            if(vis[it]==0)
            {
                
                dfs(it,adj,vis,sti);
                
            }
            
        }
        
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        vector<int>adj[n];
        
       
        for(int i=0;i<edges.size();i++)
        {
            
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        vector<int>vis(n,0);
        vector<long long int>v;
        int sti=0;
         
       
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                c++;
                dfs(i,adj,vis,sti);
                v.push_back(sti);
                sti=0;
            }
        }
        if(v.size()==1)
        {
            return 0;
        }
        long long int k=0;
        long long int f=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            k+=v[i]*f;
            f+=v[i];
            cout<<f<<" ";
        }
        return k;
    }
};