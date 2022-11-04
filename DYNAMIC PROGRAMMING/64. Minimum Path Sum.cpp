class Solution {
public:
    int dp[201][201];
    int solve(int i,int j,vector<vector<int>>& grid,int m,int n)
    {
    if(i==m-1 && j == n-1)
    {
        return grid[i][j];
    }
    if(i>=m || j>=n)
    {
        return 1000;
    }
     if(dp[i][j]!=-1)
     {
         return dp[i][j];
     }
     
    dp[i][j]= min(solve(i+1,j,grid,m,n) + grid[i][j],solve(i,j+1,grid,m,n)+ grid[i][j]);
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
    memset(dp,-1,sizeof(dp));
     int m = grid.size();
     int n = grid[0].size();
     return solve(0,0,grid,m,n);   
    }
};
