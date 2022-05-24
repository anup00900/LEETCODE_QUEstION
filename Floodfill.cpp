class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>& image,vector<vector<int>>&imagecopy,int n,int m,int sr,int sc,int newColor)
    {
        
        if(i<0 or j<0 or i>=n or j>=m or image[i][j] != image[sr][sc])
        {
            return;
        }
        if(vis[i][j]==1)
        {
            return;
        }
        vis[i][j]=1;
        imagecopy[i][j]=newColor;
        dfs(i,j-1,vis,image,imagecopy,n,m,sr,sc,newColor);
        dfs(i,j+1,vis,image,imagecopy,n,m,sr,sc,newColor);
        dfs(i-1,j,vis,image,imagecopy,n,m,sr,sc,newColor);
        dfs(i+1,j,vis,image,imagecopy,n,m,sr,sc,newColor);
        
        
        
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        vector<vector<int>>imagecopy = image;
        int n = image.size();
        int m = image[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        
        dfs(sr,sc,vis,image,imagecopy,n,m,sr,sc,newColor);
        
        return imagecopy;
           
        
    }
};