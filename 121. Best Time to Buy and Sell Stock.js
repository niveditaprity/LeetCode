/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    var maxprice =0,minprice=prices[0];
    for(let i=0;i<prices.length;i++)
        {
            minprice=Math.min(minprice,prices[i]);
            maxprice = Math.max(maxprice,prices[i]-minprice)
        }
    return maxprice
};
