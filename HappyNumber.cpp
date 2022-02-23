class Solution {
public:
    bool isHappy(int n) {
        
        
        if(n==1||n==7)
        {
            return 1;
        }
        else if(n==2||n==3||n==4||n==5||n==6||n==8||n==9)
        {
            return 0;
        }
        int s=0;
        while(n)
        {
            int r=n%10;
            s=s+r*r;
            n=n/10;
        }
        return(isHappy(s));
        
        
        
        
        
        
    }
};