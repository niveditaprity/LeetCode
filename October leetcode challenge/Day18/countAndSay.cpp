class Solution {
public:
    string countAndSay(int n) {
     string ans = "1";
     
    for(int i = 2; i<=n; i++)
    {
      string lastString = ans; 
      int l = ans.size();
      int j = 0;
      ans="";
     while(j<l)
     {
         int count = j;
         while(j<l && lastString[j] == lastString[count])
         {
             count++;
         }
         ans+=to_string(count-j) + lastString[j];
         j=count;
     }
    }
        return ans;
    }
};
