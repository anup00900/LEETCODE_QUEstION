class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int t=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=t;
            }
        }
        
        int i=0;
        int j=n-1;
        int k=0;
        while(i<j)
        {
            k=0;
            while(k<n)
            {
                int t=mat[k][i];
                mat[k][i]=mat[k][j];
                mat[k][j]=t;
                k++;
            }
            i++;
            j--;
        }
        
        
        
    }
};