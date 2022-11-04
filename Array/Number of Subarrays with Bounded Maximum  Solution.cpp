class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
       int res = 0;
        int prev_bigger_than_r = -1;
        int count_prev = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > right) {
                prev_bigger_than_r = i;
                count_prev = 0;
            }
            
            else if (nums[i] < left) {
                res += count_prev;
            }
            
            else {
                count_prev = i - prev_bigger_than_r;
                res += count_prev;
                
            }
        }
        return res;   
    }
};
