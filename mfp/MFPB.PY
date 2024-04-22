mushrooms = []
for _ in range(4):
    mushrooms.append(tuple(map(int, input().split())))

max_x = max(mushrooms, key=lambda x: x[0])[0]
min_x = min(mushrooms, key=lambda x: x[0])[0]
max_y = max(mushrooms, key=lambda x: x[1])[1]
min_y = min(mushrooms, key=lambda x: x[1])[1]

side_length = max(max_x - min_x, max_y - min_y)

area = side_length ** 2

print(area)


