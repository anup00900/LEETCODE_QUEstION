class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-2;
        int h=nums.size()-1;
        int c=0;
    
        while(l<=r)
        {
            
            if(l==r)
            {
                l=0;
                r=h-2;
                h=h-1;
                continue;
            }
            if(nums[l]+nums[r]>nums[h])
            {
              
                c=c+(r-l);
                r--;
               
              
            }
            else
            {
                 l++;
            }
               
        
            if(h==2)
            {
                break;
            }
            
        }
        return c;
        
    }
};