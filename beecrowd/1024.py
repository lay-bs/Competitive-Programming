#Criptografia - 1024 - beecrowd

N = int(input())

for _ in range(N):
    M=input()

    M1=""
    for letra in M:
        M1+=chr(ord(letra)+3) if letra.isalpha() else letra
    M=M1[::-1]
    M = M[:len(M)//2] + ''.join([chr(ord(letra)-1) for letra in M[len(M)//2:]])
    print(M)