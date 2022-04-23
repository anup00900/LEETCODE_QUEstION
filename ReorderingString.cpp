class Solution {
public:
    string reorganizeString(string s) {
        
        
        unordered_map<char,int>umap;
        string st="";
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            pq.push({it->second,it->first});
        }
        
      
        
        while(pq.size()>1)
        {
            
            auto t1 = pq.top();
            pq.pop();
            auto t2 = pq.top();
            pq.pop();
            
            
            st+=t1.second;
            st+=t2.second;
            
            
            t1.first = t1.first-1;
            t2.first = t2.first-1;
            
            if(t1.first>0)
            {
                pq.push({t1.first,t1.second});
            }
            if(t2.first>0)
            {
                pq.push({t2.first,t2.second});
            }
            
       
            
        }
        
        if(!pq.empty())
        {
            if(pq.top().first>1)
            {
                return "";
            }
            st+=pq.top().second;
        }
        return st;
        
        
    }
};