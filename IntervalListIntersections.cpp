class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
        
        int i=0;
        int j=0;
        vector<vector<int>>ans;
        
        while(i<firstList.size() and j<secondList.size())
        {
            
            int maxf = max(firstList[i][0],secondList[j][0]);
            int mins = min(firstList[i][1],secondList[j][1]);
            
            if(maxf<=mins)
            {
                 vector<int>v;
            v.push_back(maxf);
            v.push_back(mins);
            ans.push_back(v);
            }
           
            if(firstList[i][1]<=secondList[j][1])
            {
                i++;
            }
            else
            {
                j++;
            }
          
        }
       
        return ans;
        
        
        
        
        
    }
};