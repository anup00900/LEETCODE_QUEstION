class Solution {
public:
    vector<int> countBits(int n) {
        
        
        vector<int>v;
        
        for(int i=0;i<=n;i++)
        {
            if(i==0)
            {
                
                v.push_back(0);
            }
            else
            {
               if(i%2==1)
               {
                   
                 
                   v.push_back(v[i-1]+1);
                   
                   
                   
               }
               else
               {
                   
                   v.push_back(v[i/2]);
                   
               }
            }
        }
        return v;
        
    }
};