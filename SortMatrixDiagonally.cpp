class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        vector<vector<int>>v(mat.size(),vector<int>(mat[0].size(),0));
        unordered_map<int,vector<int>>umap;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                
                umap[(i-j)].push_back(mat[i][j]);
                
                
            }
        }
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            sort(it->second.begin(),it->second.end(),greater<int>());
        }
       
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                int n = umap[(i-j)].size();
                v[i][j] = umap[(i-j)][n-1];
                umap[(i-j)].pop_back();
                
            }
        }   
        return v;
           
        
        
        
    }
};