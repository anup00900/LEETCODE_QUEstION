class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    
		    string a=str;
		    string b=str;
		    
		    int n=str.length();
		    int m=str.length();
		    vector<vector<int>>t(n+1,vector<int>(m+1));
		    for(int i=0;i<=n;i++)
		    {
		        for(int j=0;j<=m;j++)
		        {
		            if(i==0 or j==0)
		            {
		                t[i][j]=0;
		            }
		        }
		    }
		    for(int i=1;i<=n;i++)
		    {
		        for(int j=1;j<=m;j++)
		        {
		            if(a[i-1]==b[j-1] and i!=j)
		            {
		                t[i][j]=1+t[i-1][j-1];
		            }
		            else
		            {
		                 t[i][j]=max(t[i-1][j],t[i][j-1]);
		            }
		        }
		    }
		    
		    return t[n][m];
		}

};