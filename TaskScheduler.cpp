class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
         
        unordered_map<char,int>umap;
        for(int i=0;i<tasks.size();i++)
        {
            umap[tasks[i]]++;
        }
        
        priority_queue<int>pq;
        queue<pair<int,int>>q;
        
        
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            pq.push(it->second);
        }
        
        int time =0;
        int t;
        int d;
        int next;
    
        while(!q.empty() or !pq.empty())
        {
            
            if(!q.empty() and time == q.front().second)
            {
                pq.push(q.front().first);
                q.pop();
            }
            if(pq.empty() and !q.empty())
            {
                time=time+1;
                continue;
            }
            
            
            int t = pq.top();
            pq.pop();
            time = time+1;
            int d = t-1;
            if(d>0)
            {
                int next = time+n;
                q.push({d,next});
            }
        }
        
        return time;
        
        
        
        
        
        
    }
};