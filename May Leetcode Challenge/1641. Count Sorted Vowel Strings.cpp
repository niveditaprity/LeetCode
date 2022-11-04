class Solution {
public:
    int countVowelStrings(int n) {
       vector<vector<int>> matrix(n+1, vector<int>(5, 0));
        if(n == 1) return 5;
        
        for(int j = 0; j <5 ; j++) matrix[0][j] = 1;
        
        for(int i = 1; i <= n; i++) for(int j = 0 ; j <5; j++)
            
                    matrix[i][j] = accumulate(matrix[i-1].begin(), matrix[i-1].begin() + j+1, 0);

        return matrix[n][4];
    }
};
