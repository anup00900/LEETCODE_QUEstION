class Solution {
  public:
    int s(int n,int k)
    {
        if(n==1)
        {
            return 0;
        }
        return (s(n-1,k)+k)%n;
    }
    int safePos(int n, int k) {
        
        return s(n,k)+1;
    }
};
