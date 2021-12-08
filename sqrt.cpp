class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        
        for(long long i=1;i*i<=x;i++)
        {
            if(i*i == x)
            {
                return(i);
            }
            else if(i*i < x)
            {
                ans = i;
            }
        }
        return(ans);
        
    }
};