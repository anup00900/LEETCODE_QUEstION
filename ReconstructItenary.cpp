class Solution {
public:
    vector<string>ans;
    void dfs(unordered_map<string,priority_queue<string,vector<string>,greater<string>>>&umap,vector<vector<string>>& tickets,string node)
    {
        while(!umap[node].empty())
        {
            auto nxt=umap[node].top();
            cout<<nxt<<" ";
            umap[node].pop();
        
            dfs(umap,tickets,nxt);
        }
        ans.push_back(node);
   
        
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        
        //euler path means dfs traversal
        unordered_map<string,priority_queue<string,vector<string>,greater<string>>>umap;
        for(int i=0;i<tickets.size();i++)
        {
            umap[tickets[i][0]].push(tickets[i][1]);
        }
        
        
        dfs(umap,tickets,"JFK");
        reverse(ans.begin(),ans.end());
        return ans;
    }
};