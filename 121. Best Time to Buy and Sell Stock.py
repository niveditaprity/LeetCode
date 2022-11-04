class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minprice = prices[0]
        maxprice = 0
        
        for x in prices:
            minprice = min(minprice,x)
            maxprice = max(maxprice,x-minprice)
            
        return maxprice
