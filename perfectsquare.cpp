class Solution {
public:
    bool isPerfectSquare(int x) {
        
        int ans=0;
        
        for(long long i=1;i*i<=x;i++)
        {
            if(i*i == x)
            {
                return(i);
            }
            
        }
        return(ans);
        
    }
};