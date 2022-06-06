public:
	vector<pair<int,int>>ed;
    //Function to find if the given edge is a bridge in graph.
    void dfs(int s,int par,vector<int>&vis,vector<int>&lowadj,vector<int>&timeinc,vector<int>adj[],int &timer)
    {
        
        vis[s]=1;
        lowadj[s]=timeinc[s]=timer++;
        for(auto it:adj[s])
        {
            if(it == par)
            {
                continue;
            }
            if(vis[it]==0)
            {
                dfs(it,s,vis,lowadj,timeinc,adj,timer);
                lowadj[s]=min(lowadj[s],lowadj[it]);
                if(lowadj[it] > timeinc[s])
                {
                    ed.push_back({it,s});
                }
                
                
            }
            else
            {
                lowadj[s]=min(lowadj[s],timeinc[it]);
            }
        }
          
          
          
          
    }
    int isBridge(int V, vector<int> adj[], int x, int y) 
    {
       
       vector<int>vis(V,0);
       vector<int>lowadj(V,-1);
       vector<int>timeinc(V,-1);
       
       for(int i=0;i<V;i++)
       {
           int timer=0;
           if(vis[i]==0)
           {
               dfs(i,-1,vis,lowadj,timeinc,adj,timer);
           }
       }
       for(int i=0;i<ed.size();i++)
       {
           if((ed[i].first == x and ed[i].second == y) or (ed[i].first == y and ed[i].second == x))
           {
               return 1;
           }
       }
       
       return 0;
       
    }