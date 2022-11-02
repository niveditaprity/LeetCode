class Solution {
    public int[] findBall(int[][] grid) {
        int col=grid[0].length;
        int []ans= new int[col];
        for(int j=0;j<col;j++){
            ans[j]=dfs(0,j,grid);
        }
        return ans;
    }
    private int dfs(int i,int j,int [][]grid){
        if(i>=grid.length){
            return j;
        }
        if(grid[i][j]==1 && j+1<grid[0].length && grid[i][j+1]==1){
            return dfs(i+1,j+1,grid);
        }
        else if(grid[i][j]==-1 && j-1>=0 && grid[i][j-1]==-1){
            return dfs(i+1,j-1,grid);
        }
        else if(grid[i][j]==1 && j+1>=grid[0].length){
            return -1;
        }
        else{
            return -1;
        }
       // return -1;
    }
}
