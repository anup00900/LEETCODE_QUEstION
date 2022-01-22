class Solution {
public:
    int maxVowels(string s, int k) {
        
        int m=0;
        int sum=0;
        for(int i=0;i<k;i++)
        {
            if(s[i] == 'a' || s[i] =='u' || s[i]=='e'||s[i]=='o'||s[i]=='i')
            {
                sum=sum+1;
            }
        }
        m=max(m,sum);
        int j=0;
        for(int i=k;i<s.length();i++)
        {
            if(s[j] == 'a' || s[j] =='u' || s[j]=='e'||s[j]=='o'||s[j]=='i')
            {
                
                sum=sum-1;
            }
            j++;
            
            if(s[i] == 'a' || s[i] =='u' || s[i]=='e'||s[i]=='o'||s[i]=='i')
            {
                sum=sum+1;
            }
            
            m=max(m,sum);
            
            
        }
        return m;
        
        
    }
};