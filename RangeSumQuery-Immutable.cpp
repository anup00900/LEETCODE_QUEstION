class NumArray {
public:
    vector<int>v;
    
    NumArray(vector<int>& nums) {
        
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if(i==0)
            {
                v.push_back(nums[0]);
                
            }
            else
            {
                v.push_back(v[k++]+nums[i]);
            }
        }
    }
    
    int sumRange(int left, int right) {
        
        if(left==0)
        {
            return v[right];
        }
        return(v[right]-v[left-1]);
        
        
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */