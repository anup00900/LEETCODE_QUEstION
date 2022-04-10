class Solution {
public:
    typedef pair<int,vector<int>> pi;
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
     
        vector<vector<int>>v;
        multimap<int,vector<int>>umap;
        priority_queue<pi, vector<pi>, greater<pi>>pq;
         for(int i=0;i<p.size();i++)
         {
             
             int r= (p[i][0]*p[i][0]+p[i][1]*p[i][1]); 
             umap.insert({r,p[i]});  
             
         }
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            pq.push({it->first,it->second});
        }
        int n=pq.size();
       
        while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
            
        }
        return v;
        
        
        
    }
};