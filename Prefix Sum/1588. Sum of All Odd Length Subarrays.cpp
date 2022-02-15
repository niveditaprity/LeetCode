class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int ans = 0;
        for(int i=0;i<arr.size();i++) {
            int cnt=(arr.size()-i)*(i+1);
            cnt = cnt/2+cnt%2;
            ans+=cnt*arr[i];
        }
        return ans;  
    }
};
