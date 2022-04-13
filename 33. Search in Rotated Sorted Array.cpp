class Solution {
public:
    int search(vector<int>& nums, int target) {
      int left=0,right=nums.size()-1;
        while(left<=right)
        {
            if(nums[left]==target)
            {
                return left;
            }
            else if(nums[right]==target)
            {
                return right;
            }
            else if(target>nums[left])
            {
                left++;
            }
            else if(target<nums[right])
            {
                right--;
            }
            else
            {
                return -1;
            }
        }
     return -1;   
    }
};
