class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int num=0,sum=0;
        for(auto x:nums)
        {
            sum+=x;
            num=min(num,sum);
        }
        return -num+1;
    }
};
