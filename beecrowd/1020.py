d = int(input())

a = d//365
print(f'{a} ano(s)')
d %= 365
m = d//30
print(f'{m} mes(es)')
d %= 30
print(f'{d} dia(s)')

