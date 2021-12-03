class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        
        
        vector<int>v;
        int p=0;
        int q=n.size()-1;
        
       while(p<q)
       {
           if(n[p]+n[q]==t)
           {
               v.push_back(p+1);
               v.push_back(q+1);
               break;
           }
           else if(n[p]+n[q]<t)
           {
               p++;
           }
           else if(n[p]+n[q]>t)
           {
               q--;
           }
           
           
           
           
       }
        return(v);
        
        
    }
};