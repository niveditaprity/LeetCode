class Solution {
private:
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int st_row = 0;
        int st_col = col - 1;    //To set element at up-right
        while(st_row<row && st_col>=0)
        {
            if(matrix[st_row][st_col]==target) //If target found at element at up-right
            {
                return true;
            }
            else if(matrix[st_row][st_col]>target) //If target is > element element at up-right
            {
                st_col--;
            }
            else
            {
                st_row++;
            }
        }
    return false;
    }
};
