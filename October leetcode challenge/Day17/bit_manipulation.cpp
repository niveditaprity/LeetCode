class Solution {
public:
    bool checkIfPangram(string sentence) {
    int tsb = 0;
    for(auto x:sentence)
    {
        int ch = x-'a';
        int bits = 1<<ch;
        tsb = tsb | bits;
    }
    return tsb == (1<<26)-1;   
    }
};
