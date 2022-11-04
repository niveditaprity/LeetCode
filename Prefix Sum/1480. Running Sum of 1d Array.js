/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    var arr=new Array();
    arr[0]=nums[0];
    for(var i=1;i<nums.length;i++)
        {
            arr[i]=arr[i-1]+nums[i];
        }
    return arr;
    
};
