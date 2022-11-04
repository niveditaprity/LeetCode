class Solution {
public:
    vector<vector<int>>dirs={{-1,0},{0,-1},{1,0},{0,1}};
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
      int m=matrix.size();
      int n=matrix[0].size();
      int longestpath=0;
      vector<vector<int>>dp(m,vector<int> (n));
      for(int i=0;i<m;i++)
      {
          for(int j=0;j<n;j++)
          {
              longestpath=max(longestpath,dfs(m,n,i,j,matrix,dp));
          }
      }
        return longestpath;
        
    }
int dfs(int m,int n,int i,int j,vector<vector<int>>& matrix,vector<vector<int>>&dp)
    
{
    int maxpath=0;
    if(dp[i][j]>0)
    {
        return dp[i][j];
    }
    for(auto x:dirs)
    {
        int p=i+x[0];
        int q=j+x[1];
        if(p>=0 && q>=0 && p<m && q<n && matrix[p][q]>matrix[i][j])
        {
        maxpath=max(maxpath,dfs(m,n,p,q,matrix,dp));
        }
        
    }
    dp[i][j]=maxpath+1;
    return maxpath+1;  
}
};
