class Solution {
public:
    char repeatedCharacter(string s) {
        
        
        unordered_map<char,int>umap,umap2;
        for(int i=0;i<s.length();i++)
        {
            if(umap[s[i]]==2)
            {
                continue;
            }
            umap[s[i]]++;
            umap2[s[i]]=i;
        }
          int m=INT_MAX;
        for(int i=0;i<s.length();i++)
        {
            if(umap[s[i]]>=2)
            {
                m=min(m,umap2[s[i]]);
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(umap2[s[i]]==m)
            {
                return s[i];
            }
        }
        return 'a';
    }
};