class Solution {
public:
    int findScore(int i,int left,int right, vector<int>& nums, vector<int>& multipliers)
    {
        if(i==multipliers.size())
        {
            return 0;
        }
        
        int l = multipliers[i]*nums[left]+findScore(i+1,left+1,right,nums,multipliers);
        int r = multipliers[i]*nums[right] + findScore(i+1,left,right-1,nums,multipliers);
        
        return max(l,r);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
     int n=nums.size();
    return  findScore(0,0,n-1,nums,multipliers);
    }
};
