class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        vector<int>prefix;
        vector<int>suffix;
        prefix.push_back(nums[0]);
        suffix.push_back(nums[nums.size()-1]);
        int k=0;
        int p=0;
        for(int i=1;i<nums.size();i++)
        {
            prefix.push_back(prefix[k++]+nums[i]);
        }
         for(int i=nums.size()-2;i>=0;i--)
        {
            suffix.push_back(suffix[p++]+nums[i]);
        }
        reverse(suffix.begin(),suffix.end());
        for(int i=0;i<nums.size();i++)
        {
            if(prefix[i]==suffix[i])
            {
                return i;
            }
        }
        return(-1);
        
    }
};