class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char,int>umap;
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]=i; //last index of each character is stored
           
        }
        int start=0;
        int end=0;
        vector<int>v;
        
       
        for(int i=0;i<s.length();i++)
        {
            end = max(end,umap[s[i]]);
            if(i == end)
            {
                v.push_back(end-start+1);
                start=end+1;
            }
        }
        
        
        return v;
        
        
        
    }
};