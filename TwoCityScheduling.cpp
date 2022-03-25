class Solution {
public:
    
    
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        int d1=a[1]-a[0];
        int d2=b[1]-b[0];
        
        return d1>d2;
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        
        sort(costs.begin(),costs.end(),cmp);
        int ans=0;
        for(int i=0;i<costs.size();i++)
        {
            if(i<costs.size()/2)
            {
                ans+=costs[i][0];
            }
            else
            {
                ans+=costs[i][1];
            }
          
        }
        return ans;
        
        
        
    }
};