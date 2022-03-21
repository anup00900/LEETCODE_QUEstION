unordered_map<int,int>umap;
        
        stack<int>st;
        
        for(int i=nums2.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                st.push(nums2[i]);
                umap[nums2[i]]=-1;
            }
            else
            {
                while(!st.empty() and st.top()<nums2[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    umap[nums2[i]]=-1;
                    st.push(nums2[i]);
                }
                else
                {
                    umap[nums2[i]]=st.top();
                    st.push(nums2[i]);
                }
            }
        }
        
        
        
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(umap[nums1[i]]);
        }
        return v;
        
        