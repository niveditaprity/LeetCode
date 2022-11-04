class Solution {
public:
    int kthFactor(int n, int k) {
        int count=0;
        int i=1;
        while(i<=n)
        {
            if(n%i==0)
            {
                count++;
            }
            if(count==k)
            {
                return i;
            }
            i++;
        }
        return -1;
    }
};
