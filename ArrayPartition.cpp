class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int s=0;
        for(int i=0;i<nums.size()-1;i=i+2)
        {
            s=s+min(nums[i],nums[i+1]);
        }
        return s;
        
    }
};