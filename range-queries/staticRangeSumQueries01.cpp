#include <iostream>
using namespace std;

long long accrued[100005];

int main(){
    int n,q;
    cout<<"Ingrese la cantidad de numeros: "; cin >> n;
    cout<<"Ingrese la cantidad de consultas: "; cin >> q;

    accrued[0] = 0;

    for(int i=1; i<=n; i++){    //usar "val"
        cout<<"Elemento "<< i << ": "; cin>>accrued[i];
        accrued[i] += accrued[i-1];
        
    }
    
    for(int i=1;i<=q;i++){
        int a,b;
        cout <<"\nIngrese a: "; cin>>a;
        cout<<"Ingrese b: "; cin>>b;
        cout<<"\nResultado: "<<accrued[b]-accrued[a-1]<<endl;
    }
    return 0;
}