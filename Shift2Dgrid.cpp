class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& g, int k) {
        
        vector<int>nums;
        vector<vector<int>>mat;
       
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[0].size();j++)
            {
                nums.push_back(g[i][j]);
            }
            
        }
         k = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
        int c=0;
        for(int i=0;i<g.size();i++)
        {
            vector<int>t;
            for(int j=0;j<g[0].size();j++)
            {
                t.push_back(nums[c]);
                c++;
            }
            mat.push_back(t);
            
        }
        
        return mat;
        
        
    }
};