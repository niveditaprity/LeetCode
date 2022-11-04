class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v1(nums.size());
        v1[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
           v1[i]=nums[i]+ v1[i-1];
        }
        return v1;
    }
};
