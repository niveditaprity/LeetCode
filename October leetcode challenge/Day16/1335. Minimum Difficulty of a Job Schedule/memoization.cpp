class Solution {
public:
    int dp[301][11];
    int solve(vector<int>& jobd,int n,int i, int d)
    {
        if(d==1)
        {
         return *max_element(begin(jobd)+i, end(jobd));
        }
        if(dp[i][d]!=-1)
        {
            return dp[i][d];
        }
        int result = INT_MAX;
        int currD = INT_MIN;
        for(int j=i;j<=n-d;j++)
        {
            currD=max(currD,jobd[j]);
            result = min(result,currD + solve(jobd,n,j+1,d-1));
        }
        dp[i][d]=result;
        return dp[i][d];
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        memset(dp,-1,sizeof(dp));
        int n = jobDifficulty.size();
        if(n < d)
            return -1;
     return solve(jobDifficulty,n,0,d);  
    }
};
