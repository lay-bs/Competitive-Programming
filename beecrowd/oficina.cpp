// Inclui todas as bibliotecas padrão do C++ necessárias
#include <bits/stdc++.h>

// Usa o namespace padrão do C++
using namespace std;

// Declara uma matriz global 9x9 para armazenar o tabuleiro do Sudoku
int s[9][9];

// Função para verificar se uma linha contém todos os números de 1 a 9
bool l(int x) {
    // Declara um conjunto de inteiros para armazenar os números únicos da linha
    set<int> n;

    // Itera sobre cada coluna da linha x
    for (int i = 0; i < 9; i++) {
        // Insere o número da posição (x, i) no conjunto
        n.insert(s[x][i]);
    }

    // Retorna verdadeiro se o conjunto contiver exatamente 9 números únicos
    return n.size() == 9;
}

// Função para verificar se uma coluna contém todos os números de 1 a 9
bool c(int y) {
    // Declara um conjunto de inteiros para armazenar os números únicos da coluna
    set<int> n;

    // Itera sobre cada linha da coluna y
    for (int i = 0; i < 9; i++) {
        // Insere o número da posição (i, y) no conjunto
        n.insert(s[i][y]);
    }

    // Retorna verdadeiro se o conjunto contiver exatamente 9 números únicos
    return n.size() == 9;
}

// Função para verificar se uma subgrade 3x3 contém todos os números de 1 a 9
bool q(int x) {
    // Declara um conjunto de inteiros para armazenar os números únicos da subgrade
    set<int> n;

    // Calcula a linha e a coluna inicial da subgrade
    int l = 3 * (x / 3), c = 3 * (x % 3);

    // Itera sobre cada posição da subgrade 3x3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Insere o número da posição (l + i, c + j) no conjunto
            n.insert(s[l + i][c + j]);
        }
    }

    // Retorna verdadeiro se o conjunto contiver exatamente 9 números únicos
    return n.size() == 9;
}

int main() {
    // Declara uma variável para o número de instâncias de Sudoku
    int n;
    // Declara uma string para armazenar o resultado ("SIM" ou "NAO")
    string r;

    // Lê o número de instâncias
    cin >> n;

    // Loop sobre cada instância
    for (int k = 1; k <= n; k++) {
        // Lê o tabuleiro de Sudoku
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> s[i][j];
            }
        }

        // Imprime o número da instância
        cout << "Instancia " << k << endl;

        // Inicializa o resultado como "SIM"
        r = "SIM";

        // Verifica todas as linhas, colunas e subgrades
        for (int i = 0; i < 9; i++) {
            if (!l(i) || !c(i) || !q(i)) {
                // Se alguma verificação falhar, o resultado é "NAO"
                r = "NAO";
                break;
            }
        }

        // Imprime o resultado e uma linha em branco
        cout << r << endl << endl;
    }

    // Retorna 0 para indicar que o programa terminou corretamente
    return 0;
}