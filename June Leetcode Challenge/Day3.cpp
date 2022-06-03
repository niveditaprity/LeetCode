class NumMatrix {
public:
    vector<vector<int>>sum;
    NumMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();       
        int col=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                matrix[i][j]+=matrix[i][j-1];
            }
        }
         for(int i=1;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                matrix[i][j]+=matrix[i-1][j];
            }
        }
        sum=matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total=sum[row2][col2];
        int extrasum =(col1!=0?sum[row2][col1-1]:0)+(row1!=0?sum[row1-1][col2]:0)-((row1!=0 && col1!=0)?sum[row1-1][col1-1]:0);
        return total-extrasum;
    }
};
/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
