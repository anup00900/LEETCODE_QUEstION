class Solution {
public:
    bool judgeSquareSum(int c) {
        
        
        int p = sqrt(c);
        long i=0;
        long j=p;
        while(i<=j)
        {
            if(i*i + j*j == c)
            {
                return 1;
            }
            else if(i*i + j*j < c)
            {
                i=i+1;
            }
            else
            {
                j=j-1;
            }
        }
        return 0;
        
    }
};