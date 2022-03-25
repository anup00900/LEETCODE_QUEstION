class Solution {
public:
    int longestPalindrome(string s) {

        
        unordered_map<char,int>umap;
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]++;
        }
        int c=0;
        int f=0;
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            if(it->second%2==0)
            {
                c+=it->second;
            }
            else
            {
                c+=(it->second/2)*2;
                f=1;
            }
        }
        if(f==1)
        {
            return(c+1);
        }
        return c;
        
        
        
    }
};