class Solution {
public:
    
    
    //LOGIC USED:
    //longestPalindromeSubseq = longestCommonSubseq(string,reverse(string))
    
    int longestPalindromeSubseq(string s) {
        
        
        string s1=s;
        int n=s.length();
        reverse(s1.begin(),s1.end());
        vector<vector<int>>t(n+1,vector<int>(n+1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==s1[j-1])
                {
                    t[i][j]=t[i-1][j-1]+1;
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][n];
        
    }
};