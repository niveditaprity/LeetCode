class Solution {
public:
    int mod =1000000007;
    int dp[31][1001];
    int solve(int dice,int k,int target)
    {
        if(dice == 0)
        {
            if(target == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if(target<0)
        {
            return 0;
        }
       if(dp[dice][target]!=-1)
       {
           return dp[dice][target];
       }
        int count = 0;
        for(int i=1;i<=k;i++)
        {
            count+= solve(dice-1,k,target-i);
            count = count % mod;
        }
      return dp[dice][target]= count;
        
    }
    
    int numRollsToTarget(int n, int k, int target) {
     memset(dp, -1, sizeof(dp));
     return solve(n,k,target);
    }
};
