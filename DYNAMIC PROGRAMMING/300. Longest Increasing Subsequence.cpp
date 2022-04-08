class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int n=nums.size();
        vector<int>list(n,1);
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j] && list[j]>=list[i])
                {
                    list[i]=1+list[j];
                }
            }
        }
        return *max_element(list.begin(),list.end());
    }
};
