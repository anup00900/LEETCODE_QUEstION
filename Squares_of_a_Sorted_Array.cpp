class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>v(nums.size());
        int i=0;
        int j=nums.size()-1;
        int p=nums.size()-1;
        if(nums[0]>0)
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=nums[i]*nums[i];
            }
            return(nums);
        }
        
        while(i<=j)
        {
            if(abs(nums[i])<abs(nums[j]))
            {
                v[p--]=nums[j]*nums[j];
                
                j--;
            }
            else
            {
                v[p--]=nums[i]*nums[i];
                i++;
            }
        }
        
         
            return(v);
        
    }
};