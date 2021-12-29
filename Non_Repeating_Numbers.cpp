vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int s=0;
        for(auto i:nums)
        {
            s=s^i;
        }
        int l = s;
        int y = s;
        int i=0;
        while(s)
        {
            if(s%2 == 1)
            {
                break;
            }
            i++;
            s=s/2;
            
        }
        int o=1<<i;
        vector<int>v;
        
        for(auto i:nums)
        {
            if((i&o)>0)
            {
                v.push_back(i);
            }
        }
        
        for(auto i:v)
        {
            l=l^i;
        }
        
        
        int ans = l^y;
        vector<int>j;
        if(ans<l)
        {
            j.push_back(ans);
        j.push_back(l);
        }
        else
        {
            j.push_back(l);
            j.push_back(ans);
        
        }
        
        return(j);
    }