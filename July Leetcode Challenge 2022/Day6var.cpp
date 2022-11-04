class Solution {
public:
    int fib(int n) {
    int p2=1,p1=0,curr;
    if(n<=1)
    {
        return n;
    }
    for(int i=1;i<n;i++)
    {
      curr=p1+p2;
        p1=p2;
        p2=curr;
    }
        return curr;
    }
};
