/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    
    let currsum=nums[0];
    let totalsum=nums[0];
    for(let i=1;i<nums.length;i++)
        {
            currsum+=nums[i];
            if(currsum<nums[i])
            {
             currsum=nums[i];  
            }
            if(totalsum<currsum)
                {
                    totalsum=currsum;
                }
        }
    return totalsum
};
