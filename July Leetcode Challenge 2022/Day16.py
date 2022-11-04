class Solution:
    
    def findPaths(self, m: int, n: int, maxMove: int, startRow: int, startColumn: int) -> int:
        dp = [[[-1 for i in range(51)] for j in range(51)] for k in range(51)]
        mod = 10**9 + 7
        def dfs(m,n,maxMove,r,c):
            if r<0 or r>=m or c<0 or c>=n:
                return 1
            if maxMove <=0 :
                return 0
            if dp[r][c][maxMove] !=-1:
                return dp[r][c][maxMove]
            dp[r][c][maxMove] = dfs(m,n,maxMove-1,r-1,c) % mod + dfs(m,n,maxMove-1,r+1,c)%mod + dfs(m,n,maxMove-1,r,c-1)%mod + dfs(m,n,maxMove-1,r,c+1)%mod
            return dp[r][c][maxMove]%mod
        return dfs(m,n,maxMove,startRow,startColumn)
        
        
