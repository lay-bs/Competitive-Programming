//Sudoku - 1383 - beecrowd
#include <bits/stdc++.h>
using namespace std;

int s[9][9];

bool l(int x){
    set<int>n;

    for(int i=0; i < 9; i++){
        n.insert(s[x][i]);
    }
    return n.size() == 9;
}

bool c(int y){
    set<int>n;

    for(int i=0; i<9; i++){
        n.insert(s[i][y]);
    }
    return n.size() == 9;
}

bool q(int x){
    set<int>n;
    int l = 3*(x/3), c = 3*(x%3);

    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            n.insert(s[l+i][c+j]);
        }
    }
    return n.size() == 9;
}


int main(){
    int n;
    string r;

    cin >> n;
    for(int k = 1; k<= n; k++){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                cin >> s[i][j];
            }
        }
        cout << "Instancia " << k << endl;

        r="SIM";
        for(int i=0; i<9;i++){
            if(!l(i) || !c(i) || !q(i) ){
                r="NAO";
                break;
            }
        }
        cout << r << endl << endl;
    }

    return 0;
}