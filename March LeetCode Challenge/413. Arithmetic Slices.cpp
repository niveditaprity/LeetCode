class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
      int n=nums.size();
        int curr=1,diff,total=0;
        if(n==1)
        {
            return 0;
        }
        diff=nums[1]-nums[0];
        for(int i=2;i<n;i++)
        {
            if(nums[i]-nums[i-1]==diff)
            {
                curr++;
                if(curr>=2)
                {
                    total+=(curr-1);
                }
            }
            else
            {
                diff=nums[i]-nums[i-1];
                curr=1;
            }
        }
        return total;
       
    }
};
