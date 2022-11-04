class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n=nums.size();
        if(n<1)
        {
            return 0;
        }
        int l=0,r=n;
        while(l<r)
        {
            int m=(l+r)/2;
            if(nums[m]<target)
            {
                l=m+1;
            }
            else
            {
                r=m;
}
        }
        return l;
        
        
    }
};
