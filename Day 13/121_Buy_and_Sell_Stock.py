def maxProfit(prices):
    maxprofit = 0
    bestbuy = prices[0]
    for i in range(len(prices)):
        maxprofit = max(maxprofit,prices[i]-bestbuy)
        bestbuy = min(bestbuy,prices[i])
    return maxprofit