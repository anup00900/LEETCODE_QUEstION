class Solution {
public:
    vector<int>nums;
    bool subset(int &t,int s,vector<int>&vis,int r,int k)
    {
        
        if(s==t)
        {
            return subset(t,0,vis,0,k-1);
        }
        if(k == 1)
        {
            return 1;
        }
        
        
        for(;r<nums.size();r++)
        {
            if(vis[r] or s+nums[r]>t)
            {
                continue;
            }
            
            vis[r]=1;
            if(subset(t,s+nums[r],vis,r+1,k))
            {
                return 1;
            }
            vis[r]=0;
            if(s==0)
            {
                break;
            }
        }
        return 0;
    }
    bool canPartitionKSubsets(vector<int>& nus, int k) {
        
        int sum = accumulate(nus.begin(),nus.end(),0);
        if(sum%k !=0  )
        {
            return 0;
        }
        int n=nus.size();
        vector<int>vis(n,0);
        sort(nums.begin(),nums.end());
        int t = sum/k;
        int s=0,r=0;
        nums=nus;
        return subset(t,s,vis,r,k);
        
        
        
        
        
    }
};