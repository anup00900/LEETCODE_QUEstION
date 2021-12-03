class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int c=0,res=0;
        if(nums[0]==1)
        {
            c=1;
        }
        for(int i=1;i<nums.size();i++)
        {
            
            if(nums[i]==1)
            {
                c++;
            }
            else if(nums[i]==0)
            {
                res = max(c,res);
                c=0;
            }
        }
        res = max(c,res);
        return(res);
        
        
    }
};