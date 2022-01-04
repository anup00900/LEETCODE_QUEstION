class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int two = target-(nums[i]+nums[j]);
                int f=j+1;
                int b=nums.size()-1;
                while(f<b)
                {
                     if((nums[f]+nums[b])==two)
                     {
                         vector<int>v(4,0);
                         v[0]=(nums[i]);
                         v[1]=(nums[j]);
                         v[2]=(nums[f]);
                         v[3]=(nums[b]);
                         res.push_back(v);
                         
                         while(f<b && v[2]==nums[f])
                         {
                             f++;
                         }
                          while(f<b && v[3]==nums[b])
                         {
                             b--;
                         }
                     }
                     else if((nums[f]+nums[b]) < two)
                     {
                         f++;
                     }
                     else
                     {
                         b--;
                     }
                  
                    
                }
                 while(j+1<nums.size() && nums[j]==nums[j+1])
                 {
                        j++;
                 }
            }
            while(i+1<nums.size() && nums[i]==nums[i+1])
                 {
                        i++;
                 }
        }
        return res;
        
        
    }
};