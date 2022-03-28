class Solution {
public:
    int search(vector<int>& nums, int t) {
        
        int l=0;
        int h=nums.size()-1;
        
        while(l<=h)
        {
            
            int mid =l+(h-l)/2;
            
            if(nums[mid]==t)
            {
                return mid;
            }
            else if(nums[l]<=nums[mid])
            {
                if(nums[l]<=t and t<=nums[mid])
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            else
            {
                if(nums[mid]<=t and t<=nums[h])
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
            
            
        }
        return -1;
        
        
        
    }
};