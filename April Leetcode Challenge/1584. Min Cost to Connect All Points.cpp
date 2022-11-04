class Solution {
public:
    int dis(vector<int>&point1,vector<int>&point2)
    {
        return abs(point1[0]-point2[0])+ abs(point1[1]-point2[1]);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
       int n=points.size();
        vector<int>visited(n,0);
        vector<int>minCost(n,INT_MAX);
        int currpoint=0;
        minCost[0]=0;
        int ans=0;
        while(currpoint>=0)
        {
            visited[currpoint]=1;
            int nextpoint=-1;
            int mincurr=INT_MAX;
            for(int point=0;point<n;point++)
            {
                if(visited[point] || currpoint==point)
                {
                    continue;
                }
                minCost[point]=min(dis(points[currpoint],points[point]),minCost[point]);
                if(minCost[point]<mincurr)
                {
                    mincurr=minCost[point];
                    nextpoint=point;
                }
            }
            if(mincurr==INT_MAX)
            {
                ans+=0;
            }
            else
            {
                ans+=mincurr;
            }
            currpoint=nextpoint;
            
        }
        return ans;
        
    }
};
