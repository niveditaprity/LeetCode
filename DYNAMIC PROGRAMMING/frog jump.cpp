class Solution {
public:
    unordered_map<int,int>mp;
    int dp[2001][2001];
    bool solve(int pos,int prevStep,vector<int>& stones,int n, map<pair<int,int>,bool>&dp)
    {
        if(mp[pos] == false  || pos>stones[n-1])
        {
            return false;
        }
        if(pos == stones[n-1])
        {
            return true;
        }
        if(dp.find({pos,prevStep})!=dp.end())
        {
            return dp[{pos,prevStep}];
        }
        bool canCross;
        if(pos == 0)
        {
         canCross = solve(pos+1,1,stones,n,dp);
        }
        else
        {
        if(prevStep-1>0)
        {
            canCross = solve(pos+(prevStep-1),prevStep-1,stones,n,dp);
        }
        if(canCross == true)
        {
            return true;
        }
        canCross =  solve(pos+prevStep,prevStep,stones,n,dp);
        if(canCross == true)
        {
            return true;
        }
        canCross = solve(pos+(prevStep+1),prevStep+1,stones,n,dp);
        if(canCross == true)
        {
            return true;
        }
        }
        dp[{pos,prevStep}]= canCross;
        return dp[{pos,prevStep}];
    }
    bool canCross(vector<int>& stones) {
        map<pair<int,int>,bool> dp;
        for(auto x: stones)
        {
            mp[x]=true;
        }
        int n = stones.size();
       return solve(0,1,stones,n,dp);
    }
};
