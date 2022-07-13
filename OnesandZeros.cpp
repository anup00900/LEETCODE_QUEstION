class Solution {
public:
    
    int t[601][101][101];
    int subset(vector<string>& strs,int z,int o,int n,int s)
    {
        if(s>=n)
        {
            return 0;
        }
        if(z<=0 and o<=0)
        {
            return 0;
        }
        if(t[s][z][o]!=-1)
        {
            return t[s][z][o];
        }
        
        int ze=count(strs[s].begin(),strs[s].end(),'0');
        int on=count(strs[s].begin(),strs[s].end(),'1');;
        
       
        
        if(ze<=z and on<=o)
        {
            return t[s][z][o]=max(1+subset(strs,(z-ze),(o-on),n,s+1),subset(strs,z,o,n,s+1));
        }
        else
        {
            return t[s][z][o]=subset(strs,z,o,n,s+1);
        }
        
        
    }
    int findMaxForm(vector<string>& strs, int z, int o) {
        
        
        
        int n = strs.size();
        memset(t,-1,sizeof(t));
        return subset(strs,z,o,n,0);
        
        
        
    }
};