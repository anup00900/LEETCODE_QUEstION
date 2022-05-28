class Solution {
public:
    set<string>s;
    string ans="";
    void dfs(string st,int n)
    {
        if(st.length()==n)
        {
            if(s.find(st)==s.end() and ans == "")
            {
                 ans=st;
                
            }
           return;
            
        
        }
        if(ans != "")
        {
            return;
        }
        dfs(st+'0',n);
        dfs(st+'1',n);
        return;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        
        
        int n=nums[0].size();
        for(auto i:nums)
        {
            s.insert(i);
        }
        
        dfs("",n);
        return ans;
        
        
    }
};