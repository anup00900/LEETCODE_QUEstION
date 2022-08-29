class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
        unordered_map<char,bool>umap2;
        unordered_map<char,char>umap1;
        int n=str1.length();
        int m=str2.length();
        if(n!=m)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(umap1[str1[i]])
            {
                if(umap1[str1[i]]!=str2[i])
                {
                    return 0;
                }
            }
            else if(umap2[str2[i]])
            {
                return 0;
            }
            else
            {
                umap1[str1[i]]=str2[i];
                umap2[str2[i]]=1;
            }
        }
        return 1;
    }
};