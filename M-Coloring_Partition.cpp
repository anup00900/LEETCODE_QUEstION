bool safe(int s,bool graph[101][101], vector<int>&c,int m, int n,int co)
{
    for(int k=0;k<n;k++)
    {
        if(k!=s and graph[k][s]==1 and c[k]==co)
        {
            return 0;
        }
    }
    return 1;
}
bool solve(int s,bool graph[101][101], vector<int>&c,int m, int n)
{
    if(s==n)
    {
        return 1;
    }
    for(int i=1;i<=m;i++)
    {
        if(safe(s,graph,c,m,n,i))
        {
            c[s]=i;
            if(solve(s+1,graph,c,m,n))
            {
                return 1;
            }
            c[s]=0;
        }
    }
    return 0;
}


bool graphColoring(bool graph[101][101], int m, int n) {
    
  
    vector<int>color(n,0);
    return(solve(0,graph,color,m,n));
    
    
    
}