class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int m,startsum=0,ttsum=0;
        ttsum=accumulate(nums.begin(),nums.end(),0);
        
        
        for(int i=0;i<nums.size();i++)
        {
           m=i;
            ttsum-=nums[i];
            if(ttsum==startsum)
            {
                return m;
            }
            else
            {
                startsum+=nums[i];
            }
        }
        if(m==nums.size()-1)
        {
            return -1;
        }
        return m;
        
    }
};
