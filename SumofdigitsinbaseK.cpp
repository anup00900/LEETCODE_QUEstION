class Solution {
public:
    int sumBase(int n, int k) {
        
        string s="";
        
        while(n)
        {
            int r=n%k;
            s=to_string(r)+s;
            n=n/k;
        }
        int su=0;
        for(int i=0;i<s.length();i++)
        {
            su=su*10+s[i]-'0';
        }
        int ans=0;
        while(su)
        {
            int r=su%10;
            ans=ans+r;
            su=su/10;
            
        }
        return ans;
        
    }
};