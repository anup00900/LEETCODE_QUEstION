//In the Number of Islands question, you have a 2d grid. The number of "Nodes" if you will, are the cells of the grid. So you have rows x columns in terms of the total number of nodes. Furthermore, the edges are represented by checking whether the adjacent members are the 1 or not. This is why when you perform DFS, you need to have checks in all 4 directions to add the neighbors.

//In this question, you have a NxN matrix but only N friends in total. Edges are directly given via the cells so you have to traverse a row (versus a 4 direction check) to get the neighbors for a specific matrix. 





class Solution {
public:
    
    void dfs(int s,vector<int>&vis,vector<int>adj[],int n)
    {
        vis[s]=1;
        for(auto it:adj[s])
        {
            if(vis[it]==0)
            {
                dfs(it,vis,adj,n);
            }
        }
    }
    
    
    int findCircleNum(vector<vector<int>>& is) {
        
        
        int n = is.size();
        int m = is[0].size();
        
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(is[i][j]==1)
                {
                    adj[i].push_back(j);
                }
            }
        }
        
        vector<int>vis(n,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                c++;
                dfs(i,vis,adj,n);
            }
        }
        return c;
        
        
    }
};