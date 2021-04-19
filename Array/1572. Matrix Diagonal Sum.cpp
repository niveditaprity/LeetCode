class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
     int sum=0;
        int n=mat.size();
        int m=n-1;
        for(int i=0;i<mat.size();i++)
        {
            sum+=mat[i][i];
            mat[i][i]=0;
           sum+=mat[i][m--];
            
        }
        return sum;
            
    }
};
