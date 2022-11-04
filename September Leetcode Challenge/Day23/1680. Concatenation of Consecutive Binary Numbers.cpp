class Solution {
public:
    int totalNofBits(int n)
    {
        return log2(n)+1;
    }
    int concatenatedBinary(int n) {
        long ans = 0;
        long MOD = 1e9 + 7;
        
        for (int i = 1; i <= n; ++i) {
            int no = totalNofBits(i);
            ans = ((ans << no) % MOD + i) % MOD;
        }
        return ans;
    }
};
