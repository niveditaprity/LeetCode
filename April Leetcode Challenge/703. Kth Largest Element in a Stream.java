class KthLargest {
PriorityQueue<Integer> pq = new PriorityQueue<>(); 
    int kth;
    public KthLargest(int k, int[] nums) {
     kth=k;
        for(int i=0;i<nums.length;i++)
        {
            add(nums[i]);
        }
    }
    
    public int add(int val) {
        if(pq.size()<kth)
        {
         pq.add(val);
        }
       else if(pq.peek()<val)
       {
            pq.poll();
            pq.add(val);
       }
        return pq.peek();  
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */
