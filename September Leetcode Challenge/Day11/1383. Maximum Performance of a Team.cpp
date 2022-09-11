class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
    int mod=1e9+7;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
     {
       v.push_back({efficiency[i],speed[i]});  
     }
     sort(v.rbegin(), v.rend());
     priority_queue<int, vector<int>, greater<int>>pq;                    
     long ans = INT_MIN,sum=0;                                               
     for(int i=0;i<n;i++)
      {
           int efficiency = v[i].first,speed = v[i].second;
           sum+=speed;
           pq.push(speed);
           if(pq.size()>k)
           {
               sum-=pq.top();
               pq.pop();   
          }
           ans=max(ans,sum*efficiency);
      }
                                                                         
   return ans%mod;
}                                                                            
};
