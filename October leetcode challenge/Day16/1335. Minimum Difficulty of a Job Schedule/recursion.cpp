class Solution {
public:
    
    int solve(vector<int>& jobd,int n,int i, int d)
    {
        if(d==1)
        {
         return *max_element(begin(jobd)+i, end(jobd));
        }
        
        int result = INT_MAX;
        int currD = INT_MIN;
        for(int j=i;j<=n-d;j++)
        {
            currD=max(currD,jobd[j]);
            result = min(result,currD + solve(jobd,n,j+1,d-1));
        }
       
        return result;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if(n < d)
            return -1;
     return solve(jobDifficulty,n,0,d);  
    }
};
