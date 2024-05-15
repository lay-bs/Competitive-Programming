#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, d;
    while (cin >> a >> d && (a || d)) {
        int posA[a], posD[d];

        for(int i = 0; i < a; i++)
            cin >> posA[i];
        for(int i = 0; i < d; i++)
            cin >> posD[i];

        sort(posD, posD + d);
        sort(posA, posA + a);

        if (posA[0] < posD[1])
            cout << 'Y' << endl;
        else
            cout << 'N' << endl;
    }

    return 0;
}
