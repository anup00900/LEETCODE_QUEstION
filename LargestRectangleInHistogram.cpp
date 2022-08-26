class Solution {
public:
    vector<int>ps;
    vector<int>ns;
    void prevs(vector<int>&h)
    {
        stack<int>st;
        ps.push_back(-1);
        st.push(0);
        for(int i=1;i<h.size();i++)
        {
            
            while(!st.empty() and h[st.top()]>=h[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                ps.push_back(-1);
                st.push(i);
            }
            else
            {
                ps.push_back(st.top());
                st.push(i);
            }
            
        }
       
    }
    void nexts(vector<int>&h)
    {
        stack<int>st;
        int n=h.size()-1;
        ns.push_back(n+1);
        st.push(n);
        for(int i=h.size()-2;i>=0;i--)
        {
            
            while(!st.empty() and h[st.top()]>=h[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                ns.push_back(n+1);
                st.push(i);
            }
            else
            {
                ns.push_back(st.top());
                st.push(i);
            }
            
        }
        reverse(ns.begin(),ns.end());
        
    }
    int largestRectangleArea(vector<int>& heights) {
        
        prevs(heights);
        //cout<<endl;
        nexts(heights);
        int c=0;
        for(int i=0;i<heights.size();i++)
        {
            int ans = (heights[i])*(ns[i]-ps[i]-1);
            c=max(c,ans);
        }
        return c;
        
    }
};