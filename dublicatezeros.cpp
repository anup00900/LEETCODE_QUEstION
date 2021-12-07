class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
      int i=0;
        int j=arr.size()-2;
        
        while(i<=j)
        {
            if(arr[i]==0)
            {
                while(j!=i)
                {
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1]=arr[i];
                i=i+2;
                j=arr.size()-2;
            }
            else
            {
                i++;
            }
        }
        
        
        
    }
};