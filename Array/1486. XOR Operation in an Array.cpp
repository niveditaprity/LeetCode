class Solution {
public:
    int xorOperation(int n, int start) {
        int total=start+2*0;;
        for(int i=1;i<n;i++)
        {
            int p=start+2*i;
            total^=p;
        }
      return total;
    }
};
