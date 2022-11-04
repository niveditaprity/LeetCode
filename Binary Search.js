/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    
    let i=0,j=nums.length-1;
    
    while(i<=j)
        {
            let mid=i + Math.floor((j - i) / 2);
            
            if(nums[mid]==target)
                {
                    return mid;
                }
            if(nums[mid]<target)
                {
                    i=mid+1;;
                }
            else{
                j=mid-1;
            }
        }
    return -1;
    
    
    
    
};
