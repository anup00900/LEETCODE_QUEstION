class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        
        
         vector<int> ans;
         
         queue<long long int>q;
        for(int i=1;i<=9;i++)
        {
             q.push(i);
        }
        
        int l=1;
        while(l!=n)
        {
            int n=q.size();
            while(n--)
            {
            
                
                long long int x=q.front();
                //cout<<x<<" ";
                q.pop();
                long long int lastdigit = x%10;
                for(int i=0;i<=9;i++)
                {
                   
                   if(abs(lastdigit-i)==k)
                   {
                       long long d = 10*x+i;
                       q.push(d);
                   }
                   
                   
                }
           
            
             }
            l++;
        }
        
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
         return ans;
        
        
        
        
        
    }
};