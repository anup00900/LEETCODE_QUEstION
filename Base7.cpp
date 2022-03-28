class Solution {
public:
    string convertToBase7(int num) {
        
        string ans="";
        int f=0;
        if(num==0)
        {
            return "0";
        }
        if(num <0)
        {
            f=1;
            num=-1*num;
        }
        
        while(num)
        {
            int r = num%7;
            ans=ans+to_string(r);
            num=num/7;
        }
        reverse(ans.begin(),ans.end());
        if(f==1)
        {
            ans="-"+ans;
        }
        
        return ans;
        
        
        
    }
};