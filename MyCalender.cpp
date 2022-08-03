class MyCalendar {
public:
    
    MyCalendar() {
        
    }
    vector<pair<int,int>>q;
    bool book(int start, int end) {
        
        if(q.empty())
        {
            q.push_back({start,end});
            
        }
        else
        {
            for(auto it:q)
            {
                if((it.first<=start and start<it.second) or (it.first>=start and it.first<end))
                {
                   return 0;
                }
                
            }
             q.push_back({start,end});
                
            
        }
        return 1;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */