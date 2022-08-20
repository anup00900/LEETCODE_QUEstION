class Solution {
public:
    vector<string> ans;
    bool valid(string p)
    {
        int c=0;
        for(int i=0;i<p.length();i++)
        {
            if(p[i]=='(')
            {
                c++;
            }
            else 
            {
                c--;
            }
                if(c<0)
                {
                    return 0;
                }
        }
        
            if(c==0)
            {
                return 1;
            }
        return 0;
            
        
    }
    void search(int n,string p)
    {
        
        if(p.length()==2*n)
        {
            if(valid(p))
            {
                ans.push_back(p);
            }
            
            return;
        }
        
        p=p+'(';
        search(n,p);
        p.pop_back();
        p=p+')';
        search(n,p);
        p.pop_back();
        
    }
    vector<string> generateParenthesis(int n) {
        
        
         search(n,"");
         return ans;
        
        
    }
};