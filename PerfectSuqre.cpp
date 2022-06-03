class Solution {
public:
    int numSquares(int n) {
        
        queue<int>q;
        q.push(n);
        int l=0;
        while(!q.empty())
        {
            int qs=q.size();
            l++;
            while(qs--)
            {
                int no = q.front();
                q.pop();
                for(int i=1;i*i<=no;i++)
                {
                    int sub = no-i*i;
                    if(sub  == 0)
                    {
                        return l;
                    }
                    q.push(sub);
                }
                
            }
        }
        return 0;
        
    }
};