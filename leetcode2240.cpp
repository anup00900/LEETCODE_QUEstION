class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        
        
        long long int t = total/cost2;
       // cout<<t<<endl;
        
        long long int c=t;
        
        for(int i=0;i<=t;i++)
        {
            int to=total;
            to=to-i*cost2;
            //cout<<to/cost1<<" ";
            c=c+to/cost1;
            //cout<<c<<" "<<endl;
            
        }
        return c+1;
        
    }
};