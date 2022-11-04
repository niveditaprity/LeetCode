class Solution {
public:
    int findMaxProfit(int i,int canBuy,int k,vector<int>& prices)
    {
        if(k==0)
        {
            return 0;
        }
        if(i == prices.size())
        {
            return 0;
        }
        int maxProfit=0;
        if(canBuy)
        {
          int buy = -prices[i] + findMaxProfit(i+1,0,k,prices);
          int notbuy = 0 + findMaxProfit(i+1,1,k,prices);
          maxProfit = max(buy,notbuy);
        }
        else
        {
          int sell = prices[i] + findMaxProfit(i+1,1,k-1,prices);
          int notsell = 0 + findMaxProfit(i+1,0,k,prices);
          maxProfit = max(sell,notsell);  
        }
        return maxProfit;
    }
    int maxProfit(int k, vector<int>& prices) {
      return findMaxProfit(0,1,k,prices);
    }
};
