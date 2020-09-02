class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid[0].size();
        int col=grid.size();
        int i=0;
        int j=row-1;
        int count=0;
        while(j>=0&&i<col)
        {
            if(grid[i][j]<0)
            {
                count+=(col-i);
                j--;
            }
            else
            {
                i++;
            }
        }
        return count;
        
    }
};
