class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans[32]={0};
        int sh=1,k=0,h=1;
        int s=0;
        for(int i=0;i<32;i++)
        {
            k=0;
           for(int j=0;j<nums.size();j++)
           {
               if(nums[j]&sh)
               {
                   k++;
               }
               
           }
           if(k%3!=0)
           {
               s=s+(1<<i);
           }
            
           sh=sh<<1;
          
        }
      
        return s;
        
        
    }
};