class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closesum=nums[0]+nums[1]+nums[nums.size()-1];
        int currsum=0;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                 currsum=nums[i]+nums[j]+nums[k];
                 if(currsum > target)
                 {
                      k--;
                 }
                else
                {
                    j++;
                }
                if(abs(currsum - target) <= abs(closesum - target))
                {
                    closesum = currsum;
                }
            }
           
        }
        return closesum;
    }
};