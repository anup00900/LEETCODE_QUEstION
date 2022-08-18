class Solution {
public:
    bool possible(vector<vector<int>>& grid, int x)
    {
        int r = grid[0][0]%x;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]%x != r)
                {
                    return 0;
                }
            }
        }
        return 1;
    }
    int minOperations(vector<vector<int>>& grid, int x) {
        
        
        if(!possible(grid,x))
        {
            return -1;
        }
        vector<int>arr;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                arr.push_back(grid[i][j]);
            }
        }
        
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int c=0;
        if(n%2==1)
        {
            int m = arr[n/2];
            for(auto i:arr)
            {
                c=c+abs(i-m)/x;
            }
        }
        else
        {
            int m1=arr[n/2];
            int m2=arr[n/2-1];
            int c1=0,c2=0;
            for(auto i:arr)
            {
                c1=c1+abs(i-m1)/x;
            }
            for(auto i:arr)
            {
                c2=c2+abs(i-m2)/x;
            }
            c=min(c1,c2);
        }
        return c;
        
        
        
    }
};