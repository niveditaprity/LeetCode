class Solution {
public:
    bool search(vector<int>& nums, int target) {
     int left=0,right=nums.size()-1;
        while(left<=right)
        {
            if(nums[left]==target || nums[right]==target)
            {
                return true;
            }
            else if(nums[left]<target)
            {
                left++;
            }
            else if(nums[right]>target)
            {
                right--;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
};
