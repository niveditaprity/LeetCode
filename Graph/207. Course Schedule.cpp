class Solution {
public:
    bool iscyclic(vector<vector<int>>&adjMatrix,vector<int>&visited,int currnode)
    {
        if(visited[currnode]==2)
        {
            return true;
        }
        visited[currnode]=2;
        for(int i=0;i<adjMatrix[currnode].size();i++)
        {
          if(visited[adjMatrix[currnode][i]]!=1)
          {
              if(iscyclic(adjMatrix,visited,adjMatrix[currnode][i]))
              {
                  return true;
              }
          }
        }
        visited[currnode]=1;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>visited(numCourses,0);
        vector<vector<int>>adjMatrix(numCourses);//direct graph
        for(int i=0;i<prerequisites.size();i++)
        {
            adjMatrix[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for(int i=0;i<numCourses;i++)
        {
        if(visited[i]==0)
        {
        if(iscyclic(adjMatrix,visited,i))
        {
            return false;
        }
        }
        }
        return true;
    }
};
