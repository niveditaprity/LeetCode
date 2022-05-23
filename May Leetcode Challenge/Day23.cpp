class Solution {
public:
    
    int dp[101][101][601];
    
    int recur(vector<string>& strs, int m, int n, int i ){
        
        if(i >= strs.size() || n<0 || m<0 ){
            return 0;
        }
        if(dp[m][n][i] != -1)
            return dp[m][n][i];
        
      int zeros = count(strs[i].begin(),strs[i].end(),'0');
      int ones = count(strs[i].begin(),strs[i].end(),'1');
        
        if(m-zeros>=0 && n-ones>=0) 
        {
          return  dp[m][n][i] = max(1+recur(strs,m-zeros,n-       ones,i+1),recur(strs,m,n,i+1));
        }
        else
        {
          return dp[m][n][i] =recur(strs,m,n,i+1); 
        }
         
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
         
        memset(dp,-1,sizeof(dp));
       
        
        return recur(strs,m,n,0);
        
    }
};
