var sumOddLengthSubarrays = function(arr) {
    
    var i;
    var sum=0;
    for(i=0;i<arr.length;i++)
        {
            var count=(arr.length-i)*(i+1)
            count =Math.floor(count/2)+count%2;
            sum+=(arr[i]*count);
        }
    return sum;
    
};
