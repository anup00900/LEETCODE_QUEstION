class Solution
{
    public:
    int j(int n,int k)
    {
        if(n==1)
       {
           return 0;
       }
       return (j(n-1,k)+k)%n;
    }
    int josephus(int n, int k)
    {
       return j(n,k)+1;
    }
};