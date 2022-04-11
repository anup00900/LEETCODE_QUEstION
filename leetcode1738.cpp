class Solution {
public:
    int kthLargestValue(vector<vector<int>>& mat, int k) {
      
        priority_queue<int>pq;
       for(int i=0;i<mat.size();i++)
       { 
           for(int j=0;j<mat[0].size();j++)
           {
               int left=0;
                int top=0;
               int topleft=0;
               
               if(i>0)
               {
                   top=mat[i-1][j];
               }
               if(j>0)
               {
                   left = mat[i][j-1];
               }
               if(i>0 and j>0)
               {
                   topleft = mat[i-1][j-1];
               }   
               
               mat[i][j]=top ^ left ^ topleft ^ mat[i][j];
               pq.push(mat[i][j]);
           }    
       }
        
        
        while(k>1)
        {
            pq.pop();
            k--;
        }
        return pq.top();
        
        
    }
};