import scala.collection.mutable.Map 
object Solution {
    def numIdenticalPairs(nums: Array[Int]): Int = {
      
        var mp: Map[Int, Int] = Map();
        for(n<-nums)
        {
            if(mp.contains(n))
        
                mp(n) += 1
            else
            
                mp(n) = 1;
            
        }
        var count=0;
        
        for(pair<-mp)
        {
            count+=(pair._2)*(pair._2-1)/2;
        }
        return count;
    }
}
