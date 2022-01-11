class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        
        vector<int>v1;
        vector<int>v2(nums.size(),0);
        int l=1;
        int r=1;
        
        for(int i=0;i<nums.size();i++)
        {
            l=l*nums[i];
            v1.push_back(l);
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            r=r*nums[i];
            v2[i]=r;
        }
        
        vector<int>out;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                out.push_back(v2[i+1]);
            }
            else if(i==nums.size()-1)
            {
                out.push_back(v1[i-1]);
            }
            else
            {
                out.push_back(v1[i-1]*v2[i+1]);
            }
        }
        return out;
        
    
        
        
    }
};