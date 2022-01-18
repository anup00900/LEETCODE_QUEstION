class Solution {
public:
    void per(vector<int>&nums,int i,int n,set<vector<int>>&s)
    {
        if(i==n)
        {
            s.insert(nums);
            return;
        }
        for(int j=i;j<=n;j++)
        {
            swap(nums[i],nums[j]);
            per(nums,i+1,n,s);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>>s;
        int n=nums.size()-1;
        per(nums,0,n,s);
        vector<vector<int>>r;
        for(auto i:s)
        {
            r.push_back(i);
        }
        return r;
        
    }
};