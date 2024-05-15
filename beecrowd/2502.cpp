#include<bits/stdc++.h>
using namespace std;

int main()
{
    int qtdLetras, qtdConsultas;
    string entradaOriginal, resultado;
    string str1, str2;
    while(cin >> qtdLetras >> qtdConsultas){
        multimap<char, int> mapaStr1, mapaStr2;
        cin.ignore();
        getline(cin, str1);
        getline(cin, str2);
        for(int i = 0; i < qtdLetras; i++){
            mapaStr1.insert(pair(str1[i], i));
            mapaStr2.insert(pair<char, int>(str2[i], i));
        }
        int indice;
        while(qtdConsultas--){
            getline(cin, entradaOriginal);
            for(int j = 0; j < entradaOriginal.size(); j++){
                char ch = toupper(entradaOriginal[j]);
                if(mapaStr1.count(ch) == 0 && mapaStr2.count(ch) == 0){
                    resultado += entradaOriginal[j];
                } else if(mapaStr1.count(ch) != 0){
                    indice = mapaStr1.find(ch)->second;
                    resultado += !isupper(entradaOriginal[j]) ? (char) tolower(str2[indice]) : str2[indice];
                } else if(mapaStr2.count(ch) != 0){
                    indice = mapaStr2.find(ch)->second;
                    resultado += !isupper(entradaOriginal[j]) ? (char) tolower(str1[indice]) : str1[indice];
                }
            }
            cout << resultado << endl;
            resultado.clear();
        }
        cout << endl;
    }

    return 0;
}
