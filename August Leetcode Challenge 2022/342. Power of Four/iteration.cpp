class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
        {
            return 1;
        }
       if(n%4!=0)
       {
           return false;
       }
        long x=1;
        while(x<n)
        {
            x=x*4;
            if(x==n)
            {
                return true;
            }
        }
        return false;
    }
};
