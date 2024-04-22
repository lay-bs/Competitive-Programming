N, Q, D = map(int, input().split())
venues = [tuple(map(int, input().split())) for _ in range(N)]
questions = [tuple(map(int, input().split())) for _ in range(Q)]

def euclidean_distance_squared(p1, p2):
    return (p1[0] - p2[0])**2 + (p1[1] - p2[1])**2

def can_reach(src, dest, distance_left):
    stack = [(src, distance_left)]
    visited = set()

    while stack:
        current, distance_left = stack.pop()
        if current == dest:
            return True
        if current in visited:
            continue
        visited.add(current)
        for i in range(N):
            if i != current and euclidean_distance_squared(venues[current], venues[i]) <= distance_left:
                stack.append((i, distance_left - euclidean_distance_squared(venues[current], venues[i])))
    
    return False

for S, T in questions:
    result = "S" if can_reach(S-1, T-1, D**2) else "N"
    print(result)
