class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();i++)
        {
            unordered_map<char,int>umap;
            for(int j=0;j<board.size();j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }
                if(umap.find(board[i][j])!=umap.end())
                {
                    return 0;
                }
                umap[board[i][j]]++;
            }
           
        }
        for(int i=0;i<board.size();i++)
        {
            unordered_map<char,int>umap;
            for(int j=0;j<board.size();j++)
            {
                if(board[j][i]=='.')
                {
                    continue;
                }
                if(umap.find(board[j][i])!=umap.end())
                {
                    return 0;
                }
                umap[board[j][i]]++;
            }
        }
        int i=0;
        int j=0;
        while(i<9)
        {
            unordered_map<char,int>umap;
            for(int s=i;s<i+3;s++)
            {
                
                for(int e=j;e<j+3;e++)
                {
                    if(board[s][e]=='.')
                    {
                       continue;
                    }
                    if(umap.find(board[s][e])!=umap.end())
                    {
                        return 0;
                    }
                    umap[board[s][e]]++;
                    
                }
                
            }
            j=j+3;
            if(j==9){
                i=i+3;
                j=0;
            }
            
        }
        return 1;
        
    }
};