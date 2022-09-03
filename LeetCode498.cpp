class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        vector<int>v;
        int n=mat.size();
        int m=mat[0].size();
        
        int up=1;
        
        int i=0;
        int j=0;
        while(i<n and j<m)
        {
            if(up)
            {
                while(i>0 and j<m-1)
                {
                    v.push_back(mat[i][j]);
                    i--;
                    j++;
                }
                v.push_back(mat[i][j]);
                if(j==m-1)
                {
                    i++;
                }
                else
                {
                    j++;
                }
                
            }
            else
            {
                while(i<n-1 and j>0)
                {
                    v.push_back(mat[i][j]);
                    i++;
                    j--;
                }
                v.push_back(mat[i][j]);
                if(i==n-1)
                {
                    j++;
                }
                else
                {
                    i++;
                }
            }
            up=!up;
        }
        return v;
        
        
    }
};