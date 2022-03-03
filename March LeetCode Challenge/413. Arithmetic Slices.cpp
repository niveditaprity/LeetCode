class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int total=0,curr=0;
        int diff;
        for (int i=1; i<nums.size(); i++) {
            if (nums[i] - nums[i-1] == diff) {
                curr++;
                if (curr>= 2) {
                    total += (curr-1);
                }
            } else {
                diff = nums[i] - nums[i-1];
                curr= 1;
            }
        }
        return total;
    }
};
