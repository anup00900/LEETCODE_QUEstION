class Solution {
public:
    
   /* int lo(string text1, string text2,int n1,int n2,vector<vector<int>>&t)
    {
        
        if(t[n1][n2]!=-1)
        {
            return t[n1][n2];
        }
        if(text1[n1-1]==text2[n2-1])
        {
            return(t[n1][n2]=lo(text1,text2,n1-1,n2-1,t)+1);
        }
        else
        {
            return(t[n1][n2]=max(lo(text1,text2,n1-1,n2,t),lo(text1,text2,n1,n2-1,t)));
        }
        
        
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        int n1=text1.length();
        int n2=text2.length();
        vector<vector<int>>t(n1+1,vector<int>(n2+1,-1));
        
            for(int j=0;j<=n2;j++)
            {
               
                    t[0][j]=0; 
                
                    
            }
            for(int j=0;j<=n1;j++)
            {
               
                    t[j][0]=0; 
                
                    
            }
     
        return(lo(text1,text2,n1,n2,t));
        
    }*/
    int longestCommonSubsequence(string text1, string text2) {
        
        
        int n1=text1.length();
        int n2=text2.length();
        vector<vector<int>>t(n1+1,vector<int>(n2+1));
        
            for(int j=0;j<=n2;j++)
            {
               
                    t[0][j]=0; 
                
                    
            }
            for(int j=0;j<=n1;j++)
            {
               
                    t[j][0]=0; 
                
                    
            }
        
         for(int i=1;i<=n1;i++)
         {
             for(int j=1;j<=n2;j++)
             {
                 if(text1[i-1]==text2[j-1])
                 {
                     t[i][j]=t[i-1][j-1]+1;
                 }
                 else
                 {
                     t[i][j]=max(t[i-1][j],t[i][j-1]);
                 }
             }
         }
        return t[n1][n2];
        
        
        
        
        
        
        
        
        
    }
};