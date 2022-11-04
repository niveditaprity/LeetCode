class Solution {
public:
    
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        int tt = k;
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        for(int i = n-1 ;i>=0 ;i--)
        {
         for(int canBuy=0;canBuy<=1;canBuy++)
         {
         for(int k = 1;k<=tt;k++)
         {
        int maxProfit=0;
        if(canBuy)
        {
          int buy = -prices[i] + dp[i+1][0][k];
          int notbuy = 0 + dp[i+1][1][k];
          maxProfit = max(buy,notbuy);
        }
        else
        {
          int sell = prices[i] + dp[i+1][1][k-1];
          int notsell = 0 + dp[i+1][0][k];
          maxProfit = max(sell,notsell);  
        }
    dp[i][canBuy][k]=maxProfit;
    }
 }
        }
    
        return dp[0][1][tt];
    }
};
