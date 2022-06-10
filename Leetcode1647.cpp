class Solution {
public:
    int minDeletions(string s) {
        
        unordered_map<char,int>umap;
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]++;
        }
        priority_queue<int>pq;
        for(auto it=umap.begin();it!=umap.end();it++)
        {
            pq.push(it->second);
        }
       
        int c=0;
        while(pq.size()>1)
        {
            int topelement = pq.top();
            pq.pop();
            if(topelement==pq.top())
            {
                c++;
                topelement--;
                if(topelement>0)
                {
                    pq.push(topelement);
                }
            }

        }
        return c;
    }
};