class Solution {
public:
    string simplifyPath(string path) {
      vector<string>v;
    istringstream iss(path); 
        string str;
        while(getline(iss,str,'/'))
        {
           if( str == "..") 
           {
               if(v.size())
               {
               v.pop_back();
               }
           }
          else  if(str.size()&&str!=".")
            {
              v.push_back(str);  
            }
        }
        
        string ans;
        for(auto &x:v)
        {
            ans+='/'+x;
        }
      return  ans.size()?ans:"/";
        
    }
};
