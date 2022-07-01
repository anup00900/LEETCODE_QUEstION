class Solution {
public:
    bool ok(vector<int>& w, int m,int d)
    {
        int c=1,l=0;
        for(int i=0;i<w.size();i++)
        {
            l=l+w[i];
            if(l>m)
            {
                c++;
                l=w[i];
            }
        }
        if(c>d)
        {
            return 0;
        }
        return 1;
        
    }
    int shipWithinDays(vector<int>& w, int d) {
        
        int l= *max_element(w.begin(),w.end());
        cout<<l<<" ";
        int h= accumulate(w.begin(),w.end(),0);
        cout<<h<<" ";
        int m;
        while(l<h)
        {
            m=(l+(h-l)/2);
            if(ok(w,m,d))
            {
                h=m;
            }
            else
            {
                l=m+1;
            }
            
        }
        
        return l;
        
        
        
    }
};