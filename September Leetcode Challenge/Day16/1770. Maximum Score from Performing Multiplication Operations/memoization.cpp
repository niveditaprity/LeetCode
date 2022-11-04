class Solution {
public:
    vector<vector<int>> dp;
    int findScore(int i,int left,int right, vector<int>& nums, vector<int>& multipliers)
    {
        int m = multipliers.size();
        if(i==multipliers.size())
        {
            return 0;
        }
        if(dp[i][left]!=INT_MIN)
        {
            return dp[i][left];
        }

int l = multipliers[i]*nums[left]+findScore(i+1,left+1,right,nums,multipliers);
int r = multipliers[i]*nums[right] + findScore(i+1,left,right-1,nums,multipliers);
        
        return dp[i][left] = max(l,r);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = nums.size();
        int m = multipliers.size();
     
     dp.assign(m + 1, vector<int> (m+1, INT_MIN));
     return  findScore(0,0,n-1,nums,multipliers);
    }
};
