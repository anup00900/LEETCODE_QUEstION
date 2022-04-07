class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
          int ans=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-2;i++)
        {
            int j=i+1;
            int k=arr.size()-1;
          
            
            int t=target - arr[i];
            
            while(j<k)
            {
                long long int cnt1=1;
                long long int cnt2=1;
                if(arr[j]+arr[k]<t)
                {
                    j++;
                }
                else if(arr[j]+arr[k]>t)
                {
                    k--;
                }
                else
                {
                    while(j<k and arr[j]==arr[j+1])
                    {
                        cnt1++;
                        j++;
                    }
                     while(j<k and arr[k]==arr[k-1])
                    {
                        cnt2++;
                        k--;
                    }
                    if(j==k)
                    {
                        ans=((ans+(cnt1*(cnt1-1))/2)%1000000007)%1000000007;
                    }
                    else
                    {
                        ans=(ans+(cnt1*(cnt2))%1000000007)%1000000007;
                    }
                    j++;
                    k--;
                }
            }
            
            
        }
        return ans;
        
        
    }
};