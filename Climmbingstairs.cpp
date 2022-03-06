class Solution {
    int t[46]={0};
public:
    
    
   
    int climbStairs(int n) {
        
        t[0]=1;
        t[1]=1;
        if(n==0||n==1)
        {
            return 1;
        }
        for(int i=2;i<=n;i++)
        {
            t[i]=t[i-1]+t[i-2];
        }
        return t[n];
        
        
        
    }
};