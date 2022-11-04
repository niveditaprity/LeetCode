class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      string ans;
        int i,j;
        int m=word1.size();
        int n=word2.size();
        while(i<m&&j<n)
        {
            ans+=word1[i++];
            ans+=word2[j++];
        }
        if(i<m)
        {
        while(i<m)
        {
             ans+=word1[i++];
        }
        }
        if(j<n)
        {
        while(j<n)
        {
         ans+=word2[j++];   
        }
        }
        return ans;
    }
};
