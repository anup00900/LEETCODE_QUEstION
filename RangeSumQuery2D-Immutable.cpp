class NumMatrix {
public:
   
    int r;
    int c;
    vector<vector<int>>v;
    int gets(int i,int j)
    {
        if(i<0 or j<0)
        {
            return 0;
        }
        return v[i][j];
    }
    
    NumMatrix(vector<vector<int>>& mat) {
        
        r=mat.size();
            c=mat[0].size();
        v=vector<vector<int>>(r,vector<int>(c));
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                
                    v[i][j]=mat[i][j]+gets(i-1,j)+gets(i,j-1)-gets(i-1,j-1);
               
               
                
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
         
         return(gets(row2,col2)-gets(row2,col1-1)-gets(row1-1,col2)+gets(row1-1,col1-1));
        
        
        
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */