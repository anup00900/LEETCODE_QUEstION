class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        int n1=words1.size();
        int n2=words2.size();
        int c=0;
        
        unordered_map<string,int>umap1;
        unordered_map<string,int>umap2;
        
       
          
       
            for(int i=0;i<n2;i++)
            {
                umap2[words2[i]]++;
            }
            
            
      
            
            for(int i=0;i<n1;i++)
            {
                umap1[words1[i]]++;
            }
            for(auto p:umap1)
            {
                if(p.second == 1 && umap2[p.first]==1)
                {
                    c++;
                    
                }
            
            }
             
            
      
       
        
        return(c);
        
        
        
        
        
    }
};