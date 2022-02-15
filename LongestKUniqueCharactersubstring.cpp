class Solution{
  public:
    int longestKSubstr(string s, int k) {
    
    unordered_map<char,int>umap;
    int i=0,m=-1,j=0;
    while(i<s.length())
    {
        umap[s[i]]++;
        int si = umap.size();
        if(si < k)
        {
            i++;
        }
        else if(si == k)
        {
            m=max(m,(i-j+1));
            i++;
        }
        else if(si > k)
        {
            while(umap.size()>k)
            {
                umap[s[j]]--;
                if(umap[s[j]]==0)
                {
                    umap.erase(s[j]);
                }
                j++;
            }
            i++;
        }
       
    }
    return(m);
    
    
    
    }
};