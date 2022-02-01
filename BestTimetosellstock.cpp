class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Lets Write Brute Force Approach
        //mein har ek din ke liye
        //using extra space
        vector<int>suf;
        int k=0;
        suf.push_back(prices[prices.size()-1]);
        for(int i=prices.size()-2;i>=0;i--)
        {
           
                suf.push_back(max(prices[i],suf[k++]));
           
        }
        int ma=0;
        reverse(suf.begin(),suf.end());
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<suf[i])
            {
                ma=max(ma,suf[i]-prices[i]);
            }
        }
        return ma;
        
    }
};