class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        vector<vector<int>>ans;
        if(arr.size()<1)
        {
            return ans;
        }
        sort(arr.begin(),arr.end());
        int d=INT_MAX;
        for(int i=1;i<arr.size();i++)
        {
            d=min(d,(arr[i]-arr[i-1]));
        }
        
        for(int i=1;i<arr.size();i++)
        {
            vector<int>v;
            if(arr[i]-arr[i-1] == d)
            {
                v.push_back(arr[i-1]);
                v.push_back(arr[i]);
            }
            if(v.size()!=0)
            {
                ans.push_back(v);
            }
            
        }
        return ans;
        
  
        
    }
};