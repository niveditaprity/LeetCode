class Solution {
public:
bool static compare(string &s1,string &s2)
{
    return s1.size() > s2.size();
}
int longestStrChain(vector<string>& words) {
    int n=words.size();  
    sort(words.begin(),words.end(),compare);
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[words[i]]=i;
    }
    vector<int>dp(n+1,1);
    int ans=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<words[i].size();j++)
        {
            string ns=words[i].substr(0,j)+words[i].substr(j+1);
            if(mp.find(ns)!=mp.end())
            {
            dp[mp[ns]]=max(dp[mp[ns]],1+dp[i]);
            ans=max(ans,dp[mp[ns]]);
            }
        }
    }
    return ans;
    
    }
};
