class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
      
        /*int flag=0;
        if(nums.size()<3)
        {
            return 0;
        }
        stack<int>st;
        for(int j=0;j<nums.size()-2;j++)
        {
            while(!st.empty())
            {
                st.pop();
            }
            st.push(nums[j]);
            flag=nums[j];
           
            
        
        for(int i=j+1;i<nums.size()-1;i++)
        {
                    if(st.top()<nums[i])
                    {
                        st.push(nums[i]);
                        
                    }
              
            for(int k=i+1;k<nums.size();k++)
            {
                    if(st.top()>nums[k] and nums[k]>flag)
                    {
                        return 1;
                    }
            }
            
               
        }
        }
        return 0;*/
        
        
        stack<int>st;
        int sm=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--)
        {
            
            if(nums[i]<sm)
            {
                return 1;
            }
            while(st.size()>0  and st.top()<nums[i])
            {
                sm=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return 0;
        
        
        
        
        
    }
};