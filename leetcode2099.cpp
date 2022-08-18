class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        
        vector<int>v;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pqm;
        
        while(k--)
        {
            pqm.push({pq.top().second,pq.top().first});
            pq.pop();
        }
        
        while(!pqm.empty())
        {
            v.push_back(pqm.top().second);
            pqm.pop();
        }
        return v;
        
    }
};