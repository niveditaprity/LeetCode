class Solution {
public:
    string minRemoveToMakeValid(string s) {

      int count=0;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                count++;
            }
           else if(s[i]==')')
            {
                if(count==0)
                {
                    continue;
                }
                count--;
            }
            str+=s[i];
        }
        if(count==0)
        {
            return str;
        }
        string ans="";
        if(count!=0)
        {
        for(int i=str.size()-1;i>=0;i--)
        {
            if(str[i]=='(' &&count>0)
            {
                count--;
                continue;
            }
            ans+=str[i];
        }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
