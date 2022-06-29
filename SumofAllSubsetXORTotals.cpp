class Solution {
public:
    vector<vector<int>>ans;
    void sub(int i,vector<int>&nums,vector<int>&v)
    {
        if(i>=nums.size())
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        sub(i+1,nums,v);
        v.pop_back();
        sub(i+1,nums,v);
    }
    int subsetXORSum(vector<int>& nums) {
        
        vector<int>v;
        sub(0,nums,v);
        int sum=0;
        
        for(int i=0;i<ans.size();i++)
        {
            int x=0;
            for(int j=0;j<ans[i].size();j++)
            {
                //cout<<ans[i][j]<<"-";
                x=x^ans[i][j];
                //cout<<x<<"--";
               
            }
             sum=sum+x;
                //cout<<sum<<"---";
        }
        return sum;
        
        
        
        
        
    }
};