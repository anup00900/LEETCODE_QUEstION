class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        
        int i=0;
        int j=0;
        string gt="";
        while(i<word1.length() && j<word2.length())
        {
            
            gt=gt+word1[i++];
            gt=gt+word2[j++];
           
        }
        if(i==word1.length())
        {
            while(j<word2.length())
            {
                
                gt=gt+word2[j++];
                
            }
        }
         if(j==word2.length())
        {
            while(i<word1.length())
            {
                
                gt=gt+word1[i++];
                
            }
        }
        return gt;
       
    }
};