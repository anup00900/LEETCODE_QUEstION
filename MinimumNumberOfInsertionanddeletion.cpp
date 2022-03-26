class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    int n=str1.length();
	    int m=str2.length();
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
	            if(str1[i-1]==str2[j-1])
	            {
	                t[i][j]=t[i-1][j-1]+1;
	                
	            }
	            else
	            {
	                
	                t[i][j]=max(t[i-1][j],t[i][j-1]);
	                
	            }
	        }
	    }
	    return(n-t[n][m]+m-t[n][m]);
	    
	    
	} 
};