def max_profit(prices: list[int]):
    n = len(prices)
    pnl = 0
    
    if n == 1:
        return
    
    for i in range(1, n):
        if prices[i] > prices[i - 1]:
            pnl += prices[i] - prices[i - 1]
    return pnl

if __name__ == '__main__':
    prices = [7, 6, 4, 3, 1]
    pnl = max_profit(prices)
    print(f'Pnl is {pnl}')