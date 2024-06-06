// Sub-prime - 1105 - beecrowd

#include <bits/stdc++.h>
using namespace std;

int main(){
    bool possivel;
    int s[21];
    int b, n, d, c, v; //b=B n=N d=devedor c=credor v=valor

    while(cin >> b >> n){
        if(!b && !n){
            break;
        }
        for(int i=1; i <= b; i++){
            cin >> s[i];
        }

        for(int i=0; i < n; i++){
            cin >> d >> c >> v;
            s[d]-=v;
            s[c]+=v;
        }
        
        possivel = true;
        for(int i=1; i <=b; i++){
            if(s[i]<0){
                possivel = false;
                break;
            }
        }
        cout << (char) (possivel ? 'S' : 'N') << endl;
    }



    return 0;
}