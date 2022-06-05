class Solution {
public:
    bool digitCount(string num) {
        
        unordered_map<int,int>umap;
        for(int i=0;i<num.length();i++)
        {
            umap[num[i]-'0']++;
        }
        for(int i=0;i<num.length();i++)
        {
            if(umap.find(i)==umap.end())
            {
                umap[i]=0;
            }
        }
        for(int i=0;i<num.length();i++)
        {
            if(umap[i]!=(num[i]-'0'))
            {
                return 0;
            }
        }
        return 1;
        
        
    }
};