class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        return nums.size();
        
    }
};
