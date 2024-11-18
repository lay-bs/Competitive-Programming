#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> vitaminCContent = {
        {"suco de laranja", 120},
        {"morango fresco", 85},
        {"mamao", 85},
        {"goiaba vermelha", 70},
        {"manga", 56},
        {"laranja", 50},
        {"brocolis", 34}
    };

    int T;
    while (cin >> T && T != 0) {
        int totalVitaminC = 0;

        for (int i = 0; i < T; ++i) {
            int quantity;
            string food;
            cin >> quantity;
            cin.ignore(); 
            getline(cin, food);

            totalVitaminC += quantity * vitaminCContent[food];
        }

        if (totalVitaminC < 110) {
            cout << "Mais " << 110 - totalVitaminC << " mg" << endl;
        } else if (totalVitaminC > 130) {
            cout << "Menos " << totalVitaminC - 130 << " mg" << endl;
        } else {
            cout << totalVitaminC << " mg" << endl;
        }
    }

    return 0;
}
