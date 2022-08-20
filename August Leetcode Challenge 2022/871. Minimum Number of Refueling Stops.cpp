class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
     int ans =0;
     int curd  = startFuel;
        int i=0,n=stations.size();
        priority_queue<int> pq;
        while(curd<target)
        {
           
          while(i<n && stations[i][0]<=curd)
          {
          pq.push(stations[i][1]);  
          i++;
          }
            if(pq.empty())
            {
                return -1;
            }
          ans++;
          curd+=pq.top();
            pq.pop();
        }
        return ans;
    }
};
