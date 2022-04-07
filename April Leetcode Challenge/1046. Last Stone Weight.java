class Solution {
    public int lastStoneWeight(int[] stones) {
      int n=stones.length;
        PriorityQueue<Integer> pq = new PriorityQueue<>(n, Collections.reverseOrder());
        for(int i=0;i<n;i++)
        {
            pq.add(stones[i]);
        }
        
        while(pq.size()>1)
        {
            int y=pq.poll();
            int x=pq.poll();
            if(y==x)
            {
                continue;
            }
            else
            {
            pq.add(y-x);
            }
            
        }
        if(pq.size()==0)
        {
            return 0;
        }
        return pq.peek();
        
    }
}
