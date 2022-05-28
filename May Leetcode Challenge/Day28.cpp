class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=0;
        int result=nums.size();
        for(auto x:nums)
        {
            result=result^x;
            result=result^n;
            n++;
        }
        return result;
    }
};
