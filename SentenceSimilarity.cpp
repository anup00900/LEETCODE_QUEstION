class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        
        
        deque<string>d1;
        deque<string>d2;
        
        string ans="";
        
        for(int i=0;i<=s1.length();i++)
        {
            if(s1[i]==' ' or i==s1.length())
            {
                d1.push_back(ans);
                ans="";
            }
            else
            {
                ans+=s1[i];
            }
        }
        ans="";
        for(int i=0;i<=s2.length();i++)
        {
            if(s2[i]==' ' or i==s2.length())
            {
                d2.push_back(ans);
                ans="";
            }
            else
            {
                ans+=s2[i];
            }
        }
        
        while(!d1.empty() and !d2.empty() and d1.front()==d2.front())
        {
            d1.pop_front();
            d2.pop_front();
        }
        while(!d1.empty() and !d2.empty() and d1.back()==d2.back())
        {
            d1.pop_back();
            d2.pop_back();
        }
        return(d1.empty() or d2.empty());
        
        
    }
};