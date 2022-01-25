class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        //a+b > c
        //c>a
        //c>b
        if(nums.size()<3)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=2;i<nums.size();i++)
        {
            int j=0;
            int k=i-1;
            while(j<k)
            {
                if(nums[j]+nums[k]>nums[i])
                {
                    c=c+(k-j);
                    k--;
                   
                }
                else if(nums[j]+nums[k]<=nums[i])
                {
                    j++;
                }
               
            }
        }
        return c;
        
        
    }
};