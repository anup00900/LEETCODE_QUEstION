class Solution {
public:
    int countEven(int num) {
        
        int c=0;
        for(int i=1;i<=num;i++)
        {
            long long int s=0;
            long long int t=i;
            while(t)
            {
                long long int r=t%10;
                s=s+r;
                t=t/10;
            }
            if(s%2==0)
            {
                c++;
            }
        }
        return c;
        
        
        
    }
};