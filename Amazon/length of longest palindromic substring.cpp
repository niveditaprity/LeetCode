#include <bits/stdc++.h>
using namespace std;

int main() {
	string s="aaaabbaa";
	int n=s.size();
        int start=n;
        int end=n;
        int dp[start][end];
        for(int i=0;i<start;i++)
        {
            dp[i][i]=1;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
            }
        }
        int max=0;
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<end-k+1;i++)
            {
                int j=i+k-1;
                if(s[i]==s[j] &&dp[i+1][j-1]==1)
                {
                   
                    if(abs(j-i)+1>max)
                    {
                        max=abs(j-i)+1;
                    }
                    dp[i][j]=1;
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        cout<<max<<"\n";
	return 0;
}
