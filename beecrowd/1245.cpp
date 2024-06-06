//Botas perdidas - 1245 - beecrowd

#include <bits/stdc++.h>
using namespace std;

int main(){
    char l;
    int n, m, p;
    int s[61][2];

    while(cin>>n){
        memset(s,0,sizeof(s));
        for(int i=0; i<n;i++){
            cin >> m >> l;
            ++s[m][l=='E'];
        }
        p = 0;
        for(int j=30; j<61; j++){
            p += min(s[j][0], s[j][1]);
        }
        cout << p << endl;
    }


    return 0;
}