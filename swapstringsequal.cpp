class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int miss=0;
        vector<int>v(26,0);
        if(s1.length() != s2.length())
        {
            return 0;
        }
        for(int i=0;i<s1.size();i++)
        {
            v[s1[i]-'a']++;
            v[s2[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(v[i]!=0)
            {
                return 0;
            }
        }
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                miss++;
            }
        }
        return miss<=2;
    }
};