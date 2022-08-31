class Solution {
public:
    
    void dfs(vector<vector<int>>& heights,vector<vector<int>>&visited,int i,int j)
    {
        int row = heights.size();
        int col = heights[0].size();
        
        visited[i][j]=1;
        if(j+1<col  && !visited[i][j+1] && heights[i][j+1]>=heights[i][j])
        {
           dfs(heights,visited,i,j+1);
        }
        if(i+1<row  && !visited[i+1][j] && heights[i+1][j]>=heights[i][j])
        {
          dfs(heights,visited,i+1,j);  
        }
        if(i-1>=0  && !visited[i-1][j] && heights[i-1][j]>=heights[i][j])
        {
            dfs(heights,visited,i-1,j);
        }
        
        if(j-1>=0  && !visited[i][j-1] && heights[i][j-1]>=heights[i][j])
        {
            dfs(heights,visited,i,j-1);
        }
        return;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int row = heights.size();
        int col = heights[0].size();
        
        vector<vector<int>>pacific(row,vector<int>(col,0));
        vector<vector<int>>atlantic(row,vector<int>(col,0));
        vector<vector<int>>ans;
        
        for(int i=0;i<row;i++)
        {
            dfs(heights,pacific,i,0);
            dfs(heights,atlantic,i,col-1);   
        }
        
        for(int j=0;j<col;j++)
        {
            dfs(heights,pacific,0,j);
            dfs(heights,atlantic,row-1,j);
        }
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(pacific[i][j]==1 && atlantic[i][j]==1)
                {
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};
