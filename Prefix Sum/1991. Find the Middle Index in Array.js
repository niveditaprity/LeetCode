/**
 * @param {number[]} nums
 * @return {number}
 */
var findMiddleIndex = function(nums) {
    
    var tsum=0,ssum=0,m;
    for(var i=0;i<nums.length;i++)
        {
            tsum+=nums[i];
        }
    for(var i=0;i<nums.length;i++)
        {
            m=i;
            tsum-=nums[i];
            if(tsum==ssum)
                {
                    return m;
                }
            else
                {
                    ssum+=nums[i];
                }
        }
    if(m==nums.length-1)
        {
            return -1;
        }
    return m;
};
