def time_to_deliver(P, strengths, time): #calc num total de pizzas q podem ser entregues
    total_pizzas = 0                     #em um determinado tempo e usando as forças dos competidores
    for strength in strengths:
        total_pizzas += min(time // strength, P)
    return total_pizzas

def min_time_to_deliver(N, P, strengths):   #determina o menor tempo possível p a equipe completar
    left = 0                                #a entrega
    right = min(strengths) * P  
    
    while left < right:
        mid = (left + right) // 2
        if time_to_deliver(P, strengths, mid) >= P:
            right = mid
        else:
            left = mid + 1
            
    return left

# Input
N, P = map(int, input().split())
strengths = list(map(int, input().split()))

# Output
print(min_time_to_deliver(N, P, strengths))
