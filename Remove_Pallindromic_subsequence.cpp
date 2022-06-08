class Solution {
public:
    int removePalindromeSub(string s) {
        //IDEA: As we need to remove pallindromic subsequence i.e 
        // with with only 2 letter given so we can remove letter 'a' first
        //then letter 'b' or vice versa.
        // because either way of removal of character is pallindromic subsequence.
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return 2;
            }
            i++;
            j--;
        }
        return 1;
    }
};