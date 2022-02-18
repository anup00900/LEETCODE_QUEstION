class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int flip=0;
        int  i=0,c=0,m=0,j=0;
        while(i<nums.size())
        {
            
            if(nums[i]==1)
            {
               
                i++;
            }
            else
            {    
                if(flip==0)
            {
               
                flip=1;
                i++;
                
            }
            else 
            {
                while(flip==1)
                {
                    if(nums[j]==0)
                    {
                        flip=0;
                    }
                    j++;
                    
                }
                 
            }
            }
            m=max(m,i-j-1);
          
            
        }
        return m;
        
    }
};