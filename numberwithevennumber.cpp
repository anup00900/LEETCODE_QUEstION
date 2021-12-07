class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int res=0;
        if(nums.size()==0)
        {
            return(0);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            int r = nums[i];
            int c=0;
            while(r)
            {
                r=r/10;
                c++;
            }
           if(c%2==0)
           {
                res=res+1;
               
           }
           
        }
        return res;
        
    }
};