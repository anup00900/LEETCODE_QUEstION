class Solution {
public:
    bool search(vector<int>& nums, int t) {
        
        int l=0;
        int h=nums.size()-1;
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(t == nums[mid])
            {
                return 1;
            }
            else if(nums[l]<nums[mid])
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
            else if(nums[l]>nums[mid])
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
            else
            {
                l++;
            }
        }
        return 0;
        
    }
};