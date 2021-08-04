class Solution {
public:
    vector<vector<int>>subsets;
    void generate(vector<int>&subset,int i,vector<int>&nums)
    {
       if(i==nums.size())
       {
           subsets.push_back(subset);
           return;
       }
        generate(subset,i+1,nums);
        subset.push_back(nums[i]);
        generate(subset,i+1,nums);
        subset.pop_back();   
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<int>v;
        generate(v,0,nums);
        return subsets;
        
    }
};
