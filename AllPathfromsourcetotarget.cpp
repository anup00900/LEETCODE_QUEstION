class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<vector<int>>& adj,int s,int e,vector<int>res)
    {
        if(s==e)
        {
            //res.push_back(s);
            ans.push_back(res);
            return;
        }
        for(auto it:adj[s])
        {
            //cout<<it<<" ";
            res.push_back(it);
           
            dfs(adj,it,e,res);
            
            res.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
         
        int n=g.size()-1;
        vector<int>res;
        res.push_back(0);
        dfs(g,0,n,res);
        return ans;
        
        
        
    }
};