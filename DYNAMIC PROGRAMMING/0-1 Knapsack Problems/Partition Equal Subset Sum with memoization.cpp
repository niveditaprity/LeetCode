class Solution {
public:
    bool isPartion(int i,vector<int>& nums,int n,vector<vector<int>>&dp)
    {
      if(n == 0)
      {
          return true;
      }
     if(i>=nums.size()) 
     {
         return false ;
     }
      if(n<0)
      {
          return false;
      }
        if(dp[i][n]!=-1)
        {
            return dp[i][n];
        }
      
      
     bool yes = isPartion(i+1,nums,n-nums[i],dp);
     bool no  = isPartion(i+1,nums,n,dp);
      
    // return yes || no;
     dp[i][n] = yes || no;
      return dp[i][n];
      
    }
    bool canPartition(vector<int>& nums) {
      int sum = 0;
      for(auto x:nums)
      {
          sum+=x;
      }
      if(sum%2==1)
       {
        return false;
       }
      int n = sum/2;
      vector<vector<int>>dp(nums.size()+1 ,vector<int>(n+1,-1));
      return isPartion(0,nums,n,dp);
        
    }
};
