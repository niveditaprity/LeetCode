class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l=0,r=nums.size();
        int p=l+(r-l)/2;
        while(l<r)
        {
             int p=l+(r-l)/2;
            if(nums[p]==target)
            {
                return p;
            }
            else if(nums[p]<target)
            {
                l++;
            }
            else if(nums[p]>target)
            {
                r--;
            }
        }
        return -1;
    }
};
