class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        
        priority_queue<int>pq;
        for(int i=0;i<p.size();i++)
        {
            pq.push(p[i]);
        }
        while(k--)
        {
            int r = pq.top();
            int t;
            
            pq.pop();
            if(r%2==0)
            {
                t=r/2;
            }
            else
            {
                t = r/2+1;
            }
            pq.push(t);
            
        }
        int s=0;
        while(!pq.empty())
        {
            s=s+pq.top();
            pq.pop();
        }
        return s;
        
    }
};