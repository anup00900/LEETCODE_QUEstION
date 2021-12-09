class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        int i=0;
        int j=i+1;
        if(nums.size()==0)
        {
            return(0);
        }
        
        while(j<nums.size())
        {
            
            if(nums[i]==nums[j])
            {
                j++;
            }
            else
            {
                nums[i+1]=nums[j];
                j++;
                i++;
            }
            
            
            
            
        }
        return(i+1);
        
        
        
        
    }
};