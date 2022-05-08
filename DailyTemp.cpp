class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>st;
        vector<int>ans;
        
        for(int i=temp.size()-1;i>=0;i--)
        {
            if(i==temp.size()-1)
            {
                ans.push_back(0);
                st.push({temp[i],i});
            }
            else
            {
                if(st.top().first<=temp[i])
                {
                     while(!st.empty() and st.top().first<=temp[i])
                     {
                          st.pop();
                     }
                     if(st.empty())
                     {
                         ans.push_back(0);
                     }
                     else
                     {
                         ans.push_back(st.top().second-i);
                     }
                    
                    st.push({temp[i],i});
                }
                else
                {
                    ans.push_back(st.top().second-i);
                    st.push({temp[i],i});
                }
               
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};