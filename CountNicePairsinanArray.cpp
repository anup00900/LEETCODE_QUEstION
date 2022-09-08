class Solution {
public:
    int rev(int n)
    {
        int p=0;
        while(n)
        {
            
            p=p*10+n%10;
            n/=10;
        }
        return p;
    }
    int countNicePairs(vector<int>& nums) {
        
        int c=0;
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
        {
            int t = nums[i]-rev(nums[i]);
            if(umap.count(t)!=0)
            {
                c=(c+umap[t])%1000000007;
            }
            umap[t]++;
        }
        return c;  
    }
};