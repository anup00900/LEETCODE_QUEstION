class Solution {
public:
    int getSum(int a, int b) {
        
        
       
        
        if(b==0)
        {
            return a;
        }
        
        int sum = a^b;
        
        unsigned carry = (a&b);
        return(getSum(sum,carry<<1));
        
        
        
    }
};