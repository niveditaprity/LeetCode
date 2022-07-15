class Solution {
public:
    void dfs(vector<vector<int>>& grid,int&area,int i,int j, int r,int c)
    {
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]==0)
        {
            return;
        }
        area++;
        grid[i][j]=0;
        dfs(grid,area,i+1,j,r,c);
        dfs(grid,area,i-1,j,r,c);
        dfs(grid,area,i,j+1,r,c);
        dfs(grid,area,i,j-1,r,c);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     int r=grid.size();
     int c=grid[0].size();
     int maxa=0;
     for(int i=0;i<r;i++)
     {
         for(int j=0;j<c;j++)
         {
             if(grid[i][j]==1)
             {
                 int area=0;
                 dfs(grid,area,i,j,r,c);
                 maxa=max(maxa,area);
             }
             
         }
     }
        return maxa; 
    }
};
