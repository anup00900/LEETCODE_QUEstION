class Solution {
public:
    int countSubstrings(string s) {
        
        
        int n = s.length();
        int c=0;
        vector<vector<int>>v(n+1,vector<int>(n+1,0));
        
        //For One length string
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                {
                    v[i][j]=1;
                    c++;
                }
            }
        }
       
       
        //For 3 length  
        for(int l=2;l<=n;l++)
        {
            for(int i=0;i+l<=n;i++)
            {
                int j=l+i-1;
                if(s[i]==s[j])
                {
                    if(j == i+1 or v[i+1][j-1]==1)
                    {
                        v[i][j]=1;
                        c++;
                    }
                }
            }
        }
         
        return c;
        
        
    }
};