class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i=nums.size()-1;
        int j=0;
        while(i>0)
        {
            if(nums[i-1]<nums[i] )
            {
                
                break;
            }
            i--;
        }
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        int p=i-1;
        int ele = p+1;
        for(int j=p+2;j<nums.size();j++)
        {
            if((nums[j]<=nums[ele]) && (nums[j]>nums[p]))
            {
                ele=j;
            }
        }
        swap(nums[ele],nums[p]);
        reverse(nums.begin()+p+1,nums.end());
       
        
    }
};