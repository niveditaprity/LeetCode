class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
         vector<vector<int>> result(numRows);
        
        for(int i = 0; i < numRows; ++i) 
            for(int j = 0; j <= i ; ++j)
                result[i].emplace_back( 0 < j && j < i ? result[i-1][j-1] + result[i-1][j] : 1);        

        return result;
        
    }
};
