class Solution {
public:
    long int mod =1000000007;
    int kInversePairs(int n, int k) {
        vector<vector<int>> dp(n+1,vector<int>(k+1,0));
        dp[0][0] =1;
        for(int i=1;i<=n;i++)
        {
           long int val=0;
            for(int j=0;j<=k;j++)
            {
               val+=dp[i-1][j];
                if(j>=i)
                {
                    val-=dp[i-1][j-i];
                }
            dp[i][j]=val%mod;
            }
        }
        return dp[n][k];
     
    }
};
