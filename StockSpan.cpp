class StockSpanner {
    
    stack<pair<int,int>>st;
    int i=0;
    int span=0;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        
        if(st.empty())
        {
            st.push({price,i});
            span=i+1;
            i++;
        }
        else
        {
            while(!st.empty() and st.top().first<=price)
            {
                st.pop();
            }
            if(st.empty())
            {
                st.push({price,i});
                span=i+1;
                i++; 
            }
            else
            {
                span=i-st.top().second;
                st.push({price,i});
                i++;
            }
        }
        return span;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */