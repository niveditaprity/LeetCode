class Solution {
public:
    int lnc(vector<vector<int>>&board,int i,int j)
    {
      int r=board.size();
      int c=board[0].size();
        int livec=0;
      //horizontal
      if(j-1>=0)
      {
          if(board[i][j-1]==1 || board[i][j-1]==3)
          {
             livec++; 
          }
      }
      if(j+1<c)
      {
         if(board[i][j+1]==1 || board[i][j+1]==3)
          {
             livec++; 
          } 
      }
    //vertical
    if(i-1>=0)
    {
        if(board[i-1][j]==1 || board[i-1][j]==3)
          {
             livec++; 
          }
    }
    if(i+1<r)
    {
      if(board[i+1][j]==1 || board[i+1][j]==3)
          {
             livec++; 
          }  
    }
//diagonal
if(i-1>=0 && j-1>=0)
{
    if(board[i-1][j-1]==1 || board[i-1][j-1]==3)
          {
             livec++; 
          }
}
if(i-1>=0 && j+1<c)
{
    if(board[i-1][j+1]==1 || board[i-1][j+1]==3)
          {
             livec++; 
          }
}
if(i+1<r && j-1>=0)
{
    if(board[i+1][j-1]==1 || board[i+1][j-1]==3)
          {
             livec++; 
          }
}
if(i+1<r && j+1<c)
{
if(board[i+1][j+1]==1 || board[i+1][j+1]==3)
{
             livec++; 
          }
}


return livec;              
        
    }
    
    void gameOfLife(vector<vector<int>>& board) {
      int r=board.size();
      int c= board[0].size();
        
      for(int i=0;i<r;i++)
      {
          for(int j=0;j<c;j++)
          {
             int count=lnc(board,i,j);
              
             if(board[i][j]==0)
             {
                 if(count==3)
                 {
                     board[i][j]=2;
                 }
             }
              else if(board[i][j]==1)
              {
                  if(count<2 || count>3)
                  {
                      board[i][j]=3;
                  }
              }
              
          }
      }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(board[i][j]==2)
                {
                    board[i][j]=1;
                }
                else if(board[i][j]==3)
                {
                    board[i][j]=0;
                }
            }
        }
        
    }
};
