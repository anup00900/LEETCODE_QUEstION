class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string>v;
        if(nums.size()==0)
        {
            return v;
        }
        if(nums.size()==1)
        {
            v.push_back(to_string(nums[0]));
            return v;
        }
        
        int i=1;
        int j=0;
        while(i<nums.size())
        {
            if(nums[i]==nums[i-1]+1)
            {
                i++;
            }
            else
            {
                 
                if(i-1==j)
                {
                   v.push_back(to_string(nums[j]));
                }
                else
                {
                    v.push_back(to_string(nums[j])+"->"+to_string(nums[i-1]));
                }
                j=i;
                i++;
                
                
            }
        }
        if(i>=nums.size()&&j<nums.size())
        {
            if(i-1==j)
                {
                   v.push_back(to_string(nums[j]));
                }
                else
                {
                    v.push_back(to_string(nums[j])+"->"+to_string(nums[i-1]));
                }
        }
        return v;
        
    }
};