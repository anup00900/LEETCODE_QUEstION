class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        
        
        unordered_map<int,int>umap;
        int i=0,j=0,sum=0,m=0;
        while(i<nums.size())
        {
            umap[nums[i]]++;
            
            int k=umap.size();
             sum=sum+nums[i];
            if(k == (i-j+1))
            {
                
                m=max(m,sum);
            }
            else if(k<(i-j+1))
            {
               while(umap.size()!=(i-j+1))
               {
                   sum=sum-nums[j];
                    umap[nums[j]]--;
                if(umap[nums[j]]==0)
                {
                    umap.erase(nums[j]);
                }
                j++;
               }
               
            }
           
            i++;
        }
        return m;
        
    }
};