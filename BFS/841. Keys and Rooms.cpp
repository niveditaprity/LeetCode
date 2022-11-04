class Solution {
public:
void bfs(int i,vector<bool>&visited,vector<vector<int>>& rooms)
{
      queue<int>q;
      q.push(i);
      while(!q.empty())
      {
          int j=q.front();
          q.pop();
          visited[j]=true;
          for(auto room: rooms[j])
          {
              if(!visited[room])
              {
              q.push(room);
              }
          }
      }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>visited(n,false);
        bfs(0,visited,rooms);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                return false;
            }
        }
        return true;
    }
};
