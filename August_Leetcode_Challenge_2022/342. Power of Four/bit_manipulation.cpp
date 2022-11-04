class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
        {
            return false;
        }
        if((n&(n-1))==0 && (n-1)%3==0)
        {
            return true;
        }
        return false;
    }
};
