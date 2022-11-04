class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1,maxn=0,minn=n-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>nums[maxn])
            {
                maxn=i;
            }
            else if(nums[maxn]>nums[i])
            {
                l=i;
            }
            if(nums[n-i-1]<nums[minn])
            {
                minn=n-i-1;
            }
            else if(nums[n-i-1]>nums[minn])
            {
                r=n-i-1;
            }
        }
       if(r>=l)
       {
           return 0;
       }
        return l-r+1;
    }
};
