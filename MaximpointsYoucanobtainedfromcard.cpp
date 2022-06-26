class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        
        
        int s = accumulate(cp.begin(),cp.end(),0);
        
        int w = cp.size()-k;
        
        
        int m=0;
        int i=0,cs=0;
        int j;
        for(j=0;j<w;j++)
        {
            cs=cs+cp[j];
        }
       
        m=s-cs;
        while(j<cp.size())
        {
            cs=cs-cp[i++];
            cs=cs+cp[j++];
            m=max(m,s-cs);
            cout<<m<<" ";
            
            
            
        }
        
        return m;
        
    }
};