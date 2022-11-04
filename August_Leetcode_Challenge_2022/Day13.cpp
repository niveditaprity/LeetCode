class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
      vector<int>ans;
      int n = words.size();
      int m = words[0].size();
       if(s.size() <m*n)
       {
           return ans;
       }
      for(int i=0;i<=s.size()-(m*n);i++)
      {
          unordered_map<string,int>mp;
          for(int j=0;j<n;j++)
          {
              mp[words[j]]++;
          }
          int t;
          for(t=0;t<n;t++)
          {
              string str = s.substr(i+t*m,m);
              if(mp.count(str)==0)
              {
                  break;
              }
              else
              {
                  if(mp[str]!=0)
                  {
                  mp[str]--;
                  }
                  else
                  {
                      break;
                  }
                  
              }
          }
          if(t==n)
          {
              ans.push_back(i);
          }
           
      }
        return ans;
    }
};
