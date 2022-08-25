vector<int> constructLowerArray(int *arr, int n) {
	    
	    vector<int>v,ans;
	    
	    for(int i=n-1;i>=0;i--)
	    {
	      auto it = lower_bound(v.begin(),v.end(),arr[i])-v.begin();
	      
	      ans.push_back(it);
	      v.insert(v.begin()+it,arr[i]);
	
	      
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	    
	    
	    
	}