#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int Xf, Yf, Xi, Yi, Vi, R1, R2;

    while (cin >> Xf >> Yf >> Xi >> Yi >> Vi >> R1 >> R2) {
        // calcula a dist inicial
        double initialDistance = sqrt(pow(Xi - Xf, 2) + pow(Yi - Yf, 2));
        
        // calcula a dist do invasor em 1.5 sec
        double distanceMovedByInvasor = Vi * 1.5;
        
        // calcula a dist final entre fiddle e invasor apos os 1.5 sec
        double finalDistance = initialDistance + distanceMovedByInvasor;
        
        // verifica se fiddle pode atingir com a ult
        if (finalDistance <= R1 + R2) {
            cout << 'Y' << endl;
        } else {
            cout << 'N' << endl;
        }
    }

    return 0;
}
