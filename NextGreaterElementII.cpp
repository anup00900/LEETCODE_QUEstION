class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int>st;
        //preprocessing from n-2 to 0 ,Only seeing value so that before answering stack is ready
        
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(st.empty())
            {
                st.push(nums[i]);
            }
            else
            {
                while(!st.empty() and st.top()<nums[i])
                {
                    st.pop();
                }
                st.push(nums[i]);
            }
        }
        unordered_map<int,int>umap;
        vector<int>v;
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(!st.empty() and st.top()<=nums[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                st.push(nums[i]);
                umap[nums[i]]=-1;
                v.push_back(-1);
            }
            else
            {
                umap[nums[i]]=st.top();
                 st.push(nums[i]);
                
                v.push_back(umap[nums[i]]);
            }
        }
        
        reverse(v.begin(),v.end());
        return v;
        
        
    }
};