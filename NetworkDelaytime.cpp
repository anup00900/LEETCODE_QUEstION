class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        //building adjecency list
        vector<vector<pair<int,int>>>adj(n+1);
        
        for(int i=0;i<times.size();i++)
        {
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
                
        }
        
        //Applying Dikstra
        //Facts:
        //1.Dikstra can be applyed for both directed as well as undirected
        //2.It can only be applied for positive weighted ,negative weight no meaning as we use mean heap
        //it can be applied to positive,directed or undirected ,cycle or no cycle.
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dis(n+1,INT_MAX);
        dis[k]=0;
        dis[0]=0;
        pq.push({0,k});
        while(!pq.empty())
        {
            
                int di = pq.top().first;
                int no = pq.top().second;
                pq.pop();
                
                for(auto it:adj[no])
                {
                    int nxt = di+it.second;
                    if(dis[it.first]>nxt)
                    {
                        dis[it.first]=nxt;
                        pq.push({nxt,it.first});
                    }
                }
         
            
        }
        int s=INT_MIN;
        for(int i=0;i<dis.size();i++)
        {
            if(dis[i]>s)
            {
                s=dis[i];
            }
           
        }
        if(s==INT_MAX)
        {
            return -1;
        }
        return s;
        
        
    }
};