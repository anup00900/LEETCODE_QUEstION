class Solution {
public:
    double myPow(double x, int n) {
      
        double temp ;
        if(n==1)
        {
            return(x);
        }
        
    if (n == 0)
        return(1.0);
    
         temp = myPow(x, n/2);    
         
  
        if(n%2 == 0)
              return temp*temp;
         else
              return temp * temp* (n<0?(1/x):x);
   
    }        
    
};