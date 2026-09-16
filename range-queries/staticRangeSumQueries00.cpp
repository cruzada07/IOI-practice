#include <iostream>
using namespace std;

long long pref[200005];

int main(){
    int n,q;
    cin >> n >> q ;

    pref[0]= 0;
    for(int i=1; i<=n;i++){
        long long valor;
        cin>>valor;

        pref[i] = pref[i-1] + valor;
    }

    for(int i = 0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<pref[b]-pref[a-1]<<endl;
    }
    return 0;
}