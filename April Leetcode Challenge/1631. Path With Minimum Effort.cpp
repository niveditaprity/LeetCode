class Solution {
public:
    int minimumEffortPath(vector<vector<int>>&heights) {
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    vector<vector<int>> dir= {{0,-1}, {-1,0}, {0,1}, {1,0}};
    int ans=0;
    int n=heights.size();
    int m=heights[0].size();
    pq.push({0,0,0});
    while(pq.size())
    {
        auto res=pq.top();
        pq.pop();
        ans=max(ans,res[0]);
        
        int i=res[1];
        int j=res[2];
        
        if(heights[i][j] == -1)
                continue;
            
        
        if(i == n-1 && j == m-1){
                break;
            }
        
        for(int d=0;d<4;d++)
        {
            int newi=i+dir[d][0];
            int newj=j+dir[d][1];
            if(newi<0 || newj<0 || newj==m || newi == n||heights[newi][newj] == -1)
            {
                continue;
            }
            pq.push({abs(heights[i][j]-heights[newi][newj]),newi,newj});
        }
        heights[i][j] = -1;
    }
        return ans;
        
       
    }
};
