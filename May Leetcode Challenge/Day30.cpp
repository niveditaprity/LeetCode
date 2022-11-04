class Solution {
public:
    int divide(int dividend, int divisor) {
    
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;

        

        long int dd = abs(dividend), dv = abs(divisor);
        
     
        int res=0;
        while(dv<=dd) {
            long int sum=dv, count=1;
            while(sum<=dd-sum) {
                sum+=sum;
                count+=count;
            }
            res+=count;
            dd-=sum;
        }
        
if((dividend<0&&divisor>0) || (dividend>0&&divisor<0)) return -res;
        
        return res;
          
    }
};
