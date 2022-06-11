class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        
        
        int sum = accumulate(nums.begin(),nums.end(),0);
        int t=sum-x;
        if(t<0)
        {
            return -1;
        }
        int right=0;
        int left=0;
        int cs=0;
        int m=INT_MIN;
        for(int right=0;right<nums.size();right++)
        {
            cs=cs+nums[right];
           
            while(cs>t)
            {
                cs=cs-nums[left++];
            }
            if(cs==t)
            {
                m=max(m,right-left+1);
               
            }
        }
        if(m==INT_MIN)
        {
            return -1;
        }
        return(nums.size()-m);
        
        
        
    }
};