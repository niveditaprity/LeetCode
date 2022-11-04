/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    nums1.sort((a,b)=>a-b);
    nums2.sort((a,b)=>a-b);
    let i=0,j=0;
    var arr = new Array();
    while(i<nums1.length && j<nums2.length)
        {
            
            if(nums1[i]<nums2[j])
                {
                    i++;
                }
            else if(nums1[i]>nums2[j])
                {
                    j++;
                }
            else if(nums1[i]==nums2[j])
                {
                   arr.push(nums1[i]);
                    i++;
                    j++;
                }
        }
    return arr;
};
