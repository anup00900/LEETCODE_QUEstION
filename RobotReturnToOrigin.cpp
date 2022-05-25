class Solution {
public:
    bool judgeCircle(string moves) {
        
        
        int l=0;
        int r=0;
        int d=0;
        int u=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L')
            {
                l++;
            }
            else if(moves[i]=='R')
            {
                l--;
            }
            else if(moves[i]=='U')
            {
                u++;
            }
            else if(moves[i]=='D')
            {
                u--;
            }
        }
        if(l==0 and u==0)
        {
            return 1;
        }
        return 0;
        
        
        
        
        
    }
};