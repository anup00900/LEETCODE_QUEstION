class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        
        unordered_map<int,int>umap;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {
                if(umap.find(2*arr[i])!=umap.end())
                {
                    return(1);
                }
                else if(umap.find(arr[i]/2)!=umap.end())
                {
                    return(1);
                }
                else
                {
                    umap[arr[i]]=i;
                }
            }
            else
            {
                if(umap.find(2*arr[i])!=umap.end())
                {
                    return(1);
                }
                else
                {
                    umap[arr[i]]=i;
                }
            }
            
        }
        return(0);
        
        
        
        
    }
};