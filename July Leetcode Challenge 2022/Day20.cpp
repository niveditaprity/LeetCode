class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=words.size();
        vector<vector<int>>charIndex(26);
        
        for(int i=0;i<s.size();i++)
        {
            charIndex[s[i]-'a'].push_back(i);
        }
        
        for(auto &word:words)
        {
            int lastCharIndex=-1;
            for(auto w:word)
            {
          auto &charIndexArray=charIndex[w -'a'];
          auto index=upper_bound(charIndexArray.begin(),charIndexArray.end(),lastCharIndex);
            if(index==charIndexArray.end())
            {
                count--;
                break;
            }
            else
            {
              lastCharIndex=*index;  
            }
            }
        }
        return count;
    }
};
