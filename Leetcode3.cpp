class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>umap;
        int m=0;
        int i=0,j=0;
        while(i < s.length())
        {
            umap[s[i]]++;
            int k=umap.size();
            if(k == (i-j+1) )
            {
                m=max(m,(i-j+1));
            }
            else if(k<(i-j+1))
            {
                while(umap.size()!=(i-j+1))
                {
                    umap[s[j]]--;
                    if(umap[s[j]]==0)
                    {
                         umap.erase(s[j]);
                    }
                    j++;
                }
                
            }
            i++;
        }
        return m;
        
    }
};