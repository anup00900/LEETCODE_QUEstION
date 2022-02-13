class Solution {
public:
    
    vector<int> diffWaysToCompute(string exp) {
         vector<int>ans;
       
        for(int i=0;i<exp.length();i++)
        {
            char ch = exp[i];
            if(ch == '+'||ch == '-'||ch == '*')
            {
                vector<int>left  = diffWaysToCompute(exp.substr(0,i));
                vector<int>right = diffWaysToCompute(exp.substr(i+1));
                
                for(int k=0;k<left.size();k++)
                {
                    for(int j=0;j<right.size();j++)
                    {
                        if(ch == '+')
                        {
                            ans.push_back(left[k]+right[j]);
                            
                        }
                        else if(ch == '*')
                        {
                            ans.push_back(left[k]*right[j]);
                            
                        }
                        else
                        {
                            ans.push_back(left[k]-right[j]);
                        }
                    }
                }
                
                
            }
        }
        if(ans.empty())
        {
            ans.push_back(stoi(exp));
        }
        return ans;
     
    }
};