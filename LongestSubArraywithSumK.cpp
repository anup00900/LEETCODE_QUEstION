int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int,int>umap;
        int s=0,l=0;
        
        for(int i=0;i<N;i++)
        {
            s=s+A[i];
            int t=s-K;
            if(s==K)
            {
                l=max(l,i+1);
            }
            
                if(umap.find(t)!=umap.end())
            {
                l=max(l,i-umap[t]);
                
            }
            if(umap.find(s)==umap.end())
            {
                 umap[s]=i;
            }
            
            
            /*if(umap.find(s)==umap.end())
            {
                 umap[s]=i;
            }*/
            
               
           
        }
        return l;
    } 