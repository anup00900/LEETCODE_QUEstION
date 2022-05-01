class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>st1;
        stack<char>st2;
        
        int i=0;
        int j=0;
        while(i<s.length())
        {
            if(s[i]!='#')
            {
                st1.push(s[i]);
                
            }
            else if(s[i]=='#' and !st1.empty())
            {
                st1.pop();
            }
            i++;
            
            
        }
        while(j<t.length())
        {
            if(t[j]!='#')
            {
                st2.push(t[j]);
            }
            else if(t[j]=='#' and !st2.empty())
            {
                st2.pop();
            }
            j++;
            
        }
        if(st1.size()!=st2.size())
        {
            return 0;
        }
        
        while(!st1.empty())
        {
            if(st1.top()!=st2.top())
            {
                return 0;
            }
            st1.pop();
            st2.pop();
        }
        
        
        return 1;
        
        
    }
};