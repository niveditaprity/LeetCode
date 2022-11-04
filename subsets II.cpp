class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<multiset<int>> res;
        int n = nums.size();
        for(int mask=0;mask<(1<<n);mask++){
            multiset<int> temp;
            for(int i=0;i<n;i++){
                if((1<<i)&mask)
                    temp.insert(nums[i]);
            }
            res.insert(temp);
        }
        vector<vector<int>> ans;
        for(auto s:res){
            vector<int> temp(s.begin(),s.end());
            ans.push_back(temp);
        }
        return ans;
    }
};
