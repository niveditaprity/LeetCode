class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
     
     vector<int>vect;
        for(int i=0;i<nums.size();i++)
        {
            vect.insert(vect.begin()+index[i],nums[i]);
        }
return vect;
    }
};
