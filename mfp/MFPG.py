n = int(input())
score_time_1 = 0
score_time_2 = 0
for _ in range(n):
    line = input().split()
    time = int(line[1])  
    points = int(line[2])  
        
    if time == 1:
        score_time_1 += points
    elif time == 2:
        score_time_2 += points

print(score_time_1, "x", score_time_2)