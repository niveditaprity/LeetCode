class Solution {
public:
    vector<vector<int>>subsetss;
    void generate(vector<int>&subset,int i,vector<int>&nums)
    {
       if(i==nums.size())
       {
           subsetss.push_back(subset);
           return;
       }
        //not included
        generate(subset,i+1,nums);
        //include
        subset.push_back(nums[i]);
        generate(subset,i+1,nums);
        subset.pop_back();   
    }
        
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<int>subset;
        generate(subset,0,nums);
        return subsetss;
    }
};
