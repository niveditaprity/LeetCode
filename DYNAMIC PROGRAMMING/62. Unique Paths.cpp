class Solution {
public:
    int dp[101][101];
    int solve(int i,int j,int m,int n)
    {
        if(i==m-1 && j==n-1)
        {
            return 1;
        }
        if(i+1>m)
        {
         return 0;
        }
        if(j+1>n)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        dp[i][j] = solve(i+1,j,m,n)+solve(i,j+1,m,n);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
     memset(dp,-1,sizeof(dp));
     return solve(0,0,m,n);   
    }
};
