import sys



def count_ways(n):
    return count_ways_memorization(n, [-1] * (n + 1))


def count_ways_memorization(n, memo):
    if n < 0:
        return 0
    if n == 0:
        return 1
    if memo[n] != -1:
        return memo[n]
    else:
        memo[n] = count_ways_memorization(n - 1, memo) + \
                    count_ways_memorization(n - 2, memo) + \
                     count_ways_memorization(n - 3, memo)
        return memo[n]


if __name__ == "__main__":
    n = int(input())
    print ('Number of possible ways', count_ways(n))