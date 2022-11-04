class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
         vector<vector<pair<int,int>>> graph(n+1);
         vector<int> signal(n+1,INT_MAX);
        
        for(int i=0;i<times.size();i++){
        
           int j = times[i][0];
           graph[j].push_back({times[i][1],times[i][2]}); 
        }
        

        queue<int> q;
        q.push(k);
        signal[k] = 0;
        
        while (!q.empty()) {
            int curr = q.front(); 
            q.pop();
            
       
            for (pair<int,int> p : graph[curr]) {
                int next = p.first;
                int time = p.second;
                
                int arrTime = signal[curr] + time;
                if (signal[next] > arrTime) {
                    signal[next] = arrTime;
                    q.push(next);
                }
            
            }
        }
        
        int maxi = 0;
        for(int i =1;i<=n;i++){
            
            if(signal[i]==INT_MAX)return -1;
            
            maxi = max(maxi,signal[i]);
            
        }
                
        return maxi;
    }
};
