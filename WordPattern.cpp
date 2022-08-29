class Solution {
public:
    bool wordPattern(string pat, string s) {
        
        
        unordered_map<char,string>umap1;
        unordered_map<string,bool>umap2;
        
        int n=pat.length();
        int m=s.length();
        
        
        int c=0;
        int k=0;
        while(k<m)
        {
            string a="";
            while(k<m and s[k]!=' ')
            {
                a+=s[k++];
            }
            k++;
            c++;
        }
        if(c != n)
        {
            return 0;
        }
        
        int i=0;
        int j=0;
         
        for(i=0;i<n;i++)
        {
            string ans="";
            while(j<m and s[j]!=' ')
            {
                ans+=s[j++];
            }
            j++;
           
            
            if(umap1.find(pat[i])!=umap1.end())
            {
                if(umap1[pat[i]]!=ans)
                {
                    return 0;
                }
            }
            else if(umap2[ans])
            {
                return 0;
            }
            else
            {
                 umap1[pat[i]]=ans;
                 umap2[ans]=1;
            }
               
            
            
        }
        if(j<m)
        {
            return 0;
        }
       
        if(umap1.size()!=umap2.size())
        {
            return 0;
        }
        return 1;
        

    }
};