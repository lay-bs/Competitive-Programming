r, c = [int(x) for x in input().strip('').split('.')]
r = r * 100 + c
n = [10000, 5000, 2000, 1000, 500, 200]
m = [100, 50, 25, 10, 5, 1]

print('NOTAS:')
for nota in n:
    print(f'{r//nota} nota(s) de R$ {(nota/100):.2f}')
    r %= nota

print('MOEDAS:')
for moeda in m:
    print(f'{r//moeda} moeda(s) de R$ {(moeda/100):.2f}')
    r %= moeda

