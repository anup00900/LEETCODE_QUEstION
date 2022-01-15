class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=INT_MIN;
        int p=1;
        for(int i=0;i<nums.size();i++)
        {
            
            
                p=p*nums[i];
                m=max(m,p);
            if(p==0)
            {
                p=1;
            }
            
        }
       int p1=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            
            
                p1=p1*nums[i];
                m=max(m,p1);
            if(p1==0)
            {
                p1=1;
            }
            
        }
        return m;
    }
};