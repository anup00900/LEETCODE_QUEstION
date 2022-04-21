class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
             
            if(nums[i]>=1 and nums[i]<=n)
            {
                int c = nums[i]-1;
                 while(nums[i]>=1 and nums[i]<=n and nums[i]!=nums[c])
                 {
                      swap(nums[i],nums[c]);
                      c = nums[i]-1;
                 }
            }
           
            
            
        }
        for(int i=0;i<n;i++)
        {
            if(i+1 != nums[i])
            {
                return(i+1);
            }
        }
        return n+1;
        
        
        
        
        
        
    }
};