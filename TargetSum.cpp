LOGIC USED

Let Two Subset be S1 and S2,Whose difference is equal to target as given in question.
Now

S1-S2=Target (1)

S1+S2=Total_Sum_Of_Array (2)

Subtracting Equation 1 from Equation 2.We will get:

2*S2 = Total_Sum_Of_Array-Target

Now Total_Sum_Of_Array-Target have to Even as it is equal to 2*S2 if It not Even return 0.

Now Applying Logic of Subset sum equal to given sum Logic where Target is S2,We will get Our count(Ans).

class Solution {
public:
    
    int count(vector<int>& v, int tar,int n,vector<vector<int>>&t)
    {
        
        if(n==0 and tar==0)
        {
            return 1;
        }
        if(n==0)
        {
            return 0;
        }
        if(t[n][tar]!=-1)
        {
            return t[n][tar];
        }
        
        if(v[n-1]<=tar)
        {
            return(t[n][tar]=count(v,tar-v[n-1],n-1,t) + count(v,tar,n-1,t));
        }
        else
        {
            return(t[n][tar]=count(v,tar,n-1,t));
        }
        
        
        
    }
    
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int sum=accumulate(nums.begin(),nums.end(),0);
        
        
       
        int dif = (sum-target);
        if(target>sum || (dif)%2!=0)
        {
            return 0;
        }
        vector<vector<int>>t(nums.size()+1,vector<int>((dif)/2+1,-1));
       
        return(count(nums,(dif)/2,nums.size(),t));
        
    }
};