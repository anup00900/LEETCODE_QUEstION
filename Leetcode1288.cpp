class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        vector<int>v1;
        vector<vector<int>>v;
        v.push_back(intervals[0]);
        int c=1;
        int i=1,j=1,k=0;
        
        while(j<intervals.size())
        {
            
            
            if(v[k][0]<=intervals[j][0] && v[k][1]>=intervals[j][1])
            {
                c++;
            }
            else if(v[k][0]>=intervals[j][0] && v[k][1]<=intervals[j][1])
            {
                v.pop_back();
                v.push_back(intervals[j]);
            }
            else
            {
                v.push_back(intervals[j]);
                k++;
            }
            
        
            
            j++;
        }
        
        return v.size();
        
    }
};