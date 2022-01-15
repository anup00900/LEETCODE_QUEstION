class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int sum=0;
      
        for(int i=0;i<arr.size();i++)
        {
            int contribution = ceil((i+1)*(arr.size()-i)/2.0);
            
            //Every element will contribute size of the array to its right * size of the array to its left.
            sum+=contribution*arr[i];
            
        }
        return sum;
        
    }
};