class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        
        vector<long long>v;
        
        if(num%3 != 0)
        {
            return v;
        }
        long long int t = num/3;
        
        v.push_back(t-1);
        v.push_back(t);
        v.push_back(t+1);
        
        return v;
        
        
        
        
    }
};