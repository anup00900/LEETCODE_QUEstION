class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        
        int f=0;
        
        int n=nums.size();
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] < nums[i-1])
            {
                f++;
                
                if(f>1)
                {
                    return 0;
                }
                
                if(i==1 || nums[i-2]<=nums[i])
                {
                    nums[i-1]=nums[i];
                }
                else 
                {
                    nums[i]=nums[i-1];
                }
                
                
                
                
            }
        }
      
       
        
        
       return 1; 
        
        
    }
};
