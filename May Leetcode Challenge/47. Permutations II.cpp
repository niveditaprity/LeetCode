class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>s;
    void permutation(vector<int>&nums,int l,int r)
    {
        if(l==nums.size() && s.find(nums)==s.end())
        {
           ans.push_back(nums);
           s.insert(nums);
            return;
        }
        for(int i=l;i<=r;i++)
        {
            swap(nums[i],nums[l]);
            permutation(nums,l+1,r);
            swap(nums[i],nums[l]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         permutation(nums,0,nums.size()-1);
        return ans;
    }
};
