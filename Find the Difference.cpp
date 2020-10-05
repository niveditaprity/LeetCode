class Solution {
public:
    char findTheDifference(string s, string t) {
        int str[27]={0};
        for(int i=0;i<s.size();i++)
        {
            str[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(str[t[i]-'a']==0)
            {
                return t[i];
            }
            else
            {
                str[t[i]-'a']--;
            }
        }
        return 'a';
    }
};
