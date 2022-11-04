class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>mp(127,-1);
        int pos=-1, maxlen=0;
       
        for (int i = 0; i < s.size(); i++)
        {
            int ch = s[i];
            pos = max(pos, mp[ch]);   
            maxlen = max(maxlen, i - pos);
            mp[ch] = i;
        }

        return maxlen;
    }
};
