class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(r==0)
        {
            return nums[r];
        }
        if(nums[l]!=nums[l+1])
        {
            return nums[l];
        }
        if(nums[r]!=nums[r-1])
        {
            return nums[r];
        }
        while(l<=r)
        {
           int mid=r+(l-r)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
            {
                return nums[mid];
            }
            if(((mid%2)==0 && nums[mid]==nums[mid+1]) || ((mid%2)==1) && nums[mid]==nums[mid-1])
            {
                l=mid+1;   
            }
            else
            {
                r=mid-1;
            }
        }
        return -1;
    }
};
