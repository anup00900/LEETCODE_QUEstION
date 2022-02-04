class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        //treat 0 as -1
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                nums[i]=-1;
            }
        }
        int s=0,c=0;
        unordered_map<int,int>umap;
      
        
        for(int i=0;i<nums.size();i++)
        {
            s=s+nums[i];
            if(s==0)
            {
                c=i+1;
            }
            else
            {
                
            if(umap.find(s)!=umap.end())
            {
                c=max(c,i-umap[s]);
            }
            if(umap.find(s)==umap.end())
            {
                umap[s]=i;
            }
                
            }
        }
        return c;
        
        
        
        
        
    }
};