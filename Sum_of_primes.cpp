class Solution{
public:
    int primeSum(int N){
        // code here
        int flag=0,sum=0,c=0;
        while(N)
        {
            int r = N%10;
             c=0;
            for(int i=1;i<=r;i++)
            {
               
                if(r%i==0)
                {
                    c++;
                    if(c>=3)
                {
                    flag=1;
                    break;
                    
                }
                    
                }
            }
            if(flag==0 && r != 1)
            {
                sum=sum+r;
            }
            N=N/10;
            flag=0;
        }
        return(sum);
    }
};