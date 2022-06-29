
    static bool cmp(vector<int>&p1,vector<int>&p2)
    {
        if(p1[0]>p2[0])
        {
            return 1;
        }
        else if(p1[0]<p2[0])
        {
            return 0;
        }
        else
        {
            if(p1[1]<=p2[1])
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        // if(p1[0]==p2[0])
        // {
        //     return p1[1]<p2[1];
        // }
        // return p1[0]>p2[0];
    }

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        
        
        sort(people.begin(),people.end(),cmp);
        
        vector<vector<int>>res;
        
        for(int i=0;i<people.size();i++)
        {
            int idx = people[i][1];
            res.insert(res.begin()+idx,people[i]);
        }
        
        return res;
        
        
    }
};