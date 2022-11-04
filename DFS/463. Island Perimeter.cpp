class Solution {
public:
    void dfs(int i, int j,vector<vector<int>>& grid,int&ans)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]==0)
        {
            ans++;
            return;
        }
        if(grid[i][j]==2)
        {
            return;
        }
        grid[i][j]=2;
        dfs(i+1,j,grid,ans);
        dfs(i,j+1,grid,ans);
        dfs(i-1,j,grid,ans);
        dfs(i,j-1,grid,ans);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
       int ans = 0;
       for(int i=0;i<grid.size();i++)
       {
           for(int j=0;j<grid[0].size();j++)
           {
               if(grid[i][j]==1)
               {
                   dfs(i,j,grid,ans);
               }
           }
       }
        return ans;
    }
};
