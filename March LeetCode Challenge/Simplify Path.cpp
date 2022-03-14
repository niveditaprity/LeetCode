class Solution {
public:
    string simplifyPath(string path) {
     
        stack<string>s;
        int n=path.size();
        for(int i=0;i<n;i++)
        {
            string str;
            if(path[i]=='/')
            {
                continue;
            }
            while(i<n&&path[i]!='/')
            {
                str+=path[i++];
            }
            if(str=="..")
            {
                if(!s.empty())
                {
                    s.pop();
                }
            }
            else if(str==".")
            {
                continue;
            }
            else
            {
                s.push(str);
            }
        }
        string ans="";
        while(!s.empty())
        {
            ans="/"+s.top()+ans;
            s.pop();
        }
        return ans.size()>0?ans:"/";
        
        
        
    }
};
