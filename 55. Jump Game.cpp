class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        int lastp=n;
        for(int i=n;i>=0;i--)
        {
            if(i+nums[i]>=lastp)
            {
             lastp=i;
            }
        }
      return lastp==0;  
    }
};
