#include <bits/stdc++.h>
using namespace std;

struct Nave {
    int x, y, z;
};

double calcularDistancia(const Nave& a, const Nave& b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}

int main() {
    int n;
    cin >> n;
    vector<Nave> naves(n);

    for (int i = 0; i < n; i++) {
        cin >> naves[i].x >> naves[i].y >> naves[i].z;
    }

    for (int i = 0; i < n; i++) {
        double menorDistancia = numeric_limits<double>::max();

        for (int j = 0; j < n; j++) {
            if (i != j) {
                double distancia = calcularDistancia(naves[i], naves[j]);
                if (distancia < menorDistancia) {
                    menorDistancia = distancia;
                }
            }
        }
        if (menorDistancia <= 20) {
            cout << "A\n";  
        } else if (menorDistancia <= 50) {
            cout << "M\n";  
        } else {
            cout << "B\n"; 
        }
    }

    return 0;
}
