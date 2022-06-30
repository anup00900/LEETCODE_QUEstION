class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        //sort the array
        sort(nums.begin(),nums.end());
       
        //find the median
        
        int n=nums.size(),m=0;
        if(n%2==0)
        {
            m=(nums[n/2]+nums[n/2-1])/2;
        }
        else
        {
            m=nums[n/2];
        }
        //find min number of operations
        int c=0;
        for(auto i : nums)
        {
            c=c+abs(i-m);
        }
        return c;
        
    }
};