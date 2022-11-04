class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
     int n=graph.size();
        vector<int>color(n,-1);
        queue<int>q;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
              q.push(i);
                color[i]=0;
                while(!q.empty())
                {
                    int ele=q.front();
                    q.pop();
                    for(int x:graph[ele])
                    {
                      if(color[x]==-1)
                      {
                          color[x]=color[ele]^1;
                          q.push(x);
                      }
                        else
                        {
                           bool p=(color[x]!=color[ele] );
                               flag=flag&p;
                        }
                        
                    }
                }
            }
        }
        if(flag==true)
        {
            return true;
        }
        else
        {
          return  false;
        }
    }
};
