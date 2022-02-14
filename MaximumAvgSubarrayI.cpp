class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum=0.0,m;
        for(int i=0;i<k;i++)
        {
            
            sum=sum+nums[i];
            
        }
        m=(sum)/k;//failing for [-1],1 test case answer should be -1.000 not 0.000
        int j=0;
        
        for(int i=k;i<nums.size();i++)
        {
            sum=sum-nums[j++];
            sum=sum+nums[i];
            m=max(m,(sum)/k);
        }
        return m;
        
        
        
        
    }
};