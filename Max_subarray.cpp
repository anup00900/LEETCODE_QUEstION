class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int m=INT_MIN;
        
        
            int s=0;
            for(int j=0;j<nums.size();j++)
            {
                s+=nums[j];
                m=max(m,s);
                if(s<0)
                {
                    s=0;
                }
            }
            
        
        
        return(m);
        /*int max_sum = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            int curr_sum = 0;
            for(int j=i; j<nums.size(); j++){
                curr_sum += nums[j];
                //cout<<curr_sum<<endl;
                max_sum = max(max_sum, curr_sum);
            }
        }
    return max_sum;*/
    }
};