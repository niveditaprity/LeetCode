class Solution {
public:
    int longestPalindrome(vector<string>& words) {
     map<string,int>mp;
     int len = 0;
     int ans = 0;
     bool flag = false;
     for(auto word : words)
     {
         mp[word]++;
     }
     for(auto x : mp)
     {
         if(x.first[0] == x.first[1])
         {
             if(x.second % 2 == 1)
             {
                 flag = true;
                 len+=(x.second-1);
             }
             else
             {
                 len+=mp[x.first];
             }
              mp.erase(x.first);
         }
         else
         {
             string str = x.first;
             reverse(str.begin(),str.end());
             if(mp.find(str)!=mp.end())
             {
                 ans+=min(mp[str],x.second)*4;
             }
             mp.erase(str);
             mp.erase(x.first);
         }
     }
        if(flag)
         {
           return ans+len*2+2;  
         }
         return ans+len*2;
    }
};
