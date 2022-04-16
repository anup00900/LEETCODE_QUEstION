class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
                pq.push(m[i][j]);
            }
        }
        
        while(k!=1)
        {
            pq.pop();
            k--;
        }
        return pq.top();
        
        
        
    }
};