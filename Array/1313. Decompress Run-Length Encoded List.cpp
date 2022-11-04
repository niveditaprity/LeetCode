class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
     vector<int>v;
        for(int i=0;i<nums.size()-1;i+=2)
        {
            int f=nums[i];
            int val=nums[i+1];
            while(f>0)
            {
                v.push_back(val);
                f--;
            }
        }
        return v;
    }
};
