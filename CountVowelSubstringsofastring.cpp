class Solution {
public:
    int countVowelSubstrings(string word) {
        
        int n = word.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int>umap;
            for(int j=i;j<n;j++)
            {
                if(!(word[j] == 'a' or word[j] == 'e' or word[j] == 'i' or word[j] == 'o' or word[j] == 'u'))
                {
                    break;
                }
                umap[word[j]]++;
                if(umap.size()==5)
                {
                    c++;
                }
            }
        }
        return c;
    }
};