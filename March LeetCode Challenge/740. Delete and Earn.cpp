class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int>freq(10001);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        int ep=0;
        int cp=0;
        for(int i=1;i<10001;i++)
        {
            int c= ep+freq[i]*i;
            ep=max(cp,ep);
            cp=c;
        }
        return max(cp,ep);
    }
};
