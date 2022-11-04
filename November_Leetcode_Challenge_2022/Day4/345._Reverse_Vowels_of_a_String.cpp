class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u'
            || c == 'A' || c == 'I' || c == 'E' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
      int i = 0,j=s.size();
      while(i<j)
      {
          if(isVowel(s[i]) && isVowel(s[j]))
          {
              swap(s[i],s[j]);
              i++;
              j--;
          }
          else if(!isVowel(s[i]))
          {
            i++;  
          }
          else if(!isVowel(s[j]))
          {
              j--;
          }
      }
        return s;
    }
};
