class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int meh=0,msf=INT_MIN;
      for(int i=0;i<nums.size();i++)
      {
          meh+=nums[i];
          if(meh<nums[i])
          {
              meh=nums[i];
          }
          if(meh>msf)
          {
              msf=meh;
          }
      }
        return msf;
    }
};
