class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mi = INT_MAX;
        int ma = 0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i] < mi)
            {
                mi = prices[i];
            }
            else
            {
                ma = max(ma,prices[i]-mi);
            }
               
            
        }
        return(ma);
        
        
    }
};