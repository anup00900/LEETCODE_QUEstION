class Solution {
public:
    int m(int s,int t,int f)
    {
        if(t<=1)
        {
            return(0);
        }
        if(t%2==0 and f)
        {
            return(1+m(s,t/2,f-1));
        }
        //In order to remove repetetive call ,We can do this step.
        if(f==0)
        {
            return t-1;
        }
        return(1+m(s,t-1,f));
    }
    int minMoves(int target, int maxDoubles) {
        
        int s=1;
        return(m(s,target,maxDoubles));
        
    }
};