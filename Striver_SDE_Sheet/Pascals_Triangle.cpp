class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         
        vector<vector<int>>ans(numRows);
        for(int i=0;i<numRows;i++)
        {
            for(int j=0; j<=i; j++)
            {
                ans[i].push_back(j>0 &&j<i? ans[i-1][j] + ans[i-1][j-1]:1);
            }
        }
    return ans;  
    }
};
