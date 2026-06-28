class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        bestProfit = 0
        lowestBuy = prices[0]

        for price in prices:
            lowestBuy = min(lowestBuy, price)
            bestProfit = max(bestProfit, price - lowestBuy)

        return bestProfit