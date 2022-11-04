class Solution {
public:
    string removeDuplicates(string s, int k) {
       vector<pair<char, int>> counts;
    for (int i = 0; i < s.size(); ++i) {
        if (counts.empty() || s[i] != counts.back().first) {
            counts.push_back({s[i],1 });
        } else if (++counts.back().second == k) {
            counts.pop_back();
        }
    }
    s = "";
    for (auto &x : counts) {
        s += string(x.second, x.first);
    }
    return s; 
    }
};
