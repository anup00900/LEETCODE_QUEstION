class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int>key(V,INT_MAX);
        vector<int>parent(V,-1);
        vector<int>mst(V,0);
        int ans=0;
        key[0]=0;
       
        for(int c=0;c<V;c++)
        {
            int mi = INT_MAX;
            int node;
            for(int i=0;i<key.size();i++)
            {
                if(mi>key[i] and mst[i]==0)
                {
                    mi=key[i];
                    node = i;
                }
            }
            mst[node]=1;
            ans=ans+key[node];
            for(auto it:adj[node])
            {
                int v=it[0];
                int d=it[1];
                if(mst[v]==0 and key[v]>d)
                {
                    key[v]=d;
                    parent[v]=node;
                }
            }
        }
        return(ans);