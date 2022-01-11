class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        
        int f = 0;
        int m = 0;
        
        int end = 0;
        int start =0;
        while(end < nums.size())
        {
            if(nums[end]==1)
            {
                end++;
            }
            else
            {
                if(f <k)
                {
                    f++;
                    end++;
                }
                else
                {
                    while(f == k)
                    {
                        if(nums[start] == 0)
                        {
                            f--;
                        }
                        start++;
                    }
                }
            }
            m=max(m,(end-start));
        }
        
        
        return m;
        
    }
};