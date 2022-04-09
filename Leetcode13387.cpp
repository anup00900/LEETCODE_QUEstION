class Solution {
public:
    int minSetSize(vector<int>& nums) {
        
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            pq.push({it->second,it->first});
        }
        int n=nums.size();
        int k=0;
        int c=0;
        
        while(k<(n/2))
        {
            
            int r = pq.top().second;
            int t = pq.top().first;
            pq.pop();
            k=k+t;
            c++;
       
        }
        return c;
        
        
        
    }
};