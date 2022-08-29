vector <int> nearlySorted(int arr[], int n, int k){
        
        
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(i<=k)
            {
                pq.push(arr[i]);
            }
            else
            {
                
                v.push_back(pq.top());
                pq.pop();
                pq.push(arr[i]);
            }
        }
        while(!pq.empty())
        {
            v.push_back(pq.top());
            pq.pop();
        }
           return v;
           
 
        
    }