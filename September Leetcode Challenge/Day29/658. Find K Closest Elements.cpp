class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(auto &a : arr){
            if((pq.size() >= k) && abs(x-a) < pq.top().first)
                pq.pop();
            else if(pq.size() >= k) 
                continue;
            pq.push({abs(x-a),a});
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
