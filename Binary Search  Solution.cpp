class Solution {
public:
    int bsearch(vector<int>&nums,int l,int r,int target)
    {
        if(r>=l)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target)
            {
                return m;
            }
            if(nums[m]<target)
            {
              return bsearch(nums,m+1,r,target);  
            }
            return bsearch(nums,l,m-1,target);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return bsearch(nums,0,n,target);
    }
};
