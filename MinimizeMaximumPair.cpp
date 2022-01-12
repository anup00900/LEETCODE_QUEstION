class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        vector<pair<int,int>>v;
        
        while(i<j)
        {
            v.push_back({nums[i],nums[j]});
            i++;
            j--;
        }
        
        int s=0;
        int m=0;
        for(auto it:v)
        {
            m=max(m,(it.first+it.second));
        }
        return m;
        
    }
};