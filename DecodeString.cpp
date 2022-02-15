class Solution {
public:
    
    string decode(string s,int &i)
    {
        
        string ans="";
        while(i < s.length() && s[i]!= ']')
        {
            if(isdigit(s[i]))
            {
                int k=0;
                while(i<s.length() && isdigit(s[i]))
                {
                   k=k*10+s[i]-'0';
                   i++;
                }
                i++;
                string fg=decode(s,i);
                for(int j=0;j<k;j++)
                {
                    ans=ans+fg;
                }
                i++;
            
                
             }
             else
             {
                 ans=ans+s[i++];
             }
            
        }
        
        return ans;
    }
    
    
    
    string decodeString(string s) {
        
        int i=0;
        return(decode(s,i));
        
        
        
    }
};