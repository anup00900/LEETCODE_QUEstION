class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        
        
           int i=0;
           int j=m[0].size()-1;
        
           while(i <m.size() && j>=0)
           {
               if(m[i][j]==t)
               {
                   return(1);
               }
               else if(m[i][j] >t)
               {
                   j--;
               }
               else if(m[i][j]<t)
               {
                   i++;
               }
           }
          return(0);        
        
           
        
        
        
        
        
    }
};