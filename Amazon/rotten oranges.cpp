class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    
        int rows=grid.size();
        int cols=grid[0].size();
        int freshoranges=0;
        queue<pair<int,int>>q;
        
        for(int i=0;i<rows;i++)
        {
        for(int j=0;j<cols;j++)
        {
            if(grid[i][j]==1)
            {
                freshoranges++;
            }
            if(grid[i][j]==2)
            {
                q.push({i,j});
            }
        }
        }
        
        if(freshoranges==0)
        {
            return 0;
        }
        
        int minutes=-1;
        
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
            auto p=q.front();
            q.pop();
            int i=p.first;
            int j=p.second;
                
                if(i-1>=0 && i-1<rows && j>=0 && j<cols)
                {
                    if(grid[i-1][j]==1)
                    {
                        grid[i-1][j]=2;
                        freshoranges--;
                        q.push({i-1,j});
                    }
                }
                if(i+1>=0 && i+1<rows && j>=0 && j<cols)
                {
                    if(grid[i+1][j]==1)
                    {
                        grid[i+1][j]=2;
                        freshoranges--;
                        q.push({i+1,j});
                    }
                }
                if(i>=0 && i<rows && j-1>=0 && j-1<cols)
                {
                    if(grid[i][j-1]==1)
                    {
                        grid[i][j-1]=2;
                        freshoranges--;
                        q.push({i,j-1});
                    }
                }
                if(i>=0 && i<rows && j+1>=0 && j+1<cols)
                {
                    if(grid[i][j+1]==1)
                    {
                        grid[i][j+1]=2;
                        freshoranges--;
                        q.push({i,j+1});
                    }
                }
            
            }
            
          minutes++;  
        }
        if(freshoranges==0)
        {
            return minutes;
        }
        return -1;
        
        
    }
};
