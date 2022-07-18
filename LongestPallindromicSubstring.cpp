class Solution {
public:
    
    
    string longestPalindrome(string s) {
        
        string s1=s;
        int n=s.length();
        reverse(s1.begin(),s1.end());
        
        vector<vector<int>>t(n+1,vector<int>(n+1,-1));
        
        for(int i=0;i<=n;i++)
        {
                t[i][0]=0;
                
            
        }
        for(int i=0;i<=n;i++)
        {
                t[0][i]=0;
                
            
        }
        int m=0;//for storing till now longest length of pallindromic substring
        string ans="";
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==s1[j-1])
                {
                    t[i][j]=t[i-1][j-1]+1;
                    if(t[i][j]>m)//if current length is greater then m
                    {
                        string temp = s.substr(i-t[i][j],t[i][j]);
                        string revtemp = temp;
                        reverse(revtemp.begin(),revtemp.end());
                        if(revtemp == temp)
                        {
                            m = t[i][j];
                            ans = temp;
                        }
                    }
                    
                }
                else
                {
                    t[i][j]=0;
                }
            }
        }
       return ans;
       
   
    
    }
};