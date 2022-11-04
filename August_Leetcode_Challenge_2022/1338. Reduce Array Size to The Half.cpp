class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(auto x:arr)
        {
            mp[x]++;
        }
        priority_queue<int>pq;
        for(auto x:mp)
        {
            pq.push(x.second);
        }
        int ans = 0;
        int size =0;
        while(!pq.empty())
        {
            ans++;
            size+=pq.top();
            pq.pop();
            if(size >= arr.size()/2)
            {
                return ans;
            }
            
        }
        return 0;
        
    }
};
