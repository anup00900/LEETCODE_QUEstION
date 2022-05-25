class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>>&o,vector<vector<int>>&h,int prev,int n,int m)
    {
        if(i<0 or j<0 or i>=n or j>=m)
        {
            return;
        }
        if(h[i][j]<prev)
        {
            return;
        }
        if(o[i][j]==1)
        {
            return;
        }
        
        
        o[i][j]=1;
        dfs(i,j+1,o,h,h[i][j],n,m);
        dfs(i,j-1,o,h,h[i][j],n,m);
        dfs(i-1,j,o,h,h[i][j],n,m);
        dfs(i+1,j,o,h,h[i][j],n,m);
        
    }
    
    
    
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        
        
        int n = h.size();
        int m = h[0].size();
        vector<vector<int>>pacific(n,vector<int>(m,0));
        vector<vector<int>>atlantic(n,vector<int>(m,0));
        vector<vector<int>>ans;
        
        if(h.size()<1)
        {
            return ans;
        }
        
        for(int i=0;i<m;i++)
        {
            dfs(0,i,pacific,h,INT_MIN,n,m);
            dfs(n-1,i,atlantic,h,INT_MIN,n,m);
        }
        for(int i=0;i<n;i++)
        {
             dfs(i,0,pacific,h,INT_MIN,n,m);
             dfs(i,m-1,atlantic,h,INT_MIN,n,m);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(pacific[i][j]==1 and atlantic[i][j]==1)
                {
                    vector<int>v;
                    v.push_back(i);
                    v.push_back(j);
                    ans.push_back(v);
                }
            }
        }
        
        return ans;
        
        
        
        
    }
};