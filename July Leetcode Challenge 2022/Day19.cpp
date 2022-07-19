class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>rows(numRows);
        for(int i=0;i<numRows;i++)
        {
          for(int j=0;j<=i;j++)
          {
              rows[i].push_back(j>0&&j<i?rows[i-1][j]+rows[i-1][j-1]:1);
          }
            
        }
        return rows;
    }
};
