class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        profit = 0
        start_price = prices[0]
        for i in range(1, len(prices)):
            profit = max(profit, (prices[i]-start_price))
            start_price = min(start_price, prices[i])
        return profit