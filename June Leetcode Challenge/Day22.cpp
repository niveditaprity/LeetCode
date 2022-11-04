class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      // Creates a min heap
    priority_queue <int, vector<int>, greater<int> > pq;
        
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(pq.top()<nums[i]){
                pq.pop();
                pq.push(nums[i]);
            }
           
        }
         return pq.top();
    }
};
