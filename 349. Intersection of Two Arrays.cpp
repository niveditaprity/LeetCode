class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            if(mp[nums1[i]]==0)
            {
                mp[nums1[i]]++;
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp[nums2[i]]==1)
            {
                mp[nums2[i]]++;
                v.push_back(nums2[i]);
            }
        }
        
        return v;
    }
};
