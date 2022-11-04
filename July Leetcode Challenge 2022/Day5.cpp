class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>sets(nums.begin(), nums.end());
        int ans=0;
        for(int it: nums){
            if(sets.find(it)==sets.end())
            {continue;
            }
            int prev = it-1, next = it+1;
            while(sets.find(prev)!=sets.end()) 
            {
                prev--;
            }
            while(sets.find(next)!=sets.end()) 
            {
                next++;
            }
            ans = max(ans, next-prev-1);                    
            sets.erase(it);    
        }
        return ans;
    }
};
