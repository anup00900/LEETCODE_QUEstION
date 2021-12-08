class Solution {
public:
    int trap(vector<int>& h) {
        
        vector<int>l(h.size(),0);
        vector<int>r(h.size(),0);
        int m,s=0;
        
        
        for(int i=0;i<h.size();i++)
        {
            if(i==0)
            {
                l[i]=h[i];
                m=h[i];
            }
            else
            {
                l[i]=max(m,h[i]);
                m=l[i];
            }
        }
        
        for(int i=h.size()-1;i>=0;i--)
        {
            if(i==h.size()-1)
            {
                r[i]=h[i];
                m=h[i];
            }
            else
            {
                 r[i]=max(m,h[i]);
                 m=r[i];
                
            }
        }
        
        for(int i=0;i<h.size();i++)
        {
            s += min(l[i],r[i])-h[i];
        }
        return(s);
        
    }
};