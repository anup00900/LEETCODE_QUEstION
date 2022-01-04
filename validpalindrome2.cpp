class Solution {
public:
    bool ispal(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
    bool validPalindrome(string s) {
        
        int i=0;
        int j=s.length()-1;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return(ispal(s,i+1,j) || ispal(s,i,j-1));
            }
            i++;
            j--;
        }
        return 1;
        
    }
};