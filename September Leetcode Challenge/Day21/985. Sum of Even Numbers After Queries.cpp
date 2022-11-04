class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
     
       vector<int>ans;
        
        int sum = 0;
        for(auto x :nums)
        {
            if(x%2 == 0)
            {
                sum+=x;
            }
        }
        for(auto x:queries)
        {
            int index = x[1];
            int val = x[0];
            
            if(nums[index]%2==0)
            {
                sum-=nums[index];
            }
            nums[index]+=val;
            
            if(nums[index]%2==0)
            {
              sum+=nums[index]; 
            } 
             ans.push_back(sum);
        }
        return ans;
        
        
    }
};
