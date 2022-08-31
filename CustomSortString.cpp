class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char,int>umap;
        
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]++;
        }
        
        string ans="";
        
        for(int i=0;i<order.length();i++)
        {
            while(umap[order[i]]>0)
            {
                ans+=order[i];
                umap[order[i]]--;
               
            }
            
        }
        cout<<ans<<" ";
        for(auto it=umap.begin();it!=umap.end();it++)
        {
               while(it->second>0)
                {
                    ans+=it->first;
                    it->second=it->second-1;
                }
            
        }
        return ans;
        
        
    }
};