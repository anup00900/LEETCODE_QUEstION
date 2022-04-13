class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        
        int sr=0;
        int er=n-1;
        int ec=n-1;
        int sc=0;
        int c=1;
        vector<vector<int>>mat(n,vector<int>(n,0));
        
        
        while(sr<=er and sc<=ec)
        {
            
            //right movement
            for(int j=sc;j<=ec;j++)
            {
                
                mat[sr][j]=c;
                c=c+1;
            }
            sr++;
            //down movement
            for(int i=sr;i<=er;i++)
            {
                mat[i][ec]=c;
                c=c+1;
            }
            ec--;
            //left movement
            for(int j=ec;j>=sc;j--)
            {
                mat[er][j]=c;
                c=c+1;
            }
            er--;
            for(int i=er;i>=sr;i--)
            {
                mat[i][sc]=c;
                c=c+1;
            }
            sc++;
     
            
        }
        
        
        
        return mat;
        
        
        
        
        
    }
};