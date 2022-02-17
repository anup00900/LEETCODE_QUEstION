class Solution {
public:
    //subsequence logic
    void comb(int i,vector<int>&cand,int t,vector<vector<int>>&ans,vector<int>&ds)
    {
        
            if(t==0)
            {
                ans.push_back(ds);
                return;
            }
            
        
        for(int j=i;j<cand.size();j++)
        {
            if(j>i && cand[j]==cand[j-1])
            {
                continue;
            }
            if(cand[j]>t)
            {
                break;
            }
            ds.push_back(cand[j]);
            comb(j+1,cand,t-cand[j],ans,ds);
            ds.pop_back();
            
        }
   
        
    }
    vector<vector<int>> combinationSum2(vector<int>& cand, int t) {
        
        sort(cand.begin(),cand.end());
        vector<vector<int>>ans;
       
        vector<int>ds;
        
        comb(0,cand,t,ans,ds);
       
        return ans;
    }
};