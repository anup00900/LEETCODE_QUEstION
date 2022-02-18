class Solution {
public:
    string removeKdigits(string s, int k) {
        
        stack<char>st;
        if(k >= s.length())
        {
            return "0";
        }
        int i=0;
        st.push(s[i]);
        i++;
        while(i<s.size())
        {
            while( k>0 && !st.empty() &&s[i]<st.top())
            {
                st.pop();
                k--;
           
            }
            
            
            
            st.push(s[i]);
            
            
            i++;
            
        }
        while(k && !st.empty())
        {
            k--;
            st.pop();
        }
        if(st.empty())
        {
            return "0";
        }
        string dt="";
        while(!st.empty())
        {
            dt=st.top()+dt;
            st.pop();
        }
        int j=0;
        while(dt[j]=='0' && (j+1)<dt.length())
        {
            j++;
        }
        string ans="";
        for(int k=j;k<dt.length();k++)
        {
            ans=ans+dt[k];
        }
        return ans;
        
        
    }
};