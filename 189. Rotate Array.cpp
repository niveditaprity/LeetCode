class Solution {
public:
    void reverse(vector<int>&nums,int l,int h)
    {
        while(l<h)
        {
            int arr=nums[l];
            nums[l]=nums[h];
            nums[h]=arr;
            l++;
            h--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        if(nums.size() < 2) return;
        int diff = k%nums.size();
        if(diff == 0) return;
        
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, diff-1);
        reverse(nums, diff, nums.size()-1);
        
        
    }
};
