class Solution {
public:
    int brokenCalc(int startValue, int target) {
       int op=0;
        while(target>startValue)
        {
            if(target%2==0)
            {
                target=target/2;
            }
            else
            {
                target++;
            }
            op++;
        }
        return op+(startValue-target);
        
    }
};
