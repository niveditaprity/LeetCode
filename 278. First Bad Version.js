/**
 * Definition for isBadVersion()
 * 
 * @param {integer} version number
 * @return {boolean} whether the version is bad
 * isBadVersion = function(version) {
 *     ...
 * };
 */

/**
 * @param {function} isBadVersion()
 * @return {function}
 */
var solution = function(isBadVersion) {
    /**
     * @param {integer} n Total versions
     * @return {integer} The first bad version
     */
    return function(n) {
    let i=1;
    let j=n;
    let ans=-1;
        while(i<=j)
            {
                let mid=Math.floor((i+j)/2);
                if(isBadVersion(mid)==true)
                {
                        j=mid-1;
                        ans = mid;
                }
                else
                    {
                        i=mid+1;
                        
                    }
            }
        return ans;
        
    };
};
