class Solution {
public:
    vector<int> getRow(int row) {
        
        vector<vector<int>>ans;
        vector<int>f;
        f.push_back(1);
        ans.push_back(f);
        if(row == 0)
        {
            
            return(f);
        }
        
        
        for(int i=1;i<=row;i++)
        {
            vector<int>v(i+1,0);
            v[0]=1;
            for(int j=0;j<i-1;j++)
            {
                v[j+1]=ans[i-1][j]+ans[i-1][j+1];
            }
            v[i]=1;
            ans.push_back(v);
        }
        return ans[row];
        
        
    }
};