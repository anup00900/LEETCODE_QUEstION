class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int ma=INT_MIN;
        int mi=INT_MAX;
        int mai=-1;
        int mii=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>ma)
            {
                ma=nums[i];
                mai=i;
            }
            if(nums[i]<mi)
            {
                mi=nums[i];
                mii=i;
            }
        }
        cout<<mi<<ma<<" ";
        int n=nums.size();
       
        //del from left
        int mal = max(mii,mai)+1;
        //del from right
        int mar = n-min(mii,mai);
        //del from both left and right
        int p1=nums.size()-(mai+1)+1;
        int p2=nums.size()-(mii+1)+1;
        
        int min_del_max=min(mai+1,p1);
        int min_del_min=min(mii+1,p2);
        int p=min_del_max+min_del_min;
        
        return(min(min(p,mar),mal));
        
        
        
        
        
        
        
        
        
    }
};