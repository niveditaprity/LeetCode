class Solution {
public:
    bool isPossible(vector<int>& target) {
        long tsum=0;
        priority_queue<int>maxq;
        for(auto x:target)
        {
            tsum+=x;
            maxq.push(x);
            
        }
        while(maxq.top()!=1)
        {
            int large=maxq.top();
            maxq.pop();
            tsum=tsum-large;
            if(tsum<=0 || tsum>=large)
            {
                return false;
            }
            large=large%tsum;
            maxq.push(large?large:tsum);
            tsum=tsum+large;
        }
        return true;

     
        
    }
};
