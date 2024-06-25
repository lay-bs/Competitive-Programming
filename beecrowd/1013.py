
m = lambda a, b: (a+b + abs(a-b))//2
a,b,c = [int(x) for x in input().split(' ')]
r = m(a, m(b,c))
print(f'{r} eh o maior')