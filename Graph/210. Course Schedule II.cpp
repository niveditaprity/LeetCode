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
    void dfs(vector<vector<int>>&adj,int v,vector<int>&visited,stack<int>&s)
    {
      visited[v]=1;
        for(int i=0;i<adj[v].size();i++)
        {
            if(visited[adj[v][i]]==0)
            {
                dfs(adj,adj[v][i],visited,s);
            }
        }
        s.push(v);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
      vector<int>order;
     vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++)
        {   
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);    
        }
        vector<int>vis(numCourses,0);
        if(canFinish(numCourses,prerequisites)==false)
        {
            return order;
        }
        stack<int>st;
            for(int i=0;i<numCourses;i++)
            {
                if(!vis[i])
                {
               dfs(adj,i,vis,st);
                }
                }
    while(!st.empty())
        {
            int pq=st.top();
             st.pop();
          order.push_back(pq);
        }
        return order;
    }
};
