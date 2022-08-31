class MedianFinder {
public:
    priority_queue<int>maxhip;
    priority_queue<int,vector<int>,greater<int>>minhip;
    MedianFinder() {
        
    }
    
    void addNum(int val) {
        
        if(maxhip.empty() and minhip.empty())
        {
            maxhip.push(val);
        }
        else
        {
            if(maxhip.size()>minhip.size())
            {
                if(maxhip.top()>val)
                {
                    minhip.push(maxhip.top());
                    maxhip.pop();
                    maxhip.push(val);
                }
                else
                {
                    minhip.push(val);
                }
            }
            else
            {
                if(val<=maxhip.top())
                {
                    maxhip.push(val);
                }
                else
                {
                    minhip.push(val);
                    maxhip.push(minhip.top());
                    minhip.pop();
                }
            }
            
        }
        
    }
    
    double findMedian() {
        
        if((maxhip.size()+minhip.size())%2==0)
        {
            double d = ((double)maxhip.top()+(double)minhip.top())/2.0;
            return d;
            
        }
        else
        {
            return (double)maxhip.top();
        }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */