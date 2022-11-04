class Solution {
public:
    int findMaxProfit(int i,int canBuy,int k,vector<int>& prices,vector<vector<vector<int>>>& dp)
    {
        if(k==0)
        {
            return 0;
        }
        if(i == prices.size())
        {
            return 0;
        }
        if(dp[i][canBuy][k]!=-1)
        {
         return dp[i][canBuy][k];   
        }
        int maxProfit=0;
        if(canBuy)
        {
          int buy = -prices[i] + findMaxProfit(i+1,0,k,prices,dp);
          int notbuy = 0 + findMaxProfit(i+1,1,k,prices,dp);
          maxProfit = max(buy,notbuy);
        }
        else
        {
          int sell = prices[i] + findMaxProfit(i+1,1,k-1,prices,dp);
          int notsell = 0 + findMaxProfit(i+1,0,k,prices,dp);
          maxProfit = max(sell,notsell);  
        }
        return dp[i][canBuy][k]= maxProfit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
      return findMaxProfit(0,1,k,prices,dp);
    }
};
