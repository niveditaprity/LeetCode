class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
        mp[nums[i]]++;
        }
        int count=0;
        for(auto x:mp)
        {
           mp[x.first]=count;
            count+=x.second;
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=mp[nums[i]];
        }
        return nums;
    }
};
