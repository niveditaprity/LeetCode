class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
      set<string>st;
      for(auto x:wordList)
      {
          st.insert(x);
      }
      int depth = 0;
      queue<string>q;
      q.push(beginWord);
      while(!q.empty())
      {
          depth++;
          int n=q.size();
          while(n--)
          {
              string temp = q.front();
              q.pop();
          for(int i=0;i<temp.size();i++)
          {
              string str = temp;
              for(char c='a';c<='z';c++)
              {
                  str[i]=c;
                  if(st.find(str)==st.end())
                  {
                      continue;
                  }
                  if(str==endWord)
                  {
                      return depth+1;
                  }
                  if(st.find(str)!=st.end())
                  {
                      q.push(str);
                      st.erase(str);
                  }
              }
          }
          }
          
      }
        return 0;
      
    }
};
