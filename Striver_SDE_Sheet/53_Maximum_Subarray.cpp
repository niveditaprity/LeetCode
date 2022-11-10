class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxsum = nums[0],sum =nums[0];
      for(int i=1;i<nums.size();i++)
      {
          sum+=nums[i];
          if(nums[i]>sum)
          {
              sum = nums[i];
          }
          if(maxsum<sum)
          {
              maxsum = sum;
          }
      }
       return maxsum; 
        
    }
};
