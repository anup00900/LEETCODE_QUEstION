class Solution {
    
    
    int t[39]={0};
    
public:
    int tribonacci(int n) {
        
        t[1]=1;
        t[2]=1;
        
        if(n==0)
        {
            return 0;
        }
        if(n==1||n==2)
        {
            return 1;
        }
        for(int i=3;i<=n;i++)
        {
            t[i]=t[i-1]+t[i-2]+t[i-3];
        }
        return t[n];
        
        
        
        
        
    }
};