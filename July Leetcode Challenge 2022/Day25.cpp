class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        vector<int>ans(2,-1);
        while(l <= r)
        {
            int mid = r+(l-r)/2;
            
            if(nums[mid] == target )
            {
                ans[0] = mid;
                r = mid-1;
            }
            else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        l=0,r = nums.size()-1;
        while(l <= r)
        {
            int mid = r+(l-r)/2;
            
            if(nums[mid] == target )
            {
                ans[1] = mid;
                 l = mid+1;
            }
            else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        return ans;
        
    }
};
