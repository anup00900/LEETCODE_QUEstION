class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        
        deque<int>dq;
        int m=INT_MIN;
        vector<int>v;
        for(int i=0;i<k;i++)
        {
            if(i==0)
            {
                dq.push_back(nums[i]);
                
            }
            else
            {
                while(!dq.empty() and dq.back()<nums[i])
                {
                    dq.pop_back();
                }  
                
                dq.push_back(nums[i]);
    
            }
        }
        m=max(dq.front(),m);
        v.push_back(m);
        int j=0;
        for(int i=k;i<nums.size();i++)
        {
            if(dq.front()==nums[j])
            {
                dq.pop_front();
               
            }
            
            
                while(!dq.empty() and dq.back()<nums[i])
                {
                    dq.pop_back();
                }  
            
            
                dq.push_back(nums[i]);
                v.push_back(dq.front());
                
             
            j++;
                
        }
        
        return v;
        
    }
};