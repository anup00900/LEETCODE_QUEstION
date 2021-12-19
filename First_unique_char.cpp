class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int>umap;
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]++;
        }
        int m=-1;
        for(auto i=0;i<s.length();i++)
        {
            if(umap[s[i]]==1)
            {
                return(i);
            }
        }
        return(m);
        
        
    }
};