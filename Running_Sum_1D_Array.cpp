class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
        int s=nums[0];
         v.push_back(s);
        for(int i=1;i<nums.size();i++)
        {
            s=s+nums[i];
            v.push_back(s);
            
        }
        return v;
        
    }
};