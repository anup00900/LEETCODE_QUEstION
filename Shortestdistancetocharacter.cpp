class Solution {
public:
    
    multimap<int,int>umap;
    vector<int> shortestToChar(string s, char c) {
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                umap.insert({c,i});
            }
        }
        vector<int>ans;
        for(int i=0;i<s.length();i++)
        {
            int t=INT_MAX;
            for(auto it=umap.begin();it!=umap.end();it++)
            {
                t=min(t,abs(it->second-i));
            }
            ans.push_back(t);
        }
        
        return ans;
        
        
        
        
        
    }
};