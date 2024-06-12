#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t, pa, pb;
    double g1,g2;

    cin >> t;
    for (int i = 0; i <t; i++){
        cin>>pa>>pb>>g1>>g2;
        g1 /=100;
        g2 /=100;

        int a;
        for(a=1;pa<=pb && a <101; a++){
            
            pa+=floor(pa*g1);
            pb+=floor(pb*g2);

        }

        if(pa<=pb){

            cout << "Mais de 1 seculo." << endl;
        }

        else{

            cout << a-1<< " anos." << endl;
        }
    }
    
    return 0;
}
