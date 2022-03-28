class Solution {
public:
    int minOperations(int n) {
        
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(2*i+1);
        }
        int t=accumulate(v.begin(),v.end(),0);
        if(t%2==0)
        {
            t=(t/n);
        }
        else
        {
            t=(t/n);
        }
        
        int op=0;
        for(int i=0;i<(n/2);i++)
        {
            op=op+abs(t-v[i]);
        }
        return op;
        
        
    }
};