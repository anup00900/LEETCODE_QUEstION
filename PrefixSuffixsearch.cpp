class WordFilter {
public:
    unordered_map<string,int>umap;
    
    WordFilter(vector<string>& words) {
        
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                string pref = words[i].substr(0,j+1);
                for(int k=words[i].size()-1;k>=0;k--)
                {
                    string suff = words[i].substr(k);
                    string key=pref+'#'+suff;
                    umap[key]=i;
                }
            }
        }
    }
    
    int f(string pref, string suff) {
        
        string key=pref+'#'+suff;
        
        if(umap.find(key)!=umap.end())
        {
            return umap[key];
        }
        return -1;
        
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(pref,suff);
 */