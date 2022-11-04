class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
    int t = minutesToTest / minutesToDie;
     return ceil(log(buckets) / log(t+1));
    }
};
