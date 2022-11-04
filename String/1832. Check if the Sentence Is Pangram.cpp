class Solution {
public:
    bool checkIfPangram(string sentence) {
      
        map<char,int>v;
        for(int i=0;i<sentence.size();i++)
        {
            v[sentence[i]]++;
        }
        if(v.size()==26)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
