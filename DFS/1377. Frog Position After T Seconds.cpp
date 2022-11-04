class Solution {
public:
    bool dfs(int current,vector<vector<int>>&graph,vector<bool>&visited,int t,int target,double currP,double &totalP)
    {
        if(visited[current])
        {
            return false;
        }
        if(t<0)
        {
            return false;
        }
        int x = current ==1 ? graph[current].size():graph[current].size()-1;
        
        if(current==target)
        {
         totalP = x==0 || t==0 ? currP:0;
        }
        double y = 1.0f / (double)x;
        visited[current]=true;
        for (auto v:graph[current])
        {
         if(dfs(v,graph,visited,t-1,target,currP*y,totalP))
         {
           return true;  
         }
        }
        
       return false; 
    }
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        vector<vector<int>>graph(n+1);
        for( auto edge : edges)
        {
         graph[edge[0] ].push_back(edge[1]);
         graph[edge[1]].push_back(edge[0]);
        
        }
        vector<bool>visited(n+1);
        double totalP=0;
        
        dfs(1,graph,visited,t,target,1,totalP);
        return totalP;
    }
};
