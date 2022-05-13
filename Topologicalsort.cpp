public:
	//Function to return list containing vertices in Topological order. 
	stack<int>st;
	void dfs(int s,vector<int> adj[],vector<int>&vis)
	{
	    vis[s]=1;
	    for(auto it:adj[s])
	    {
	        if(vis[it]==0)
	        {
	            dfs(it,adj,vis);
	        }
	    }
	    st.push(s);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>v;
	    vector<int>vis(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==0)
	        {
	            dfs(i,adj,vis);
	        }
	    }
	    while(!st.empty())
	    {
	        v.push_back(st.top());
	        st.pop();
	    }
	    return v;
	}