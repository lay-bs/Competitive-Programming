def intercalar_lista_ordenada(impares):
    resultado = []
    tam = len(impares)
    
    for i in range((tam + 1) // 2):
        if i < tam:
            resultado.append(impares[i])  
        if tam - i - 1 > i:
            resultado.append(impares[tam - i - 1])  
    
    return resultado

def processar_caso(m, numeros):
    impares = [num for num in numeros if num % 2 != 0]
    impares.sort(reverse=True)  
    resultado = intercalar_lista_ordenada(impares)
    return resultado

def main():
    n = int(input().strip())
    
    saidas = []
    for _ in range(n):
        m = int(input().strip())
        numeros = list(map(int, input().strip().split()))
        
        resultado = processar_caso(m, numeros)
        saidas.append(" ".join(map(str, resultado)))
    
    for saida in saidas:
        print(saida)

if __name__ == "__main__":
    main()
