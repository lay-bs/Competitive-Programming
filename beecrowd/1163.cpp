#include <bits/stdc++.h>
#define g 9.80665
#define pi 3.14159
using namespace std;

double sen(double an){
    return(sin((an*pi)/180.0));
}

double coss(double an){
    return(cos((an*pi)/180.0));
}

int main(int argc, char *argv[]){

    double voy, vox, v, al, h, an, h0;
    int n, p1, p2;
    while(cin >> h0){
        h=0.0;
        cin>>p1>>p2;
        cin>>n;
        for(int i=0;i<n;i++){
            cin >> an>>v;
            al = ((v*sen(an))* (v*sen(an))) / (2*g);
            h=h0+al;
            voy = v*sen(an);
            vox = v*coss(an);
            al=((vox*voy)/g)+(vox*(sqrt((2*h)/g)));
            if(!(al>=p1 && al <=p2)) cout << fixed << setprecision(5) << al << " -> NUCK" <<endl;
            else cout << fixed << setprecision(5) << al << " -> DUCK" << endl;

        }
    }
    return 0;
}