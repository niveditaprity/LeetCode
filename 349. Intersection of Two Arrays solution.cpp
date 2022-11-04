class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> s1(nums1.begin(),nums1.end()), s2(nums2.begin(),nums2.end()), ans;
        for(auto x:s2) if(s1.find(x)!=s1.end()) ans.insert(x);
        return vector<int>(ans.begin(),ans.end());
        
    }
};
