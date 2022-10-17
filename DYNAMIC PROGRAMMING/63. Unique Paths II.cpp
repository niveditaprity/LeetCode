class Solution {
public:
    int dp[101][101];
    int solve(int i,int j,vector<vector<int>>&grid,int m,int n)
    {
        if(i>=m || j>=n|| grid[i][j]==1)
        {
            return 0;
        }
        if(i==m-1 && j == n-1)
        {
            return 1;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        dp[i][j] = solve(i+1,j,grid,m,n) + solve(i,j+1,grid,m,n);
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
      int m = obstacleGrid.size();
      int n = obstacleGrid[0].size();
      memset(dp,-1,sizeof(dp));
      return solve(0,0,obstacleGrid,m,n);
    }
};
