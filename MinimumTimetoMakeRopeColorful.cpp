class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int ans=0;
        stack<pair<char,int>>st;
        for(int i=0;i<colors.size();i++)
        {
            if(i==0)
            {
                st.push({colors[i],neededTime[i]});
            }
            else
            {
                if(st.top().first==colors[i])
                {
                    if(st.top().second < neededTime[i])
                    {
                        ans=ans+st.top().second;
                        st.pop();
                        st.push({colors[i],neededTime[i]});
                    }
                    else
                    {
                        ans=ans+neededTime[i];
                    }
                }
                else
                {
                    st.push({colors[i],neededTime[i]});
                }
            }
        }
        
        return ans;
        
        
    }
};