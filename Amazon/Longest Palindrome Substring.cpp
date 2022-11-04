class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();

        int dp[n][n];
        memset(dp, 0, sizeof(dp));
        int max=1;
        int p=0;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                max=2;
                p=i;
            }
        }
        
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j=i+k-1;
                if(dp[i+1][j-1]==1 && s[i]==s[j] )
                {
                   dp[i][j]=1;
                    
                    if(k>max)
                    {
                        max=k;
                        p=i;
                    }
    
                }
            }
        }
        string str="";
        for(int i=p;i<=p+max-1;++i)
        {
            str+=s[i];
        }
        
        return str;
    }
};
