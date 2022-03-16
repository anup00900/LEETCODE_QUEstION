class Solution {
public:
    
    int r(vector<int>& nums,vector<int>& t,int n)
    {
        
        if(n<=0)
        {
            return 0;
        }
        if(n==1)
        {
            return nums[0];
            
        }
        if(t[n]!=-1)
        {
            return t[n];
        }
        
        
        int l = r(nums,t,(n-1));
        int ri=nums[n-1]+r(nums,t,n-2);
        return(t[n]=max(l,ri));
    }
    
    
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        vector<int>t1(n+1,-1);
        vector<int>t2(n+1,-1);
        vector<int>temp1;//storing element from 0 to n-2 ,leaving the last element
        vector<int>temp2;//storing element from 1 to n-1.leaving the 0th element
        for(int i=0;i<nums.size()-1;i++)
        {
            temp1.push_back(nums[i]);
        }
        for(int i=1;i<nums.size();i++)
        {
            temp2.push_back(nums[i]);
        }
        
        return(max(r(temp1,t1,n-1),r(temp2,t2,n-1)));
        
    }
};