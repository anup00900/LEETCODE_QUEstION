class Solution {
public:
    
    bool static cmp(string &s1,string &s2)
    {
        if(s1.length()!=s2.length())
        {
            return s1.length()>s2.length();
        }
        return s1>s2;
    }
    
    string kthLargestNumber(vector<string>& nums, int k) {
        
        sort(nums.begin(),nums.end(),cmp);
        return nums[k-1];
        
    }
};