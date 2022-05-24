class Solution {
public:
    
    void dfs(int s,vector<int>&vis, vector<int>adj[])
    {
        vis[s]=1;
        for(auto it:adj[s])
        {
            if(vis[it]==0)
            {
                 dfs(it,vis,adj);
            }
           
        }
    }
    
    
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<rooms[i].size();j++)
            {
                if(rooms[i][j]!=i)
                {
                    adj[i].push_back(rooms[i][j]);
                }
                
            }
        }
        vector<int>vis(n,0);
       
            
                dfs(0,vis,adj);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                return 0;
            }
        }
        return 1;
          
       
        
        
    }
};