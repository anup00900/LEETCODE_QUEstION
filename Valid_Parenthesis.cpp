class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            
            
            if(st.empty()==1 && (s[i]==')' || s[i] == '}' || s[i] == ']'))
            {
                return(0);
            }
            else if(s[i]=='(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top()=='(' && s[i] == ')')
                {
                    st.pop();
                }
                else if(st.top()=='[' && s[i] == ']')
                {
                    st.pop();
                }
                 else if(st.top()=='{' && s[i] == '}')
                {
                    st.pop();
                }
                else if(st.top()=='{' && (s[i] == ']' || s[i] == ')'))
                {
                    return(0);
                }
                else if(st.top()=='[' && (s[i] == '}' || s[i]==']'))
                {
                    return(0);
                }
                else if(st.top()=='(' && (s[i] == '}' || s[i] == ']'))
                {
                    return(0);
                }
                        
            }
        }
        if(st.empty())
        {
            return(1);
        }
        return(0);
        
    }
};