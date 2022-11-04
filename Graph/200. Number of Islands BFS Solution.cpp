class Solution {
public:
  void occupy(vector<vector<char>>&grid,int i,int j,int r,int c)
    {
        queue<pair<int,int>>q;
        vector<vector<int>>dir={{0,1},{1,0},{-1,0},{0,-1}};
        q.push({i,j});
        while(!q.empty())
        {
           pair<int,int> p=q.front();
            q.pop();
            int x=p.first;
            int y=p.second;
            for(int k=0;k<dir.size();k++)
            {
                int nx=x+dir[k][0];
                int ny=y+dir[k][1];
if(nx>=0 && ny>=0&&nx<r&&ny<c&&grid[nx][ny]=='1')
{
    q.push({nx,ny});
    grid[nx][ny]='0';
}
        }
    }
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        if(rows==0)
        {
            return 0;
        }
        int count=0;
        int col=grid[0].size();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                    occupy(grid,i,j,rows,col);
                    count++;
                }
            }
        }
        return count;
    }
};
