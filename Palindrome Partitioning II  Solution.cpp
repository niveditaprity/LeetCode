class Solution {
public:
    int minCut(string s) {
        int n = s.length();
        vector<int> dp(n+1);
        for(int i=1;i<=n;i++){
            dp[i] = i-1;
        }
        vector<vector<bool>> isPal(n+1,vector<bool>(n+1,false));
        for(int i=0;i<=n;i++)
            isPal[i][i] = true;
        for(int L=2;L<=n;L++){
            for(int i=1;i+L<=n+1;i++){
                int j = i + L - 1;
                if(L==2){
                    if(s[i-1]==s[j-1])
                        isPal[i][j] = true;
                }
                else{
                    if(s[i-1]==s[j-1] and isPal[i+1][j-1])
                        isPal[i][j] = true;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(isPal[1][i])
                dp[i] = 0;
            for(int j=2;j<=i;j++){
                if(isPal[j][i])
                    dp[i] = min(dp[i],1+dp[j-1]);
            }
        }
        return dp.back();
    }
};
