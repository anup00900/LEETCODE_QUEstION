class MyQueue {
public:
    
    stack<int>st1;
    stack<int>st2;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        if(!st2.empty())
        {
            while(!st2.empty())
            {
                st1.push(st2.top());
                st2.pop();
            }
        }
        
        st1.push(x);
        
        
        
    }
    
    int pop() {
        
        if(!st1.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int t=st2.top();
        st2.pop();
        return t;
        
        
        
    }
    
    int peek() {
        
        if(!st1.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int t=st2.top();
        
        return t;
        
    }
    
    bool empty() {
        if(st1.empty() and st2.empty())
        {
            return 1;
        }
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */