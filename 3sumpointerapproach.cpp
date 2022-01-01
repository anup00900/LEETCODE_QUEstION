class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>v;
        set<vector<int>>s;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        if(n < 3)
        {
            return v;
        }
        for(int i=0;i<n;i++)
        {
           
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    
                    
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    
                }
                else if(nums[i]+nums[j]+nums[k] < 0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        for(auto i:s)
        {
            v.push_back(i);
        }
        return v;
        
        
        
    }
};