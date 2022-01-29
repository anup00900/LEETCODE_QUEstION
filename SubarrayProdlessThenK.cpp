class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
       /* int prod=1;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            prod=1;
            for(int j=i;j<nums.size();j++)
            {
                prod=prod*nums[j];
                if(prod < k)
                {
                    c=c+1;
                }
            }
        }
        return c;
        */
        if(k<=1)
        {
            return 0;
        }
        int left=0,right=0;
        int c=0;
        int prod=1;
        int n=nums.size();
        while(right < n)
        {
            prod = prod*nums[right];
            if(prod < k)
            {
                c=c+1+(right-left);
            }
            else if(prod>=k)
            {
                while(prod >=k)
                {
                     prod=prod/nums[left++];
                }
               c=c+1+(right-left);
                
            }
            right++;
        }
        
        return c;
    }
};