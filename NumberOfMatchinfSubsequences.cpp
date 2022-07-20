class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        unordered_map<string,int>umap;
        for(auto x:words)
        {
            umap[x]++;
        }
        int c=0;
        
        for(auto x:umap)
        {
            string w = x.first;
            int i=0;
            int j=0;
            while(i<s.length() and j<w.length())
            {
                if(s[i]==w[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    i++;
                }
            }
            if(j==w.length())
            {
                c+=x.second;
            }
        }
        return c;
        
    }
};