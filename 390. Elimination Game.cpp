class Solution {
public:
    int lastRemaining(int n) {
        int a=1,d=0,r=1;
        while(n>1)
        {
        if(n&1 || d==0)
        {
            r+=a;
            }
            n /= 2;
            a*= 2;             
            d = !d;
        }
        return r;
        
        
        
    }
};
