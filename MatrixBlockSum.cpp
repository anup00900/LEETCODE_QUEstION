class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) { 
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size())); 
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                    int rmin = i-k;
                    int rmax = i+k;
                    int cmin = j-k;
                    int cmax = j+k;
                    if(rmin <0)
                    {
                        rmin=0;
                    }
                    if(cmin <0)
                    {
                        cmin = 0;
                    }
                    if(rmax>mat.size()-1)
                    {
                        rmax=mat.size()-1;
                    }
                    if(cmax>mat[0].size()-1)
                    {
                        cmax=mat[0].size()-1;
                    }
                    long long int sum = 0;
                    for(int k =rmin;k<=rmax;k++)
                    {
                        for(int l=cmin;l<=cmax;l++)
                        {
                            sum=sum+mat[k][l];
                        }
                    }
                    ans[i][j]=sum;
            }
        }
        return ans;   
    }
};