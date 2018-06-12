def number_of_ways_with_cache(n, coins, i, ways_cache):
    if ways_cache[n][i] is not None:
        return ways_cache[n][i]
    if i >= len(coins) - 1:
        return 1
    ways = 0
    possibilities = n // coins[i]
    for j in range(possibilities + 1):
        ways += number_of_ways_with_cache(n - j * coins[i], coins, i + 1, ways_cache)
    ways_cache[n][i] = ways
    return ways

def make_change_with_cache(n):
    coins = [25, 10, 5, 1]
    ways_cache = [[None for _ in range(len(coins))] for _ in range(n + 1)]
    return number_of_ways_with_cache(n, coins, 0, ways_cache)