class Solution {
public:
    int dp[51][51][51];
    long int mod=1e9+7;
    int dfs(int m, int n, int maxMove, int r, int c)
    {
        if(r<0 || r>=m ||c<0 || c>=n)
        {
            return 1;
        }
        if(maxMove<=0)
        {
            return 0;
        }
       if(dp[r][c][maxMove]!=-1)
       {
           return dp[r][c][maxMove];
       }
    
    return  dp[r][c][maxMove] = 
          (dfs(m,n,maxMove-1,r-1,c)%mod +
          dfs(m,n,maxMove-1,r+1,c)%mod +
          dfs(m,n,maxMove-1,r,c-1)%mod +
          dfs(m,n,maxMove-1,r,c+1)%mod)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        memset(dp,-1,sizeof(dp));
        return dfs(m,n,maxMove,startRow,startColumn);
    }
};
