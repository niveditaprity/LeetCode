class Solution {
public:
    void numsisland(vector<vector<char>>&grid,int x,int y,int rows,int cols)
    {
       if(x<0||x>=rows||y<0||y>=cols||grid[x][y]!='1')
       {
          return;
       }
        else
        {
            grid[x][y]='2';
        }
        numsisland(grid,x+1,y,rows,cols);
        numsisland(grid,x-1,y,rows,cols);
        numsisland(grid,x,y+1,rows,cols);
        numsisland(grid,x,y-1,rows,cols);
    }
    int numIslands(vector<vector<char>>& grid) {
     int n=grid.size();
        int col=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    numsisland(grid,i,j,n,col);
                    count++;
                }
            }
        }
      return count;  
    }
};
