class Solution {
public:
    void dfs(vector<vector<int>>&image,int sr,int sc,int rows,int col,int newColor,int source)
    {
      if(sr<0||sr>=rows||sc<0||sc>=col)
      {
          return;
      }
        if(image[sr][sc]!=source)
        {
            return;
        }
        image[sr][sc]=newColor;
        dfs(image,sr+1,sc,rows,col,newColor,source);
        dfs(image,sr,sc+1,rows,col,newColor,source);
        dfs(image,sr-1,sc,rows,col,newColor,source);
        dfs(image,sr,sc-1,rows,col,newColor,source);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
     if(image[sr][sc]==newColor) 
     {
         return image;
     }
        int rows=image.size();
        int col=image[0].size();
        int source=image[sr][sc];
        dfs(image,sr,sc,rows,col,newColor,source);
        return image;
    }
};
