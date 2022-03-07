
#include<bits/stdc++.h>
using namespace std;

int t[100001];


int frog(int n,vector<int>&h)
{
    if(n==0 || n ==1)
    {
        return 0;
    }
    if(t[n+1]!=-1)
    {
        return t[n+1];
    }
    int left=abs(h[n]-h[n-1])+frog(n-1,h);
    int right=INT_MAX;
    if(n>1)
    {
        right = abs(h[n]-h[n-2])+frog(n-2,h);
    } 
    return(t[n+1]=min(left,right));
    
}



int frogJump(int n, vector<int> &heights)
{
    memset(t,-1,sizeof(t));
    t[0]=0;
    t[1]=0;
    return(frog(n-1,heights));
    
}
