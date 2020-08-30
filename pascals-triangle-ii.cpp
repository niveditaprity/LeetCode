class Solution {
public:
    vector<int> getRow(int rowIndex) {
    
         vector<vector<int>> result(rowIndex+1);
        
        for(int i = 0; i < rowIndex+1; ++i) 
            for(int j = 0; j <= i ; ++j)
                result[i].emplace_back( 0 < j && j < i ? result[i-1][j-1] + result[i-1][j] : 1);      
        vector<int>v(result[rowIndex].begin(),result[rowIndex].end());
        return v;
        
    }
};
