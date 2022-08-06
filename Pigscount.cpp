class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        
       int t=minutesToTest/minutesToDie;
        
        return ceil(log10(buckets)/log10(t+1));
        
    }
};