class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int moves=0;
        int mide=nums[n/2];
        for(int i=0;i<n;i++)
        {
            moves+=abs(nums[i]-mide);
        }
        return moves;
    }
};
