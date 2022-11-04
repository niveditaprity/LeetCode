class Solution {
public:
    int maxProduct(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        int n=nums.size();
        int p=nums[n-1]-1;
        int q=nums[n-2]-1;
            return p*q;
    }
};
