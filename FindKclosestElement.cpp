class cmp{
    public:
    bool operator()(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.first==b.first)
        {
            return a.second > b.second;
        }
        else
        {
            return a.first>b.first;
        }
    }
};


class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
         vector<int>v;
        multimap<int,int>umap;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        for(int i=0;i<arr.size();i++)
        {
            int d = abs(arr[i]-x);
            umap.insert({arr[i],d});
        }
        
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            pq.push({it->second,it->first});
        }
        
       
        for(int i=0;i<k;i++)
        {
            int r=pq.top().second;
            v.push_back(r);
            pq.pop();
        }
        sort(v.begin(),v.end());
        return v;
        
        
        
        
        
    }
};