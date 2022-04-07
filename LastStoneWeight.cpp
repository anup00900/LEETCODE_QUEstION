class Solution {
public:
    int lastStoneWeight(vector<int>& st) {
        
        
        priority_queue<int>pq(st.begin(),st.end());
        while(pq.size()!=1 and !pq.empty())
        {
            int t=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            int ans=t-y;
            if(ans!=0)
            {
                pq.push(ans);
            }
            
        }
        if(!pq.empty())
        {
            return pq.top();
        }
        return 0;
        
        
        
        
        
        
        
    }
};