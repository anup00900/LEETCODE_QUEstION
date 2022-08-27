class Solution {
public:
   
    
    vector<int> prevs(vector<int>& ht)
    {
        vector<int>ps;
        stack<int>st;
        st.push(0);
        ps.push_back(-1);
        for(int i=1;i<ht.size();i++)
        {
            while(!st.empty() and ht[st.top()]>=ht[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                st.push(i);
                ps.push_back(-1);
                
            }
            else
            {
                
                ps.push_back(st.top());
                st.push(i);
            }
        }
        return ps;
        
    }
    vector<int> nexts(vector<int>& ht)
    {
        vector<int>ns;
        stack<int>st;
        int n=ht.size()-1;
        st.push(n);
        ns.push_back(n+1);
        for(int i=ht.size()-2;i>=0;i--)
        {
            while(!st.empty() and ht[st.top()]>=ht[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                st.push(i);
                ns.push_back(n+1);
                
            }
            else
            {
                
                ns.push_back(st.top());
                st.push(i);
            }
        }
        reverse(ns.begin(),ns.end());
        return ns;
    }
    int largestRectangleArea(vector<int>& ht) {
        
        vector<int>ps = prevs(ht);
        vector<int>ns = nexts(ht);
        
        int c=0;
        for(int i=0;i<ht.size();i++)
        {
            int ans = ht[i]*(ns[i]-ps[i]-1);
            c=max(c,ans);
        }
        
       return c;
        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        
       
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v(m,0);
        int res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='0')
                {
                    v[j]=0;
                }
                else if(matrix[i][j]=='1')
                {
                    v[j]+=1;
                    
                }
            }
            res = max(res,largestRectangleArea(v));
            
        }
        return res;
    }
};