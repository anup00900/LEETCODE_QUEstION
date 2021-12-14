class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool>v(n+1,1);
        
        v[0]=v[1]=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(v[i])
            {
                for(int j=2;i*j<=(n);j++)
                {
                    v[i*j]=0;
                }
            }
            
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
            {
                ans++;
            }
        }
        
        return(ans);
        
        
    }
};