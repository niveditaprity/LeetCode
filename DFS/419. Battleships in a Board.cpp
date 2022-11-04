class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& board)
    {
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='.')
        {
            return;
        }
        board[i][j]='.';
        dfs(i+1,j,board);
        dfs(i-1,j,board);
        dfs(i,j+1,board);
        dfs(i,j-1,board);
    }
    int countBattleships(vector<vector<char>>& board) {
     int ans = 0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='X')
                {
                    ans++;
                    dfs(i,j,board);
                }
            }
        }
    return ans;
    }
};
