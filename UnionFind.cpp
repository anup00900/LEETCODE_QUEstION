class Solution
{
    public:
    //Function to merge two nodes a and b.
    
    int find(int node,int par[],int rank[])
    {
        if(node == par[node])
        {
            return node;
        }
        return par[node]=find(par[node],par,rank);
    }
    
    
    void union_( int a, int b, int par[], int rank[]) 
    {
        a = find(a,par,rank);
        b = find(b,par,rank);
        if(rank[a]>rank[b])
        {
            par[b]=a;
        }
        else if(rank[a]<rank[b])
        {
            par[a]=b;
        }
        else
        {
            par[b]=a;
            rank[a]++;
        }
        
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank[])
    {
        int x1 = find(x,par,rank);
        int x2 = find(y,par,rank);
        if(x1==x2)
        {
            return 1;
        }
        return 0;
    }
};