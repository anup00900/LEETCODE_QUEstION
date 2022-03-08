class Solution {
      
public:
     int sub(int n,vector<int>& arr,int tar,vector<vector<int>>&t)
    {
        if(n==0)
        {
            return 0;
        }
        if(tar==0)
        {
            return 1;
        }
        if(t[n][tar]!=-1)
        {
            return t[n][tar];
        }
        if(arr[n-1]<=tar)
        {
            return(t[n][tar]=sub(n-1,arr,tar-arr[n-1],t) or sub(n-1,arr,tar,t));
        }
        else
        {
            return(t[n][tar]=sub(n-1,arr,tar,t));
        }
        
    }

    bool canPartition(vector<int>& arr) {
        
        int N=arr.size();
        int s=0;
       
       
        for(int i=0;i<N;i++)
        {
            s=s+arr[i];
        }
        vector<vector<int>>t(201,vector<int>(s+1,-1));
       
        if(s%2==1)
        {
            return 0;
        }
        int tar=s/2;
        return(sub(N,arr,tar,t));
        
    }
};



 
    

   
    

