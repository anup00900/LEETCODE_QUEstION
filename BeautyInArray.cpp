class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        
        vector<int>v1;
        vector<int>v2;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                v1.push_back(nums[0]);
            }
            else
            {
                v1.push_back(max(nums[i],v1[k++]));
            }
        }
        int p=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i==nums.size()-1)
            {
                v2.push_back(nums[i]);
            }
            else
            {
                v2.push_back(min(nums[i],v2[p++]));
            }
        }
        reverse(v2.begin(),v2.end());
        int beauty=0;
        for(int i=1;i<nums.size()-1;i++)
        {
            int j=i-1;
            int k=i+1;
            if(nums[i]>v1[j] && nums[i]<v2[k])
            {
                beauty+=2;
            }
            else if(nums[i]>nums[j] && nums[i]<nums[k])
            {
                beauty+=1;
            }
        }
        return beauty;
        
        
        
        
        
        
    }
};