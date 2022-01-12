class Solution {
public:
    bool checkInclusion(string p, string s) {
        
        if(p.length()>s.length())
        {
            return 0;
        }
        int k = p.length();
        int count;
        unordered_map<char,int>umap;
        for(int i=0;i<k;i++)
        {
            umap[p[i]]++;
        }
        count=umap.size();
        
        for(int i=0;i<k;i++)
        {
            if(umap.find(s[i])!=umap.end())
            {
                umap[s[i]]--;
                if(umap[s[i]]==0)
                {
                    count--;
                }
            }
            
        }
        int ans=0;
        if(count == 0)
        {
            return 1;
        }
        
        int i=0;
        int j=k;
        while(j<s.length())
        {
            
            if(umap.find(s[i])!=umap.end())
            {
                umap[s[i]]++;
                if(umap[s[i]]==1)
                {
                    count++;
                }
            }
            i++;
            if(umap.find(s[j])!=umap.end())
            {
                umap[s[j]]--;
                if(umap[s[j]]==0)
                {
                    count--;
                }
            }
            if(count==0)
            {
                return 1;
            }
            j++;
          
        }
        return 0;
        
        
    }
};