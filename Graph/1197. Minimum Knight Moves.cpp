class Solution {
public:
    int minKnightMoves(int x, int y) {
      queue<pair<int,int>>q;
vector<vector<int>>visited(301,vector<int>(301,false));
vector<vector<int>> dir = {{1,2}, {1,-2}, {-1, 2}, {-1,-2}, {2,1}, {2,-1}, {-2,1}, {-2,-1}};
        q.push({0,0});
        visited[0][0]=true;
        int move=0;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                auto p=q.front();
                q.pop();
                if(p.first==abs(x)&&p.second==abs(y))
                {
                  return move;  
                }
                for(int j=0;j<8;j++)
                {
                   int nx= p.first+dir[j][0];
                   int ny= p.second+dir[j][1];
                    if(nx>300||ny>300||visited[abs(nx)][abs(ny)])
                    {
                        continue;
                    }
                    visited[abs(nx)][abs(ny)]=true;
                    q.push({abs(nx),abs(ny)});
                }
                    
                }
            move++;
        }
        return -1;
    }
};
