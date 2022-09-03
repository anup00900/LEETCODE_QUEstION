class Solution {
public:
    int minNumberOfHours(int ie, int iexp, vector<int>& energy, vector<int>& exp) {
        
        
        
        int n = energy.size();
        
        int c1=0;
        int c2=0;
        
        for(int i=0;i<n;i++)
        {
            if(ie>energy[i])
            {
                ie=ie-energy[i];
            }
            else
            {
                int d=energy[i]-ie+1;
                ie=ie+d;
                ie=ie-energy[i];
                c1=c1+d;
            }
        }
        cout<<c1<<" ";
        for(int i=0;i<n;i++)
        {
            if(iexp>exp[i])
            {
                iexp+=exp[i];
            }
            else
            {
                int d=exp[i]-iexp+1;
                c2+=d;
                iexp+=d+exp[i];
            }
        }
        cout<<c2<<" ";
        
        
        
        
        
        
        return(c1+c2);
        
        
        
    }
};