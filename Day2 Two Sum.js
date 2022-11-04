/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
     let map = {}
    
    for (let i = 0; i < nums.length; ++i) {
        const num = nums[i]
        const diff = target - num

        if (diff in map) {
            return [map[diff], i]
        } else {
            map[nums[i]] = i
        }
    }
};
