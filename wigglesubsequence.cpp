class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        int v=1;
        int p=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                p=v+1;
            }
            else if(nums[i-1]>nums[i])
            {
                v=p+1;
            }
        }
        return max(p,v);
        
    }
};