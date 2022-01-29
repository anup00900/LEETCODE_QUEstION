class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        
        vector<int>prefix;
        vector<int>suffix;
        int k=0;
        int p=0;
        prefix.push_back(nums[0]);
        suffix.push_back(nums[nums.size()-1]);
        for(int i=1;i<nums.size();i++)
        {
            prefix.push_back(max(nums[i],prefix[k++]));
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            suffix.push_back(min(nums[i],suffix[p++]));
        }
        reverse(suffix.begin(),suffix.end());
        for(int i=1;i<nums.size();i++)
        {
           if(prefix[i-1] <= suffix[i])
           {
               return i;
           }
        }
        return 0;
    }
};