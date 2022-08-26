class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string ans = to_string(n);
        sort(ans.begin(),ans.end());
        //cout<<ans<<" ";
        vector<string>v;
        for(int i=0;i<=30;i++)
        {
            string p = to_string((int)pow(2,i));
            v.push_back(p);
        }
        for(int i=0;i<v.size();i++)
        {
            sort(v[i].begin(),v[i].end());  
            //cout<<v[i]<<" ";
            if(v[i] == ans)
            {
                return 1;
            }
        }
        
        return 0;
        
        
        
    }
};