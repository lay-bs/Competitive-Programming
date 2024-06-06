// Bolhas e Baldes - 1088 - beecrowd

#include <bits/stdc++.h>
using namespace std;

int is; //inversoes

bool c(int a, int b)
{
    return a<b;
}

template <class T>
void merge(vector<T> &V, int in, int m, int f){ // in=inicio m=meio f=fim
    vector<int> aux(V.begin()+in, V.begin()+f);
    int i=0, i1= in, i2=m, n1=m, n2=f;

    while(i1<n1 && i2<n2){
        if(c(V[i1], V[i2])){
            aux[i++] = V[i1++];
        }
        
        else{
            aux[i++] = V[i2++];
            is += (n1-i1);
        }

    }

    while(i1<n1){
        aux[i++] = V[i1++];
    }

    while(i2<n2){
        aux[i++]=V[i2++];
    }

    for(int i= in; i<f; i++){
        V[i]=aux[i-in];
    }
}

template<class T>
void mergeSort(vector<T> &V, int in, int f){
    if(f-in>1){
        int m = (in+f)/2;

        mergeSort(V, in, m);
        mergeSort(V, m, f);
        merge(V, in, m,f);
    }
}

int main(){

    int n;
    vector<int>P;

    while(cin >> n){
        if(!n)
            break;
        P.assign(n,0);

        for(int i = 0; i<n; i++){
            cin >> P[i];
        }

        is = 0;
        mergeSort(P, 0, P.size());

        cout << (string)(is%2?"Marcelo" : "Carlos") << endl;
    }

    return 0;
}