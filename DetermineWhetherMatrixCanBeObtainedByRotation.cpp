class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int n=mat.size();
        if(mat == target)
        {
                return 1;
        }
        
        for(int k=0;k<3;k++)
        {
            
                 for(int i=0;i<n;i++)
                 {
                     for(int j=i;j<n;j++)
                     {
                          int t=mat[i][j];
                           mat[i][j]=mat[j][i];
                          mat[j][i]=t;
                      }
                 }
            
                for(int i=0;i<n;i++)
                {
                    reverse(mat[i].begin(),mat[i].end());
                }
               
               if(mat == target)
               {
                   return 1;
               }
            
            
        }    
        return 0;
        
        
    }
};