class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        
        int m=INT_MAX;
        int k1=k;
        int b=0;
        int w=0;
        for(int i=0;i<k1;i++)
        {
            if(blocks[i]=='W')
            {
                w++;
            }
            
        }
        m=min(m,w);
        cout<<m<<" ";
        k1=0;
        for(int i=k;i<blocks.size();i++)
        {
            if(blocks[k1]=='W')
            {
                w--;
               
            }
             k1++;
            if(blocks[i]=='W')
            {
                w++;
            }
            m=min(m,w);
            cout<<m<<" ";
        }
        return m;
        
        
        
        
        
    }
};