class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        
        vector<int>v1;
        vector<int>v2;
        
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                v2.push_back(nums[i]);
            }
            else
            {
                v1.push_back(nums[i]);
            }
        }
        int i=0;
        int j=0;
        int k=0;
        while(i<v1.size()&&j<v2.size())
        {
            nums[k++]=v2[j++];
            nums[k++]=v1[i++];
        }
        
        return nums;
        
    }
};