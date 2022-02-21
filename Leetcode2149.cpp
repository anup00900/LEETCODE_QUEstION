class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      //NOT EFFiECENT WAY  
      /*  vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                odd.push_back(nums[i]);
            }
            else 
            {
                even.push_back(nums[i]);
            }
        }
        int i=0;
        int j=0;
        int f=0;
        vector<int>ans;
        while(i<odd.size() && j<even.size())
        {
            if(f==0)
            {
                ans.push_back(odd[i]);
                i++;
                f=1;
            }
            else
            {
                ans.push_back(even[j]);
                j++;
                f=0;
            }
        }
        ans.push_back(even[even.size()-1]);
        return ans;*/
        
        //EFFIEcent Way
        int i=0;
        int j=1;
        int k=0;
        
        vector<int>ans(nums.size(),0);
        for(int l=0;l<nums.size();l++)
        {
            if(nums[l]>0)
            {
                ans[i]=nums[l];
                i=i+2;
                
                
            }
            else
            {
                ans[j]=nums[l];
                j=j+2;
            }
        }
        return ans;
        
        
        
        
        
    }
};