class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        
        
        int j=0;
        int m=0;
        double s=0.0;
        for(int i=0;i<k;i++)
        {
            s=s+arr[i];
        }
        if((s/k) >= t)
        {
                m++;
        }
        for(int i=k;i<arr.size();i++)
        {
            
            s=s+arr[i];
            s=s-arr[j++];
            if((s/k) >= t)
            {
                m++;
            }
          
           
        }
        return m;
        
    }
};