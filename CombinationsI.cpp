class Solution {
public:
    void comb(int i,vector<int>&cand,int t,vector<vector<int>>&ans,vector<int>&ds)
    {
        if(i == cand.size())
        {
            if(t==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(cand[i]<=t)
        {
            ds.push_back(cand[i]);
            comb(i,cand,(t-cand[i]),ans,ds);
            ds.pop_back();
            
        }
       
        comb(i+1,cand,t,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& cand, int t) {
        
        //Combinations and Subsequence Question Solve Using Recursion
        
        vector<vector<int>>ans;
        vector<int>ds;
        
        comb(0,cand,t,ans,ds);
        return ans;
        
       
    }
};