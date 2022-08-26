class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        
       
       int i=0;
       int j=0;
    
       char mat[3][3];
        
       for(int i=0;i<moves.size();i++)
       {
           auto it=moves[i];
           if(i%2==0)
           {
               mat[it[0]][it[1]] = 'X';
           }
           else
           {
               mat[it[0]][it[1]] = 'O';
           }
           
       }
       
       for(int j=0;j<3;j++)
       {
          
               if(mat[0][j]=='X' and mat[1][j]=='X' and mat[2][j]=='X')
               {
                   return "A";
               }
               
               if(mat[j][0]=='X' and mat[j][1]=='X' and mat[j][2]=='X')
               {
                   return "A";
               }
                
               if(mat[0][j]=='O' and mat[1][j]=='O' and mat[2][j]=='O')
               {
                   return "B";
               }
                
               if(mat[j][0]=='O' and mat[j][1]=='O' and mat[j][2]=='O')
               {
                   return "B";
               }
                
           
       }
        if(mat[0][0]=='X' and mat[1][1]=='X' and mat[2][2]=='X')
        {
            return "A";
        }
        if(mat[0][0]=='O' and mat[1][1]=='O' and mat[2][2]=='O')
        {
           return "B";
        }
        if(mat[0][2]=='X' and mat[1][1]=='X' and mat[2][0]=='X')
        {
            return "A";
        }
        if(mat[0][2]=='O' and mat[1][1]=='O' and mat[2][0]=='O')
        {
            return "B";
        }
        if(moves.size()==9)
        {
            return "Draw";
        }
        return "Pending";
        
        
    }
};