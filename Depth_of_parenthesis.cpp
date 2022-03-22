class Solution {
public:
    int maxDepth(string s) {
        
        
        if(s.length()==0)
        {
            return 0;
        }
        int c=0;
        int m=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                c++;
            }
            else if(s[i]==')')
            {
                m=max(c,m);
                c--;
            }
        }
        return m;
        
        
        
        
    }
};