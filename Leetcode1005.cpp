class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0 and k>0)
            {
                nums[i]=-1*nums[i];
                k--;
            }
        }
        if(k==0)
        {
            int s= accumulate(nums.begin(),nums.end(),0);
            return s;
        }
        sort(nums.begin(),nums.end());
        
        while(k>0)
        {
            nums[0]=nums[0]*(-1);
            k--;
        }
        
        int s= accumulate(nums.begin(),nums.end(),0);
            return s;
        
        
    }
};