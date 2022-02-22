class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        unordered_map<char,int>umap;
        for(int i=0;i<26;i++)
        {
            umap[65+i]=i+1;  
            
        }
        int s=0;
        int k=0;
        for(int i=columnTitle.length()-1;i>=0;i--)
        {
            s=s+pow(26,k)*umap[columnTitle[i]];
            k++;
        }
        return s;
        
      
        
    }
};