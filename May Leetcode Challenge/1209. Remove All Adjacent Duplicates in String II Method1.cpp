class Solution {
public:
    string removeDuplicates(string s, int k) {
         stack<int> counts;
    for (int i = 0; i < s.size(); ++i) {
        if (i == 0 || s[i] != s[i - 1]) {
            counts.push(1);
        } else if (++counts.top() == k) {
            counts.pop();
            s.erase(i - k + 1, k);
            i = i - k;
        }
    }
    return s;
        
        
    }
};
