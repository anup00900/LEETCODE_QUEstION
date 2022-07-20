class Solution {
public:
    int n1,m1;
    vector<vector<int>>dp{1001,vector<int>(1001,-1)};
    int subset(string &s,string &t,int i,int j)
    {
        if(j<0)
        {
            return 1;
        }
        if(i<0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(s[i]==t[j])
        {
            return dp[i][j]=subset(s,t,i-1,j-1)+subset(s,t,i-1,j);
        }
        else
        {
            return dp[i][j]=subset(s,t,i-1,j);
        }
        
    }
    
    int numDistinct(string s, string t) {
        
        int n=s.length();
        int m=t.length();
        
        return subset(s,t,n-1,m-1);
        
    }
};