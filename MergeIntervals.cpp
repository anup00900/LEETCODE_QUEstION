class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        sort(i.begin(),i.end());
        vector<vector<int>>v;
        v.push_back(i[0]);
        int k=0;
        
        for(int j=1;j<i.size();j++)
        {
            if(v[k][1] >=i[j][0])
            {
                v[k][1]=max(v[k][1],i[j][1]);
            }
            else
            {
                v.push_back(i[j]);
                k++;
            }
        }
        return v;
        
        
    }
};