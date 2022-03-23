class Solution {
public:
    string getSmallestString(int n, int k) {
        
        vector<char>arr(n,'a');
        int ne=k-n;
        int j=n-1;
        while(ne>0)
        {
            if(ne>=25)
            {
                arr[j]='z';
                ne=ne-25;
            }
            else
            {
                arr[j]='a'+ne;
                ne=0;
            }
            j--;
        }
        string st="";
        for(int i=0;i<n;i++)
        {
            st+=arr[i];
        }
        return st;
        
    }
};