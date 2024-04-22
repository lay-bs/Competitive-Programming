points_sum = int(input())

num_sports_won = 0

if points_sum >= 8:
    num_sports_won += 1
    points_sum -= 8

if points_sum >= 4:
    num_sports_won += 1
    points_sum -= 4
    
if points_sum >= 2:
    num_sports_won += 1
    points_sum -= 2

if points_sum >= 1:
    num_sports_won += 1

print(num_sports_won)