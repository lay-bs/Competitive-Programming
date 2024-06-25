a = int(input())
print(a)

print(f'{a//100} nota(s) de R$ 100,00')
a %= 100
print(f'{a//50} nota(s) de R$ 50,00')
a %= 50
print(f'{a//20} nota(s) de R$ 20,00')
a %= 20
print(f'{a//10} nota(s) de R$ 10,00')
a %= 10
print(f'{a//5} nota(s) de R$ 5,00')
a %= 5
print(f'{a//2} nota(s) de R$ 2,00')
a %= 2
print(f'{a} nota(s) de R$ 1,00')