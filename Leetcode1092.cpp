class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
      
        int m=str1.size();
        int n=str2.size();
        vector<vector<int>>t(m+1,vector<int>(n+1));
        string ans="";
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(str1[i-1]==str2[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        int i=m;
        int j=n;
        vector<char>v;
        
        while(i>0 and j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                v.push_back(str1[i-1]);
                i--;
                j--;
            }
            else
            {
                if(t[i][j-1]>t[i-1][j])
                {
                    v.push_back(str2[j-1]);
                    j--;
                }
                else 
                {
                    v.push_back(str1[i-1]);
                    i--;
                }
            }
        }
       
            while(j>0)
            {
                v.push_back(str2[j-1]);
                j--;
            }
    
            while(i>0)
            {
                v.push_back(str1[i-1]);
                i--;
            }
      
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i];
        }
        return ans;
     
    }
};