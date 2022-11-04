class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<int>temp,vector<vector<int>>&res,int start,int end)
    {
     temp.push_back(start);
     if(start == end)
     {
         res.push_back(temp);
         return;
     }
     for(auto x:graph[start])
     {
         dfs(graph,temp,res,x,end);
     }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<vector<int>>res;
       vector<int>temp;
       int n = graph.size();
       dfs(graph,temp,res,0,n-1);
       return res;
    }
};
