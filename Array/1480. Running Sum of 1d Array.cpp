class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v(nums.size());
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            v[i]+=nums[i]+v[i-1];
        }
       return v; 
    }
};
