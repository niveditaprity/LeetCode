class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        int r=0,c=matrix[0].size()-1;
        while(r<=matrix.size()-1 && c>=0)
        {
         if(matrix[r][c]==target)
         {
             return 1;
         }
        else if(matrix[r][c]<target)
         {
             r++;
         }
        else
        {
            c--;
        }
 
        }
        return 0;
    }
};
