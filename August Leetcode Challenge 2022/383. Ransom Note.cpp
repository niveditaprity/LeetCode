class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       vector<int>r(26,0);
       vector<int>m(26,0);
        for(int i=0;i<ransomNote.size();i++)
        {
            r[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.size();i++)
        {
            m[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
           if(r[i]>m[i])
           {
               return false;
           }
        }
        return true;
    }
};
