class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        
        vector<int>v;
        for(int i=0;i<q.size();i++)
        {
            int c=0;
            for(int j=0;j<p.size();j++)
            {
                if((p[j][0]-q[i][0])*(p[j][0]-q[i][0])+(p[j][1]-q[i][1])*(p[j][1]-q[i][1]) <=(q[i][2])*(q[i][2]))
                {
                    c++;
                }
            }
            v.push_back(c);
        }
        return v;
    }
};