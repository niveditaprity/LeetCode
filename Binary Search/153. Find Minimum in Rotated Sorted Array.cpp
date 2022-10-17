class Solution {
public:
    int findMin(vector<int>& nums) {
        int s =0;
        int e = nums.size()-1;
        int m = s + (e-s)/2;
        while(s<e){
            if(nums[m]>=nums[0])
            {
                s = m+1;
            }
            else{
                e = m;
            }
            m = s + (e-s)/2;
        }
        if(nums[e]>nums[0]){ //Array is never rotated 
            return nums[0];
        }
        return nums[e];
    }
};
