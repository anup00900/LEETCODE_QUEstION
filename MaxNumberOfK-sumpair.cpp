class Solution {
public:
    int maxOperations(vector<int>& nums, int t) {
        
        /*sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int c=0;
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
            {
                c++;
                i++;
                j--;
            }
            else if(nums[i]+nums[j]<k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return c;*/
        unordered_map<int,int>umap;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(umap.find(t-nums[i])!=umap.end() and umap[t-nums[i]]>0)
            {
                umap[t-nums[i]]--;
                c++;
            }
            else
            {
                umap[nums[i]]++;
            }
        }
        return c;
        
        
    }
};