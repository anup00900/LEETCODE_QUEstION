class Solution {
public:
    int s=0;
    void m(priority_queue<int>pq)
    {
        if(pq.size()<2)
        {
            return;
        }
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        x=x-1;
        y=y-1;
        s++;
        if(x != 0)
        {
            pq.push(x);
        }
        if(y != 0)
        {
            pq.push(y);
        }
        m(pq);
    }
    int maximumScore(int a, int b, int c) {
        
        
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        m(pq);
        return s;
        
    }
};