class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int s=0,f=0;
        do{
            s=nums[s];
            f=nums[nums[f]];
        }while(s!=f);
        s=0;
        while(s!=f)
        {
            s=nums[s];
            f=nums[f];
        }
        return s;
    }
};
