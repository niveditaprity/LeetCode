class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i, j;
 
   i= j = 0;
 
   while (s[i] != '\0') {
      while ((s[i] != t[j]) && t[j] != '\0') {
         j++;
      }
      if (t[j] == '\0')
         break;
      i++;
      j++;
   }
   if (s[i] == '\0')
      return 1;
   else
      return 0;
    } 
};
