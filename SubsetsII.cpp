class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& input) {
        
       sort(input.begin(),input.end()); 
        int n=input.size();
    vector<vector<int>>v;
        set<vector<int>>s;
    long subset = pow(2,n);
    for(int i=0;i<subset;i++)
    {
        int temp=i;
        vector<int>v_s;
        for(int j=n-1;j>=0;j--)
        {
            int r=temp%2;
            temp=temp/2;
            if(r!=0)
            {
                v_s.push_back(input[j]);
            }
            
        }
        s.insert(v_s);
    }
    for(auto i : s)
    {
        v.push_back(i);
    }
    
    
    return v;
        
        
    }
};