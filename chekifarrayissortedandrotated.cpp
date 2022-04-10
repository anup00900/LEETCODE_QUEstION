class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n=nums.size();
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%n])
            {
                c++;
                if(c>=2)
                {
                    return 0;
                }
                
            }
        }
        return 1;
        
        
        
    }
};