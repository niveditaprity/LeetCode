class Solution {
public:
int dp[10001];
    
int solve(vector<int>& coins, int amount)
{
int ans=10001;
    
if(amount==0)
return 0;
    
if(dp[amount]!=-1)
return dp[amount];
    
for(int i=0;i<coins.size();i++)
{
if(amount-coins[i]>=0)
ans=min(ans,solve(coins,amount-coins[i])+1);
}
    
return dp[amount]=ans;

}
    
int coinChange(vector<int>& coins, int amount) {
    
memset(dp,-1,sizeof(dp));
    
int res=solve(coins,amount);
    
if(res==10001)
return -1;
return res;
}
    
};
