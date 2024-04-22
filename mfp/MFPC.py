def max_coins(i):
    if i >= len(stations):
        return 0
    
    if i in memo:
        return memo[i]
    
    coins_at_i = stations[i]
    left_jump = max_coins(2*i)
    right_jump = max_coins(2*i + 1)
    max_coins_from_i = coins_at_i + max(left_jump, right_jump)
    
    memo[i] = max_coins_from_i
    
    return max_coins_from_i

N = int(input())
stations = [0] + list(map(int, input().split()))

memo = {}

max_coins(1)

print(memo[1])
