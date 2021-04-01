class Solution {
public:
    int checkstr(string &str,string stamp)
    {
        int n = str.length();
        for(int i=0;i<n;i++)
        {
            int j=0,temp=i;
            bool flag=false;
            while(j<stamp.length() and temp<n && (str[temp]=='*'|| str[temp]==stamp[j]))
            {
                if(str[temp]==stamp[j])
                {
                    flag=true;
                }
                    temp++;
                    j++;
                }
            if(j==stamp.length()&&flag)
            {
                for(int k=0;k<stamp.length();k++)
                {
                    str[i+k]='*';
                }
                return i;
            }
            }
        return n;
        }
    vector<int> movesToStamp(string stamp, string target) {
        vector<int>ans,result;
        string str=target;
        string ff(target.length(),'*');
        while(str!=ff)
        {
            int value = checkstr(str,stamp);
            if(value==str.length())
            {
                return result;
            }
            ans.push_back(value);
            
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            result.push_back(ans[i]);
        }
        return result;
        
    }
};
