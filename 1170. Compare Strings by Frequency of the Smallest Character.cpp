class Solution {
public:
    int f(string s)
    {
       char c = *min_element(s.begin(),s.end());
        return count(s.begin(),s.end(),c);
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        vector<int>fre,res;
        for(auto word:words)
        {
            fre.push_back(f(word));
        }
        sort(fre.begin(),fre.end());
        for(auto q:queries)
        {
            int i=upper_bound(fre.begin(),fre.end(),f(q))-fre.begin();
            res.push_back(words.size()-i);
        }
        return res;
    }
};
